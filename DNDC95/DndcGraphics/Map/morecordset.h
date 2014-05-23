#if !defined(AFX_MORECORDSET_H__5D38FD8B_35DC_492F_9AF3_E5140C8E6DB7__INCLUDED_)
#define AFX_MORECORDSET_H__5D38FD8B_35DC_492F_9AF3_E5140C8E6DB7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CMoFields;
class CMoTableDesc;
class CMoStatistics;
class CMoGeoDataset;

/////////////////////////////////////////////////////////////////////////////
// CMoRecordset wrapper class

class CMoRecordset : public COleDispatchDriver
{
public:
	CMoRecordset() {}		// Calls COleDispatchDriver default constructor
	CMoRecordset(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMoRecordset(const CMoRecordset& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CMoFields GetFields();
	void SetFields(LPDISPATCH);
	BOOL GetEof();
	void SetEof(BOOL);
	long GetCount();
	void SetCount(long);
	long GetEditMode();
	void SetEditMode(long);
	BOOL GetUpdatable();
	void SetUpdatable(BOOL);
	CMoTableDesc GetTableDesc();
	void SetTableDesc(LPDISPATCH);
	BOOL GetAutoFlush();
	void SetAutoFlush(BOOL);
	BOOL GetSupportsTransactions();
	void SetSupportsTransactions(BOOL);

// Operations
public:
	void MoveFirst();
	void MoveNext();
	void MovePrevious();
	CMoStatistics CalculateStatistics(LPCTSTR FieldName);
	void Delete();
	void Edit();
	void AddNew();
	void Update();
	void CancelUpdate();
	void StopEditing();
	CMoGeoDataset Export(LPCTSTR OutName, const VARIANT& OutCoordSys);
	void StartTransaction();
	void RollbackTransaction();
	void CommitTransaction();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MORECORDSET_H__5D38FD8B_35DC_492F_9AF3_E5140C8E6DB7__INCLUDED_)
