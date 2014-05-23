#if !defined(AFX_MOVALUEMAPRENDERER_H__2D202321_4AC1_412C_9B2C_9582CF8EB4C9__INCLUDED_)
#define AFX_MOVALUEMAPRENDERER_H__2D202321_4AC1_412C_9B2C_9582CF8EB4C9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CMoSymbol;

/////////////////////////////////////////////////////////////////////////////
// CMoValueMapRenderer wrapper class

class CMoValueMapRenderer : public COleDispatchDriver
{
public:
	CMoValueMapRenderer() {}		// Calls COleDispatchDriver default constructor
	CMoValueMapRenderer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMoValueMapRenderer(const CMoValueMapRenderer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetField();
	void SetField(LPCTSTR);
	CMoSymbol GetDefaultSymbol();
	void SetDefaultSymbol(LPDISPATCH);
	BOOL GetUseDefault();
	void SetUseDefault(BOOL);
	short GetValueCount();
	void SetValueCount(short);
	CString GetTag();
	void SetTag(LPCTSTR);
	long GetSymbolType();
	void SetSymbolType(long);
	CString GetRotationField();
	void SetRotationField(LPCTSTR);
	CString GetScalingField();
	void SetScalingField(LPCTSTR);

// Operations
public:
	CString GetValue(short index);
	void SetValue(short index, LPCTSTR lpszNewValue);
	CMoSymbol GetSymbol(short index);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOVALUEMAPRENDERER_H__2D202321_4AC1_412C_9B2C_9582CF8EB4C9__INCLUDED_)
