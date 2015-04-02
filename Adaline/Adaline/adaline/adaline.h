// adaline.h : main header file for the ADALINE application
//

#if !defined(AFX_ADALINE_H__1B8CD4E6_1C3E_4D01_BAE3_79A37F3CC91E__INCLUDED_)
#define AFX_ADALINE_H__1B8CD4E6_1C3E_4D01_BAE3_79A37F3CC91E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAdalineApp:
// See adaline.cpp for the implementation of this class
//

class CAdalineApp : public CWinApp
{
public:
	CAdalineApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdalineApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CAdalineApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADALINE_H__1B8CD4E6_1C3E_4D01_BAE3_79A37F3CC91E__INCLUDED_)
