
// MFCprojectDlg.h : header file
//

#pragma once

#include "Figure.h"
//!! 17 b
#include "RectangleF.h"
#include "EllipseF.h"
//!! 17 e

// CMFCprojectDlg dialog
class CMFCprojectDlg : public CDialogEx
{
// Construction
public:
	CMFCprojectDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCPROJECT_DIALOG };
#endif
	CPoint start, end;
	bool isPressed=false;
	 CTypedPtrArray< CObArray, Figure*> figs;
     //!! 17 b
	 int futureFigureKind = 1; //Rectangle (2 - Ellipse)
	 //!! 17 e
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
