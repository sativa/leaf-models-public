#if !defined(AFX_MOLABELRENDERER_H__9908F71F_7DB0_4E71_935C_36F3234E52D7__INCLUDED_)
#define AFX_MOLABELRENDERER_H__9908F71F_7DB0_4E71_935C_36F3234E52D7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CMoTextSymbol;

/////////////////////////////////////////////////////////////////////////////
// CMoLabelRenderer wrapper class

class CMoLabelRenderer : public COleDispatchDriver
{
public:
	CMoLabelRenderer() {}		// Calls COleDispatchDriver default constructor
	CMoLabelRenderer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMoLabelRenderer(const CMoLabelRenderer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetField();
	void SetField(LPCTSTR);
	BOOL GetDrawBackground();
	void SetDrawBackground(BOOL);
	CString GetSymbolField();
	void SetSymbolField(LPCTSTR);
	CString GetLevelField();
	void SetLevelField(LPCTSTR);
	short GetMinLevel();
	void SetMinLevel(short);
	short GetMaxLevel();
	void SetMaxLevel(short);
	CString GetRotationField();
	void SetRotationField(LPCTSTR);
	CString GetHeightField();
	void SetHeightField(LPCTSTR);
	BOOL GetSplinedText();
	void SetSplinedText(BOOL);
	BOOL GetAllowDuplicates();
	void SetAllowDuplicates(BOOL);
	CString GetTag();
	void SetTag(LPCTSTR);
	BOOL GetFlip();
	void SetFlip(BOOL);
	CString GetXOffsetField();
	void SetXOffsetField(LPCTSTR);
	CString GetYOffsetField();
	void SetYOffsetField(LPCTSTR);
	CString GetFittedField();
	void SetFittedField(LPCTSTR);
	short GetSymbolCount();
	void SetSymbolCount(short);

// Operations
public:
	CMoTextSymbol GetSymbol(short index);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOLABELRENDERER_H__9908F71F_7DB0_4E71_935C_36F3234E52D7__INCLUDED_)
