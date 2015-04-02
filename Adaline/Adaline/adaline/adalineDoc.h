// adalineDoc.h : interface of the CAdalineDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ADALINEDOC_H__0639FD73_59A0_4C41_A094_F344BF19BACE__INCLUDED_)
#define AFX_ADALINEDOC_H__0639FD73_59A0_4C41_A094_F344BF19BACE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAdalineDoc : public CDocument
{
protected: // create from serialization only
	CAdalineDoc();
	DECLARE_DYNCREATE(CAdalineDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdalineDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAdalineDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAdalineDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADALINEDOC_H__0639FD73_59A0_4C41_A094_F344BF19BACE__INCLUDED_)
