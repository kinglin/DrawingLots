
// DrawingLots2.0Dlg.h : 头文件
//

#pragma once
#include "afxcmn.h"
#include "ManDlg.h"
#include "WomanDlg.h"


// CDrawingLots20Dlg 对话框
class CDrawingLots20Dlg : public CDialogEx
{
// 构造
public:
	CDrawingLots20Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_DRAWINGLOTS20_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tab;
	CManDlg m_ManDlg;
	CWomanDlg m_WomanDlg;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
