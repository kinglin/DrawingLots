// ManDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "DrawingLots2.0.h"
#include "ManDlg.h"
#include "afxdialogex.h"
#include "ManDrawDlg.h"


// CManDlg 对话框

IMPLEMENT_DYNAMIC(CManDlg, CDialogEx)

CManDlg::CManDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CManDlg::IDD, pParent)
	, m_ManSum(0)
	, m_ManGroupNum(0)
	, m_ManGroupOne(0)
	, m_ManGroupTwo(0)
	, m_ManGroupThree(0)
	//, m_ManDiffNum(0)
	, m_ManCrew01(_T(""))
	, m_ManCrew02(_T(""))
	, m_ManCrew03(_T(""))
	, m_ManCrew04(_T(""))
	, m_ManCrew05(_T(""))
	, m_ManCrew06(_T(""))
	, m_ManCrew07(_T(""))
	, m_ManCrew08(_T(""))
	, m_ManCrew09(_T(""))
	, m_ManCrew10(_T(""))
	, m_ManCrew11(_T(""))
	, m_ManCrew12(_T(""))
	, m_ManCrew13(_T(""))
	, m_ManCrew14(_T(""))
	, m_ManCrew15(_T(""))
	, m_ManCrew16(_T(""))
	, m_ManCrew17(_T(""))
	, m_ManCrew18(_T(""))
{

}

CManDlg::~CManDlg()
{
}

void CManDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT24, m_ManSum);
	DDX_Text(pDX, IDC_EDIT25, m_ManGroupNum);
	DDX_Text(pDX, IDC_EDIT20, m_ManGroupOne);
	DDX_Text(pDX, IDC_EDIT23, m_ManGroupTwo);
	DDX_Text(pDX, IDC_EDIT21, m_ManGroupThree);
	//DDX_Text(pDX, IDC_EDIT22, m_ManDiffNum);
	DDX_Text(pDX, IDC_EDIT2, m_ManCrew01);
	DDX_Text(pDX, IDC_EDIT1, m_ManCrew02);
	DDX_Text(pDX, IDC_EDIT4, m_ManCrew03);
	DDX_Text(pDX, IDC_EDIT3, m_ManCrew04);
	DDX_Text(pDX, IDC_EDIT6, m_ManCrew05);
	DDX_Text(pDX, IDC_EDIT5, m_ManCrew06);
	DDX_Text(pDX, IDC_EDIT7, m_ManCrew07);
	DDX_Text(pDX, IDC_EDIT9, m_ManCrew08);
	DDX_Text(pDX, IDC_EDIT8, m_ManCrew09);
	DDX_Text(pDX, IDC_EDIT19, m_ManCrew10);
	DDX_Text(pDX, IDC_EDIT10, m_ManCrew11);
	DDX_Text(pDX, IDC_EDIT13, m_ManCrew12);
	DDX_Text(pDX, IDC_EDIT12, m_ManCrew13);
	DDX_Text(pDX, IDC_EDIT15, m_ManCrew14);
	DDX_Text(pDX, IDC_EDIT14, m_ManCrew15);
	DDX_Text(pDX, IDC_EDIT16, m_ManCrew16);
	DDX_Text(pDX, IDC_EDIT18, m_ManCrew17);
	DDX_Text(pDX, IDC_EDIT17, m_ManCrew18);
}


