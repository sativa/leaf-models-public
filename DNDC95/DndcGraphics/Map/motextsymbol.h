#if !defined(AFX_MOTEXTSYMBOL_H__C3ACC173_360F_4CCF_9F04_CBF81BE258C6__INCLUDED_)
#define AFX_MOTEXTSYMBOL_H__C3ACC173_360F_4CCF_9F04_CBF81BE258C6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class COleFont;

/////////////////////////////////////////////////////////////////////////////
// CMoTextSymbol wrapper class

class CMoTextSymbol : public COleDispatchDriver
{
public:
	CMoTextSymbol() {}		// Calls COleDispatchDriver default constructor
	CMoTextSymbol(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMoTextSymbol(const CMoTextSymbol& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetHorizontalAlignment();
	void SetHorizontalAlignment(long);
	long GetVerticalAlignment();
	void SetVerticalAlignment(long);
	unsigned long GetColor();
	void SetColor(unsigned long);
	COleFont GetFont();
	void SetFont(LPDISPATCH);
	double GetRotation();
	void SetRotation(double);
	double GetHeight();
	void SetHeight(double);
	BOOL GetFitted();
	void SetFitted(BOOL);

// Operations
public:
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOTEXTSYMBOL_H__C3ACC173_360F_4CCF_9F04_CBF81BE258C6__INCLUDED_)
