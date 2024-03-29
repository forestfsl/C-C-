
// PVZCheaterDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "PVZCheater.h"
#include "PVZCheaterDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// 指向对话框的指针
static CPVZCheaterDlg *g_dlg = NULL;

// 植物大战僵尸的进程句柄
static HANDLE g_process = NULL;

// 用来监控的线程
static HANDLE g_monitorThread = NULL;

void WriteMemory(void *value, DWORD valueSize, ...)
{
	if (value == NULL || valueSize == 0 || g_process == NULL) return;

	DWORD tempValue = 0;

	va_list addresses;
	va_start(addresses, valueSize);
	DWORD offset = 0;
	DWORD lastAddress = 0;
	while ((offset = va_arg(addresses, DWORD)) != -1)
	{
		lastAddress = tempValue + offset;
		ReadProcessMemory(g_process, (LPCVOID)lastAddress, &tempValue, sizeof(DWORD), NULL);
	}
	va_end(addresses);

	WriteProcessMemory(g_process, (LPVOID)lastAddress, value, valueSize, NULL);
}

void WriteMemory(void *value, DWORD valueSize, DWORD address) {
	WriteMemory(value, valueSize, address, -1);
}

// 用来监控的线程的函数代码
DWORD WINAPI monitorThreadFunc(LPVOID lpThreadParameter)
{
	while (true) {
		// 尝试查找植物大战僵尸的窗口
		HWND window = FindWindow(CString("MainWindow"), CString("植物大战僵尸中文版"));
		if (!window) 
		{
			// 没有打开游戏
			g_dlg->m_kill.EnableWindow(false);
			g_dlg->m_kill.SetCheck(false);
			g_dlg->m_sun.EnableWindow(false);
			g_dlg->m_sun.SetCheck(false);
		}
		else if (!g_process)
		{
			// 获取进程句柄
			DWORD pid = NULL;
			GetWindowThreadProcessId(window, &pid);
			g_process = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);

			g_dlg->m_kill.EnableWindow(true);
			g_dlg->m_sun.EnableWindow(true);
		}

		// 修改阳光值
		if (g_dlg->m_sun.GetCheck()) 
		{
			DWORD value = 9990;
			WriteMemory(&value, sizeof(value), 0x6A9EC0, 0x320, 0x8, 0x0, 0x8, 0x144, 0x2c, 0x5560, -1);
		}

		Sleep(1000);
	}
	return 0;
}

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CPVZCheaterDlg 对话框



CPVZCheaterDlg::CPVZCheaterDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PVZCHEATER_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPVZCheaterDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SUN, m_sun);
	DDX_Control(pDX, IDC_KILL, m_kill);
}

BEGIN_MESSAGE_MAP(CPVZCheaterDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_COURSE, CPVZCheaterDlg::OnBnClickedCourse)
	ON_BN_CLICKED(IDC_SUN, &CPVZCheaterDlg::OnBnClickedSun)
	ON_BN_CLICKED(IDC_KILL, &CPVZCheaterDlg::OnBnClickedKill)
END_MESSAGE_MAP()


// CPVZCheaterDlg 消息处理程序

BOOL CPVZCheaterDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	// 保存对话框
	g_dlg = this;

	// 创建一条子线程（监控植物大战僵尸是否有打开、实时修改阳光值）
	// HANDLE 句柄
	g_monitorThread = CreateThread(NULL, 0, monitorThreadFunc, NULL, 0, NULL);
	// TerminateThread(monitorThread, 0);

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CPVZCheaterDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CPVZCheaterDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CPVZCheaterDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CPVZCheaterDlg::OnBnClickedCourse() 
{
	ShellExecute(
		NULL, 
		CString("open"),
		CString("https://ke.qq.com/course/336509"),
		NULL, NULL, SW_SHOWNORMAL);
}

void CPVZCheaterDlg::OnBnClickedSun()
{

}

void CPVZCheaterDlg::OnBnClickedKill()
{
	DWORD address = 0x531310;
	if (this->m_kill.GetCheck()) 
	{
		BYTE value = 0xFF;
		WriteMemory(&value, sizeof(value), address);
		// BYTE value[] = { 0x2B, 0xFF, 0x90, 0x90 };
		// WriteMemory(value, sizeof(value), address);
	}
	else
	{
		BYTE value = 0x7C;
		WriteMemory(&value, sizeof(value), address);
	}
}
