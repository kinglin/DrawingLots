
// DrawingLots2.0Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"
#include "ManDlg.h"
#include "WomanDlg.h"


// CDrawingLots20Dlg �Ի���
class CDrawingLots20Dlg : public CDialogEx
{
// ����
public:
	CDrawingLots20Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_DRAWINGLOTS20_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
