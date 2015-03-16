#pragma once


// CWomanDlg 对话框

class CWomanDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CWomanDlg)

public:
	CWomanDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CWomanDlg();

// 对话框数据
	enum { IDD = IDD_DIALOG_W8 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	CString m_WomanCrew01;
	CString m_WomanCrew02;
	CString m_WomanCrew03;
	CString m_WomanCrew04;
	CString m_WomanCrew05;
	CString m_WomanCrew06;
	CString m_WomanCrew07;
	CString m_WomanCrew08;
	CString m_WomanCrew09;
	CString m_WomanCrew10;
	CString m_WomanCrew11;
	CString m_WomanCrew12;
	CString m_WomanCrew13;
	CString m_WomanCrew14;
	CString m_WomanCrew15;
	CString m_WomanCrew16;
	CString m_WomanCrew17;
	CString m_WomanCrew18;
	CString m_WomanCrew[18];
	int m_WomanSum;
	int m_WomanGroupNum;
	int m_WomanGroupOne;
	int m_WomanGroupTwo;
	int m_WomanGroupThree;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	void initCrewName();
	void drawing(int crewSum,int groupNum,int groupNum01,int groupNum02,int groupNum03);
};
