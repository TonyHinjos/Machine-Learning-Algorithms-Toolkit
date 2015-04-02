// adalineView.h : interface of the CAdalineView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ADALINEVIEW_H__70D480C0_A708_4348_8E6C_B59E53E202A8__INCLUDED_)
#define AFX_ADALINEVIEW_H__70D480C0_A708_4348_8E6C_B59E53E202A8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAdalineView : public CFormView
{
protected: // create from serialization only
	CAdalineView();
	DECLARE_DYNCREATE(CAdalineView)

public:
	//{{AFX_DATA(CAdalineView)
	enum { IDD = IDD_ADALINE_FORM };
	CString	m_strD1;
	CString	m_strD2;
	CString	m_strD3;
	CString	m_strD4;
	CString	m_strEta;
	CString	m_strOutput;
	CString	m_strW0;
	CString	m_strW1;
	CString	m_strW2;
	CString	m_strX10;
	CString	m_strX11;
	CString	m_strX12;
	CString	m_strX20;
	CString	m_strX21;
	CString	m_strX22;
	CString	m_strX30;
	CString	m_strX31;
	CString	m_strX32;
	CString	m_strX40;
	CString	m_strX41;
	CString	m_strX42;
	//}}AFX_DATA

// Attributes
public:
	CAdalineDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdalineView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAdalineView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAdalineView)
	afx_msg void OnButtonGo();
	afx_msg void OnChangeInput();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	void adaline(float x0, float x1, float  x2, 
		float w0, float w1, float w2,
		float d, float net, float y, 
		float &dw0, float &dw1, float &dw2,float eta);
};

#ifndef _DEBUG  // debug version in adalineView.cpp
inline CAdalineDoc* CAdalineView::GetDocument()
   { return (CAdalineDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADALINEVIEW_H__70D480C0_A708_4348_8E6C_B59E53E202A8__INCLUDED_)
