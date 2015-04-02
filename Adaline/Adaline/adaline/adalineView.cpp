// adalineView.cpp : implementation of the CAdalineView class
//

#include "stdafx.h"
#include "adaline.h"

#include "adalineDoc.h"
#include "adalineView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAdalineView

IMPLEMENT_DYNCREATE(CAdalineView, CFormView)

BEGIN_MESSAGE_MAP(CAdalineView, CFormView)
	//{{AFX_MSG_MAP(CAdalineView)
	ON_BN_CLICKED(IDC_BUTTON_GO, OnButtonGo)
	ON_EN_CHANGE(IDC_EDITD1, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITD2, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITD3, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITD4, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITETA, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITW0, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITW1, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITW2, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX10, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX11, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX12, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX20, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX21, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX22, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX30, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX31, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX32, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX40, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX41, OnChangeInput)
	ON_EN_CHANGE(IDC_EDITX42, OnChangeInput)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAdalineView construction/destruction

CAdalineView::CAdalineView()
	: CFormView(CAdalineView::IDD)
{
	//{{AFX_DATA_INIT(CAdalineView)
	m_strD1 = _T("");
	m_strD2 = _T("");
	m_strD3 = _T("");
	m_strD4 = _T("");
	m_strEta = _T("");
	m_strOutput = _T("");
	m_strW0 = _T("");
	m_strW1 = _T("");
	m_strW2 = _T("");
	m_strX10 = _T("");
	m_strX11 = _T("");
	m_strX12 = _T("");
	m_strX20 = _T("");
	m_strX21 = _T("");
	m_strX22 = _T("");
	m_strX30 = _T("");
	m_strX31 = _T("");
	m_strX32 = _T("");
	m_strX40 = _T("");
	m_strX41 = _T("");
	m_strX42 = _T("");
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CAdalineView::~CAdalineView()
{
}

void CAdalineView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAdalineView)
	DDX_Text(pDX, IDC_EDITD1, m_strD1);
	DDX_Text(pDX, IDC_EDITD2, m_strD2);
	DDX_Text(pDX, IDC_EDITD3, m_strD3);
	DDX_Text(pDX, IDC_EDITD4, m_strD4);
	DDX_Text(pDX, IDC_EDITETA, m_strEta);
	DDX_Text(pDX, IDC_EDITOUTPUT, m_strOutput);
	DDX_Text(pDX, IDC_EDITW0, m_strW0);
	DDX_Text(pDX, IDC_EDITW1, m_strW1);
	DDX_Text(pDX, IDC_EDITW2, m_strW2);
	DDX_Text(pDX, IDC_EDITX10, m_strX10);
	DDX_Text(pDX, IDC_EDITX11, m_strX11);
	DDX_Text(pDX, IDC_EDITX12, m_strX12);
	DDX_Text(pDX, IDC_EDITX20, m_strX20);
	DDX_Text(pDX, IDC_EDITX21, m_strX21);
	DDX_Text(pDX, IDC_EDITX22, m_strX22);
	DDX_Text(pDX, IDC_EDITX30, m_strX30);
	DDX_Text(pDX, IDC_EDITX31, m_strX31);
	DDX_Text(pDX, IDC_EDITX32, m_strX32);
	DDX_Text(pDX, IDC_EDITX40, m_strX40);
	DDX_Text(pDX, IDC_EDITX41, m_strX41);
	DDX_Text(pDX, IDC_EDITX42, m_strX42);
	//}}AFX_DATA_MAP
}

BOOL CAdalineView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CAdalineView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	m_strD1="1";
	m_strD2="-1";
	m_strD3="1";
	m_strD4="1";
	m_strEta="0.2";	
	m_strOutput="";
	m_strW0="0.8";
	m_strW1="0.8";
	m_strW2="0.8";
	m_strX10="1";
	m_strX11="-1";
	m_strX12="-1";
	m_strX20="1";
	m_strX21="-1";
	m_strX22="1";
	m_strX30="1";
	m_strX31="1";
	m_strX32="-1";
	m_strX40="1";
	m_strX41="1";
	m_strX42="1";






	UpdateData( false);
}

/////////////////////////////////////////////////////////////////////////////
// CAdalineView printing

