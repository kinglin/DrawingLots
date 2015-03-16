#pragma once


// CManDlg 对话框

class CManDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CManDlg)

public:
	CManDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CManDlg();

// 对话框数据
	enum { IDD = IDD_DIALOG_M8 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	BOOL boolOKClicked;
	int m_ManSum;
	int m_ManGroupNum;
	int m_ManGroupOne;
	int m_ManGroupTwo;
	int m_ManGroupThree;
	//int m_ManDiffNum;
	CString m_ManCrew01;
	CString m_ManCrew02;
	CString m_ManCrew03;
	CString m_ManCrew04;
	CString m_ManCrew05;
	CString m_ManCrew06;
	CString m_ManCrew07;
	CString m_ManCrew08;
	CString m_ManCrew09;
	CString m_ManCrew10;
	CString m_ManCrew11;
	CString m_ManCrew12;
	CString m_ManCrew13;
	CString m_ManCrew14;
	CString m_ManCrew15;
	CString m_ManCrew16;
	CString m_ManCrew17;
	CString m_ManCrew18;
	CString m_ManCrew[18];
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	void initCrewName();
	void drawing(int crewSum,int groupNum,int groupNum01,int groupNum02,int groupNum03);
};
