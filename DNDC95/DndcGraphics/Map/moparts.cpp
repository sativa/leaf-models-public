// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "moparts.h"


/////////////////////////////////////////////////////////////////////////////
// CMoParts properties

short CMoParts::GetCount()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void CMoParts::SetCount(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CMoParts operations

void CMoParts::Add(LPDISPATCH Points)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Points);
}

void CMoParts::Set(short index, LPDISPATCH Points)
{
	static BYTE parms[] =
		VTS_I2 VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 index, Points);
}

void CMoParts::Remove(short index)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 index);
}

void CMoParts::Insert(short index, LPDISPATCH Points)
{
	static BYTE parms[] =
		VTS_I2 VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 index, Points);
}

LPDISPATCH CMoParts::Item(const VARIANT& Item)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Item);
	return result;
}
