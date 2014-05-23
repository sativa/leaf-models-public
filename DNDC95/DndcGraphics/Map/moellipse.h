#if !defined(AFX_MOELLIPSE_H__A681BEC4_C479_468B_BAC6_EDF4A0E99DF2__INCLUDED_)
#define AFX_MOELLIPSE_H__A681BEC4_C479_468B_BAC6_EDF4A0E99DF2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CMoRectangle;
class CMoPoint;

/////////////////////////////////////////////////////////////////////////////
// CMoEllipse wrapper class

class CMoEllipse : public COleDispatchDriver
{
public:
	CMoEllipse() {}		// Calls COleDispatchDriver default constructor
	CMoEllipse(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMoEllipse(const CMoEllipse& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CMoRectangle GetExtent();
	void SetExtent(LPDISPATCH);
	double GetLeft();
	void SetLeft(double);
	double GetRight();
	void SetRight(double);
	double GetTop();
	void SetTop(double);
	double GetBottom();
	void SetBottom(double);
	CMoPoint GetCenter();
	void SetCenter(LPDISPATCH);
	double GetWidth();
	void SetWidth(double);
	double GetHeight();
	void SetHeight(double);
	long GetShapeType();
	void SetShapeType(long);

// Operations
public:
	BOOL IsPointIn(LPDISPATCH Point);
	void Offset(double deltaX, double deltaY);
	void Inset(double deltaX, double deltaY);
	LPDISPATCH Union(LPDISPATCH anotherShape, const VARIANT& Extent);
	LPDISPATCH Xor(LPDISPATCH anotherShape, const VARIANT& Extent);
	LPDISPATCH Difference(LPDISPATCH anotherShape, const VARIANT& Extent);
	LPDISPATCH Intersect(LPDISPATCH anotherShape, const VARIANT& Extent);
	LPDISPATCH Buffer(double distance, const VARIANT& Extent);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOELLIPSE_H__A681BEC4_C479_468B_BAC6_EDF4A0E99DF2__INCLUDED_)
