
// DrawingLots2.0.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDrawingLots20App:
// �йش����ʵ�֣������ DrawingLots2.0.cpp
//

class CDrawingLots20App : public CWinApp
{
public:
	CDrawingLots20App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDrawingLots20App theApp;