BEGIN_MESSAGE_MAP(CManDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CManDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CManDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CManDlg 消息处理程序


void CManDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	
	m_ManGroupThree = 0;
	m_ManGroupTwo = 0;
	m_ManGroupOne = 0;

	UpdateData(FALSE);

	UpdateData(TRUE);

	CWnd *tmp;
	tmp=GetDlgItem(IDC_EDIT17);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT18);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT16);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT14);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT15);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT12);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT13);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT10);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT19);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT8);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT9);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT7);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT5);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT21);
	tmp->EnableWindow(TRUE);
	tmp=GetDlgItem(IDC_EDIT23);
	tmp->EnableWindow(TRUE);

	if(m_ManSum>=0&&m_ManSum<5 || m_ManSum>18)
	{
		MessageBox(_T("TOTAL(CREWS) is wrong!队伍数量有误!"));
		return;
	}
	if(m_ManGroupNum<1 || m_ManGroupNum>3 )
	{
		MessageBox(_T("TOTAL(GROUP) is wrong!组别总数有误!"));
		return ;
	}
	
	if(m_ManGroupNum == 2)
	{
		tmp=GetDlgItem(IDC_EDIT21);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManGroupNum == 1)
	{
		tmp=GetDlgItem(IDC_EDIT21);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT23);
		tmp->EnableWindow(FALSE);
	}
	
	if(m_ManSum == 17)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 16)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 15)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 15)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 14)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT14);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 13)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT14);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT15);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 12)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT14);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT15);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT12);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 11)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT14);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT15);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT12);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT13);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 10)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT14);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT15);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT12);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT13);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT10);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 9)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT14);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT15);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT12);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT13);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT10);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT19);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 8)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT14);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT15);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT12);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT13);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT10);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT19);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT8);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 7)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT14);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT15);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT12);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT13);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT10);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT19);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT8);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT9);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 6)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT14);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT15);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT12);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT13);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT10);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT19);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT8);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT9);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT7);
		tmp->EnableWindow(FALSE);
	}
	if(m_ManSum == 5)
	{
		tmp=GetDlgItem(IDC_EDIT17);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT18);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT16);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT14);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT15);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT12);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT13);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT10);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT19);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT8);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT9);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT7);
		tmp->EnableWindow(FALSE);
		tmp=GetDlgItem(IDC_EDIT5);
		tmp->EnableWindow(FALSE);
	}
}


void CManDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码

	UpdateData(TRUE);

	initCrewName();

	drawing(m_ManSum,m_ManGroupNum,m_ManGroupOne,m_ManGroupTwo,m_ManGroupThree);
	
}

void CManDlg::initCrewName()
{
	UpdateData(TRUE);

	m_ManCrew[0] = m_ManCrew01;
	m_ManCrew[1] = m_ManCrew02;
	m_ManCrew[2] = m_ManCrew03;
	m_ManCrew[3] = m_ManCrew04;
	m_ManCrew[4] = m_ManCrew05;
	m_ManCrew[5] = m_ManCrew06;
	m_ManCrew[6] = m_ManCrew07;
	m_ManCrew[7] = m_ManCrew08;
	m_ManCrew[8] = m_ManCrew09;
	m_ManCrew[9] = m_ManCrew10;
	m_ManCrew[10] = m_ManCrew11;
	m_ManCrew[11] = m_ManCrew12;
	m_ManCrew[12] = m_ManCrew13;
	m_ManCrew[13] = m_ManCrew14;
	m_ManCrew[14] = m_ManCrew15;
	m_ManCrew[15] = m_ManCrew16;
	m_ManCrew[16] = m_ManCrew17;
	m_ManCrew[17] = m_ManCrew18;

}

