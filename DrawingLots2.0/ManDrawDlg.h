#pragma once


// CManDrawDlg 对话框

class CManDrawDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CManDrawDlg)

public:
	CManDrawDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CManDrawDlg();

// 对话框数据
	enum { IDD = IDD_DIALOG_ManDraw };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	
	CString m_ManDrawCrew11;
	CString m_ManDrawCrew12;
	CString m_ManDrawCrew13;
	CString m_ManDrawCrew14;
	CString m_ManDrawCrew15;
	CString m_ManDrawCrew16;
	CString m_ManDrawCrew17;
	CString m_ManDrawCrew21;
	CString m_ManDrawCrew22;
	CString m_ManDrawCrew23;
	CString m_ManDrawCrew24;
	CString m_ManDrawCrew25;
	CString m_ManDrawCrew26;
	CString m_ManDrawCrew27;
	CString m_ManDrawCrew31;
	CString m_ManDrawCrew32;
	CString m_ManDrawCrew33;
	CString m_ManDrawCrew34;
	CString m_ManDrawCrew35;
	CString m_ManDrawCrew36;
	CString m_ManDrawCrew37;
	void makeItDisabled(int groupNum,int crewNum);
};