BOOL CAdalineView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CAdalineView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CAdalineView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CAdalineView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CAdalineView diagnostics

#ifdef _DEBUG
void CAdalineView::AssertValid() const
{
	CFormView::AssertValid();
}

void CAdalineView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CAdalineDoc* CAdalineView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAdalineDoc)));
	return (CAdalineDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAdalineView message handlers

void CAdalineView::OnButtonGo() 
{
	// TODO: Add your control notification handler code here

	float d1, d2, d3, d4, eta;
	float y1, y2, y3, y4;
	float w10, w11, w12;
	float w20, w21, w22;
	float w30, w31, w32;
	float w40, w41, w42;
	float x10, x11, x12;
	float x20, x21, x22;
	float x30, x31, x32;
	float x40, x41, x42;
	
	float net1, net2, net3, net4;

	float dw10, dw11, dw12;
	float dw20, dw21, dw22;
	float dw30, dw31, dw32;
	float dw40, dw41, dw42;

	eta = atof(m_strEta);

	d1 = atof(m_strD1);
	d2 = atof(m_strD2);
	d3 = atof(m_strD3);
	d4 = atof(m_strD4);

	CString str="";
	m_strOutput="";


	////Starting data
	w10 = atof(m_strW0);	
	w11 = atof(m_strW1);
	w12 = atof(m_strW2);
	int passes = 0;
	int matches = 0;

	x10 = atof(m_strX10);
	x11 = atof(m_strX11);
	x12 = atof(m_strX12);
	x20 = atof(m_strX20);
	x21 = atof(m_strX21);
	x22 = atof(m_strX22);
	x30 = atof(m_strX30);
	x31 = atof(m_strX31);
	x32 = atof(m_strX32);
	x40 = atof(m_strX40);
	x41 = atof(m_strX41);
	x42 = atof(m_strX42);

	while (passes <= 100){
		///// pass 1

		adaline(x10, x11, x12, w10, w11, w12, d1, net1, y1,
				dw10, dw11, dw12, eta);

		//// change weights from pass1 to pass 2
		w20 = w10+dw10;
		w21 = w11+dw11;
		w22 = w12+dw12;

		///// pass 2
		adaline(x20, x21, x22, w20, w21, w22, d2, net2, y2,
				dw20, dw21, dw22, eta);

		//// change weights from pass2 to pass 3
		w30 = w20+dw20;
		w31 = w21+dw21;
		w32 = w22+dw22;

		///// pass 3
		adaline(x30, x31, x32, w30, w31, w32, d3, net3, y3,
				dw30, dw31, dw32, eta);

		//// change weights from pass3 to pass 4
		w40 = w30+dw30;
		w41 = w31+dw31;
		w42 = w32+dw32;

		///// pass 4
		adaline(x40, x41, x42, w40, w41, w42, d4, net4, y4,
				dw40, dw41, dw42, eta);


		UpdateData(FALSE);


		//// change weights from pass4 to pass 1
		w10 = w40+dw40;
		w11 = w41+dw41;
		w12 = w42+dw42;


		passes++;
	}

}

void CAdalineView::OnChangeInput() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CFormView::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
}

void CAdalineView::adaline(float x0, float x1, float x2, 
							float w0, float w1, float w2,
						   float d, float net, float y, 
						   float &dw0, float &dw1, float &dw2, float eta)
{

	CString str = "";
	net = x0*w0 + x1*w1 + x2*w2;
	if (net >= 0)
		y = 1;
	else
		y = -1;
	dw0 = eta*x0*(d - net);
	dw1 = eta*x1*(d - net);
	dw2 = eta*x2*(d - net);

	//inputs
	str.Format("%.2f\t%.2f\t%.2f\t",x0,x1,x2);
	m_strOutput += str;
	//weights
	str.Format("%.2f\t%.2f\t%.2f\t",w0,w1,w2);
	m_strOutput += str;
	//d, net, y
	str.Format("%.2f\t%.2f\t%.2f\t",d,net,y);
	m_strOutput += str;
	//weight adjustments
	str.Format("%.2f\t%.2f\t%.2f\t\r\n",dw0,dw1,dw2);
	m_strOutput += str;


}