void CManDlg::drawing(int crewSum,int groupNum,int groupNum01,int groupNum02,int groupNum03)
{
	UpdateData(TRUE);
	
	CManDrawDlg crewDrawDlg;
	int i, a, count01, count02, count03, distribute01;
	CString m_tempCrew[21],m_DrawCrew[21]; 
	
	srand(time(0));
	
	count01 = 0;
	count02 = 0;
	count03 = 0;

	for(i=0; i<21; i++)
	{
		m_tempCrew[i] = "";
		m_DrawCrew[i] = "";
	}

	for(i=0; i<crewSum; i++)
	{
		m_tempCrew[i] = m_ManCrew[i];
	}

	if(groupNum == 3)    //3个组
	{
		if((groupNum01>7 || groupNum01 <1)
			||(groupNum02>7 || groupNum02 <1)
			||(groupNum03>7 || groupNum03 <1)
			||(groupNum01+groupNum02+groupNum03 != crewSum))
		{
			MessageBox(_T("The number of CREWS is wrong!艇数输入有误！"));
			return;
		}
		else
		{
			for(i=0 ;i<crewSum ;i++)
			{
				if(i == 1)
				{
					if(distribute01 == 1)
					{
						a = rand()%(groupNum02+groupNum03);
						if( a<groupNum02 )
						{
							a = a+7;
							while(m_DrawCrew[a] != "")
							{
								if(a >= 7+groupNum02-1) a = 7;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count02++;
							//if(count01 >= groupNum01 && count02 < groupNum02) i--;
						}
						else if( a >= groupNum02)
						{
							a = a + 14 - groupNum02;
							while(m_DrawCrew[a] != "")
							{
								if(a >= 14 + groupNum03 - 1) a = 14;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count03++;
							//if(count02 >= groupNum02 && count01 < groupNum01) i--;
						}
					}
					else if(distribute01 == 2)
					{
						a = rand()%(groupNum01+groupNum03);
						if( a<groupNum01)
						{
							while(m_DrawCrew[a] != "")
							{
								if(a >= groupNum01-1) a = 0;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count01++;
							//if(count01 >= groupNum01 && count02 < groupNum02) i--;
						}
						else if( a >= groupNum01)
						{
							a = a + 14 - groupNum01;
							while(m_DrawCrew[a] != "")
							{
								if(a >= 14 + groupNum03 - 1) a = 14;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count03++;
							//if(count02 >= groupNum02 && count01 < groupNum01) i--;
						}
					}
					else
					{
						a = rand()%(groupNum01+groupNum02);
						if( a<groupNum01)
						{
							while(m_DrawCrew[a] != "")
							{
								if(a >= groupNum01-1) a = 0;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count01++;
							//if(count01 >= groupNum01 && count02 < groupNum02) i--;
						}
						else if( a >= groupNum01 )
						{
							a = a + 7 - groupNum01;
							while(m_DrawCrew[a] != "")
							{
								if(a >= 7+groupNum02-1) a = 7;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count02++;
							//if(count02 >= groupNum02 && count01 < groupNum01) i--;
						}
					}
				}
				else
				{
					if(count01<groupNum01 && count02<groupNum02 && count03<groupNum03)//三个组都没满
					{
						a = rand()%crewSum;
						if( a<groupNum01)
						{
							while(m_DrawCrew[a] != "")
							{
								if(a >= groupNum01-1) a = 0;
								else a++;
							}
							if(i == 0) distribute01 = 1;
							m_DrawCrew[a] = m_tempCrew[i];
							count01++;
							//if(count01 >= groupNum01 && count02 < groupNum02) i--;
						}
						else if( a < groupNum01+groupNum02)
						{
							a = a + 7 - groupNum01;
							while(m_DrawCrew[a] != "")
							{
								if(a >= 7+groupNum02-1) a = 7;
								else a++;
							}
							if(i == 0) distribute01 = 2;
							m_DrawCrew[a] = m_tempCrew[i];
							count02++;
							//if(count02 >= groupNum02 && count01 < groupNum01) i--;
						}
						else if(a < crewSum)
						{
							a = a + 14 - groupNum01 - groupNum02;
							while(m_DrawCrew[a] != "")
							{
								if(a >= 14 + groupNum03 - 1) a = 14;
								else a++;
							}
							if(i == 0) distribute01 = 3;
							m_DrawCrew[a] = m_tempCrew[i];
							count03++;
						}
					}
					else if(count01<groupNum01 && count02<groupNum02 && count03==groupNum03)  //3组满
					{
						a = rand()%(groupNum01+groupNum02);
						if( a<groupNum01)
						{
							while(m_DrawCrew[a] != "")
							{
								if(a >= groupNum01-1) a = 0;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count01++;
							//if(count01 >= groupNum01 && count02 < groupNum02) i--;
						}
						else if( a >= groupNum01 )
						{
							a = a + 7 - groupNum01;
							while(m_DrawCrew[a] != "")
							{
								if(a >= 7+groupNum02-1) a = 7;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count02++;
							//if(count02 >= groupNum02 && count01 < groupNum01) i--;
						}
					}
					else if(count01<groupNum01 && count02==groupNum02 && count03<groupNum03)  //2组满
					{
						a = rand()%(groupNum01+groupNum03);
						if( a<groupNum01)
						{
							while(m_DrawCrew[a] != "")
							{
								if(a >= groupNum01-1) a = 0;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count01++;
							//if(count01 >= groupNum01 && count02 < groupNum02) i--;
						}
						else if( a >= groupNum01)
						{
							a = a + 14 - groupNum01;
							while(m_DrawCrew[a] != "")
							{
								if(a >= 14 + groupNum03 - 1) a = 14;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count03++;
							//if(count02 >= groupNum02 && count01 < groupNum01) i--;
						}
					}
					else if(count01==groupNum01 && count02<groupNum02 && count03<groupNum03)   //1组满
					{
						a = rand()%(groupNum02+groupNum03);
						if( a<groupNum02 )
						{
							a = a+7;
							while(m_DrawCrew[a] != "")
							{
								if(a >= 7+groupNum02-1) a = 7;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count02++;
							//if(count01 >= groupNum01 && count02 < groupNum02) i--;
						}
						else if( a >= groupNum02)
						{
							a = a + 14 - groupNum02;
							while(m_DrawCrew[a] != "")
							{
								if(a >= 14 + groupNum03 - 1) a = 14;
								else a++;
							}
							m_DrawCrew[a] = m_tempCrew[i];
							count03++;
							//if(count02 >= groupNum02 && count01 < groupNum01) i--;
						}
					}
					else if(count01==groupNum01 && count02==groupNum02 && count03<groupNum03)//1、2组满
					{
						a =rand()%groupNum03;
						a = a + 14;
						while(m_DrawCrew[a] != "")
						{
							if(a >= 14+groupNum03-1) a = 14;
							else a++;
						}
						m_DrawCrew[a] = m_tempCrew[i];
						count03++;
					}
					else if(count01<groupNum01 && count02==groupNum02 && count03==groupNum03)//2、3组满
					{
						a = rand()%groupNum01;
						while(m_DrawCrew[a] != "")
						{
							if(a >= groupNum01-1) a = 0;
							else a++;
						}
						m_DrawCrew[a] = m_tempCrew[i];
						count01++;
					}
					else if(count01==groupNum01 && count02<groupNum02 && count03==groupNum03)//1、3组满
					{
						a =rand()%groupNum02;
						a = a + 7;
						while(m_DrawCrew[a] != "")
						{
							if(a >= 7+groupNum02-1) a = 7;
							else a++;
						}
						m_DrawCrew[a] = m_tempCrew[i];
						count02++;
					}
				}
			}
			crewDrawDlg.m_ManDrawCrew11 = m_DrawCrew[0];
			crewDrawDlg.m_ManDrawCrew12 = m_DrawCrew[1];
			crewDrawDlg.m_ManDrawCrew13 = m_DrawCrew[2];
			crewDrawDlg.m_ManDrawCrew14 = m_DrawCrew[3];
			crewDrawDlg.m_ManDrawCrew15 = m_DrawCrew[4];
			crewDrawDlg.m_ManDrawCrew16 = m_DrawCrew[5];
			crewDrawDlg.m_ManDrawCrew17 = m_DrawCrew[6];

			crewDrawDlg.m_ManDrawCrew21 = m_DrawCrew[7];
			crewDrawDlg.m_ManDrawCrew22 = m_DrawCrew[8];
			crewDrawDlg.m_ManDrawCrew23 = m_DrawCrew[9];
			crewDrawDlg.m_ManDrawCrew24 = m_DrawCrew[10];
			crewDrawDlg.m_ManDrawCrew25 = m_DrawCrew[11];
			crewDrawDlg.m_ManDrawCrew26 = m_DrawCrew[12];
			crewDrawDlg.m_ManDrawCrew27 = m_DrawCrew[13];

			crewDrawDlg.m_ManDrawCrew31 = m_DrawCrew[14];
			crewDrawDlg.m_ManDrawCrew32 = m_DrawCrew[15];
			crewDrawDlg.m_ManDrawCrew33 = m_DrawCrew[16];
			crewDrawDlg.m_ManDrawCrew34 = m_DrawCrew[17];
			crewDrawDlg.m_ManDrawCrew35 = m_DrawCrew[18];
			crewDrawDlg.m_ManDrawCrew36 = m_DrawCrew[19];
			crewDrawDlg.m_ManDrawCrew37 = m_DrawCrew[20];
		}
	}
	if(groupNum == 2)
	{
		if((groupNum01>7 || groupNum01 <1)
			||(groupNum02>7 || groupNum02 <1)
			||(groupNum01+groupNum02+groupNum03 != crewSum))
		{
			MessageBox(_T("The number of CREWS is wrong!艇数输入有误！"));
			return;
		}
		else
		{
			for(i=0 ;i<crewSum ;i++)
			{
				if(i == 1)
				{
					if(distribute01 == 1)
					{
						a =rand()%groupNum02;
						a = a + 7;
						while(m_DrawCrew[a] != "")
						{
							if(a >= 7+groupNum02-1) a = 7;
							else a++;
						}
						m_DrawCrew[a] = m_tempCrew[i];
						count02++;
					}
					else
					{
						a = rand()%groupNum01;
						while(m_DrawCrew[a] != "")
						{
							if(a >= groupNum01-1) a = 0;
							else a++;
						}
						m_DrawCrew[a] = m_tempCrew[i];
						count01++;
					}
				}
				else
				{
					if(count01<groupNum01 && count02<groupNum02)
					{
						a = rand()%crewSum;
						if( a<groupNum01)
						{
							while(m_DrawCrew[a] != "")
							{
								if(a >= groupNum01-1) a = 0;
								else a++;
							}
							if(i == 0) distribute01 = 1;
							m_DrawCrew[a] = m_tempCrew[i];
							count01++;
							//if(count01 >= groupNum01 && count02 < groupNum02) i--;
						}
						if( a>=groupNum01)
						{
							a = a + 7 - groupNum01;
							while(m_DrawCrew[a] != "")
							{
								if(a >= 7+groupNum02-1) a = 7;
								else a++;
							}
							if(i == 0) distribute01 = 2;
							m_DrawCrew[a] = m_tempCrew[i];
							count02++;
							//if(count02 >= groupNum02 && count01 < groupNum01) i--;
						}
					}
					else if(count01==groupNum01 && count02<groupNum02)
					{
						a =rand()%groupNum02;
						a = a + 7;
						while(m_DrawCrew[a] != "")
						{
							if(a >= 7+groupNum02-1) a = 7;
							else a++;
						}
						m_DrawCrew[a] = m_tempCrew[i];
						count02++;
					}
					else if(count01<groupNum01 && count02==groupNum02)
					{
						a = rand()%groupNum01;
						while(m_DrawCrew[a] != "")
						{
							if(a >= groupNum01-1) a = 0;
							else a++;
						}
						m_DrawCrew[a] = m_tempCrew[i];
						count01++;
					}
				}
				
			}
			crewDrawDlg.m_ManDrawCrew11 = m_DrawCrew[0];
			crewDrawDlg.m_ManDrawCrew12 = m_DrawCrew[1];
			crewDrawDlg.m_ManDrawCrew13 = m_DrawCrew[2];
			crewDrawDlg.m_ManDrawCrew14 = m_DrawCrew[3];
			crewDrawDlg.m_ManDrawCrew15 = m_DrawCrew[4];
			crewDrawDlg.m_ManDrawCrew16 = m_DrawCrew[5];
			crewDrawDlg.m_ManDrawCrew17 = m_DrawCrew[6];

			crewDrawDlg.m_ManDrawCrew21 = m_DrawCrew[7];
			crewDrawDlg.m_ManDrawCrew22 = m_DrawCrew[8];
			crewDrawDlg.m_ManDrawCrew23 = m_DrawCrew[9];
			crewDrawDlg.m_ManDrawCrew24 = m_DrawCrew[10];
			crewDrawDlg.m_ManDrawCrew25 = m_DrawCrew[11];
			crewDrawDlg.m_ManDrawCrew26 = m_DrawCrew[12];
			crewDrawDlg.m_ManDrawCrew27 = m_DrawCrew[13];
		}
	}
	if(groupNum == 1)
	{
		if((groupNum01>7 || groupNum01 <1)
			||(groupNum01+groupNum02+groupNum03 != crewSum))
		{
			MessageBox(_T("The number of CREWS is wrong!艇数输入有误！"));
			return;
		}
		else
		{
			for(i=0 ;i<crewSum ;i++)
			{
				a = rand()%crewSum;
				while(m_DrawCrew[a] != "")
				{	
					if(a >= crewSum-1) a = 0;
					else a++;
				}
				m_DrawCrew[a] = m_tempCrew[i];
			}
			crewDrawDlg.m_ManDrawCrew11 = m_DrawCrew[0];
			crewDrawDlg.m_ManDrawCrew12 = m_DrawCrew[1];
			crewDrawDlg.m_ManDrawCrew13 = m_DrawCrew[2];
			crewDrawDlg.m_ManDrawCrew14 = m_DrawCrew[3];
			crewDrawDlg.m_ManDrawCrew15 = m_DrawCrew[4];
			crewDrawDlg.m_ManDrawCrew16 = m_DrawCrew[5];
			crewDrawDlg.m_ManDrawCrew17 = m_DrawCrew[6];
		}
	}

	crewDrawDlg.DoModal();
}