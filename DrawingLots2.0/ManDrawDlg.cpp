// ManDrawDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "DrawingLots2.0.h"
#include "ManDrawDlg.h"
#include "afxdialogex.h"


// CManDrawDlg 对话框

IMPLEMENT_DYNAMIC(CManDrawDlg, CDialogEx)

CManDrawDlg::CManDrawDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CManDrawDlg::IDD, pParent)
	
	, m_ManDrawCrew11(_T(""))
	, m_ManDrawCrew12(_T(""))
	, m_ManDrawCrew13(_T(""))
	, m_ManDrawCrew14(_T(""))
	, m_ManDrawCrew15(_T(""))
	, m_ManDrawCrew16(_T(""))
	, m_ManDrawCrew17(_T(""))
	, m_ManDrawCrew21(_T(""))
	, m_ManDrawCrew22(_T(""))
	, m_ManDrawCrew23(_T(""))
	, m_ManDrawCrew24(_T(""))
	, m_ManDrawCrew25(_T(""))
	, m_ManDrawCrew26(_T(""))
	, m_ManDrawCrew27(_T(""))
	, m_ManDrawCrew31(_T(""))
	, m_ManDrawCrew32(_T(""))
	, m_ManDrawCrew33(_T(""))
	, m_ManDrawCrew34(_T(""))
	, m_ManDrawCrew35(_T(""))
	, m_ManDrawCrew36(_T(""))
	, m_ManDrawCrew37(_T(""))
{

}

CManDrawDlg::~CManDrawDlg()
{
}

void CManDrawDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT2, m_ManDrawCrew11);
	DDX_Text(pDX, IDC_EDIT3, m_ManDrawCrew12);
	DDX_Text(pDX, IDC_EDIT5, m_ManDrawCrew13);
	DDX_Text(pDX, IDC_EDIT4, m_ManDrawCrew14);
	DDX_Text(pDX, IDC_EDIT7, m_ManDrawCrew15);
	DDX_Text(pDX, IDC_EDIT6, m_ManDrawCrew16);
	DDX_Text(pDX, IDC_EDIT8, m_ManDrawCrew17);
	DDX_Text(pDX, IDC_EDIT9, m_ManDrawCrew21);
	DDX_Text(pDX, IDC_EDIT10, m_ManDrawCrew22);
	DDX_Text(pDX, IDC_EDIT12, m_ManDrawCrew23);
	DDX_Text(pDX, IDC_EDIT11, m_ManDrawCrew24);
	DDX_Text(pDX, IDC_EDIT14, m_ManDrawCrew25);
	DDX_Text(pDX, IDC_EDIT13, m_ManDrawCrew26);
	DDX_Text(pDX, IDC_EDIT15, m_ManDrawCrew27);
	DDX_Text(pDX, IDC_EDIT16, m_ManDrawCrew31);
	DDX_Text(pDX, IDC_EDIT17, m_ManDrawCrew32);
	DDX_Text(pDX, IDC_EDIT19, m_ManDrawCrew33);
	DDX_Text(pDX, IDC_EDIT18, m_ManDrawCrew34);
	DDX_Text(pDX, IDC_EDIT20, m_ManDrawCrew35);
	DDX_Text(pDX, IDC_EDIT26, m_ManDrawCrew36);
	DDX_Text(pDX, IDC_EDIT21, m_ManDrawCrew37);
}


BEGIN_MESSAGE_MAP(CManDrawDlg, CDialogEx)
END_MESSAGE_MAP()


// CManDrawDlg 消息处理程序
void CManDrawDlg::makeItDisabled(int groupNum,int crewNum)
{
	CWnd *tmp;

	if(groupNum == 1)
	{
		if(crewNum == 1)
		{
			tmp=GetDlgItem(IDC_EDIT8);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT7);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT6);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT5);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT4);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT3);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 2)
		{
			tmp=GetDlgItem(IDC_EDIT8);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT7);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT6);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT5);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT4);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 3)
		{
			tmp=GetDlgItem(IDC_EDIT8);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT7);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT6);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT4);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 4)
		{
			tmp=GetDlgItem(IDC_EDIT8);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT7);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT6);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 5)
		{
			tmp=GetDlgItem(IDC_EDIT8);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT6);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 6)
		{
			tmp=GetDlgItem(IDC_EDIT8);
			tmp->EnableWindow(FALSE);
		}
	}

	if(groupNum == 2)
	{
		if(crewNum == 1)
		{
			tmp=GetDlgItem(IDC_EDIT15);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT13);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT14);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT11);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT12);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT10);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 2)
		{
			tmp=GetDlgItem(IDC_EDIT15);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT13);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT14);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT11);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT12);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 3)
		{
			tmp=GetDlgItem(IDC_EDIT15);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT13);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT14);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT11);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 4)
		{
			tmp=GetDlgItem(IDC_EDIT15);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT13);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT14);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 5)
		{
			tmp=GetDlgItem(IDC_EDIT15);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT13);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 6)
		{
			tmp=GetDlgItem(IDC_EDIT15);
			tmp->EnableWindow(FALSE);
		}
	}

	if(groupNum == 3)
	{
		if(crewNum == 1)
		{
			tmp=GetDlgItem(IDC_EDIT21);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT26);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT20);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT18);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT19);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT17);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 2)
		{
			tmp=GetDlgItem(IDC_EDIT21);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT26);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT20);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT18);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT19);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 3)
		{
			tmp=GetDlgItem(IDC_EDIT21);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT26);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT20);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT18);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 4)
		{
			tmp=GetDlgItem(IDC_EDIT21);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT26);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT20);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 5)
		{
			tmp=GetDlgItem(IDC_EDIT21);
			tmp->EnableWindow(FALSE);
			tmp=GetDlgItem(IDC_EDIT26);
			tmp->EnableWindow(FALSE);
		}
		if(crewNum == 6)
		{
			tmp=GetDlgItem(IDC_EDIT21);
			tmp->EnableWindow(FALSE);
		}
	}
}