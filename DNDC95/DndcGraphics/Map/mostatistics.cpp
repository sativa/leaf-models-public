// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "mostatistics.h"


/////////////////////////////////////////////////////////////////////////////
// CMoStatistics properties

double CMoStatistics::GetMax()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void CMoStatistics::SetMax(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double CMoStatistics::GetMin()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void CMoStatistics::SetMin(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double CMoStatistics::GetMean()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void CMoStatistics::SetMean(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double CMoStatistics::GetStdDev()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void CMoStatistics::SetStdDev(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double CMoStatistics::GetSum()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void CMoStatistics::SetSum(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

long CMoStatistics::GetCount()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void CMoStatistics::SetCount(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CMoStatistics operations
