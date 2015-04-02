// adalineDoc.cpp : implementation of the CAdalineDoc class
//

#include "stdafx.h"
#include "adaline.h"

#include "adalineDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAdalineDoc

IMPLEMENT_DYNCREATE(CAdalineDoc, CDocument)

BEGIN_MESSAGE_MAP(CAdalineDoc, CDocument)
	//{{AFX_MSG_MAP(CAdalineDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAdalineDoc construction/destruction

CAdalineDoc::CAdalineDoc()
{
	// TODO: add one-time construction code here

}

CAdalineDoc::~CAdalineDoc()
{
}

BOOL CAdalineDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CAdalineDoc serialization

void CAdalineDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CAdalineDoc diagnostics

#ifdef _DEBUG
void CAdalineDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAdalineDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAdalineDoc commands
