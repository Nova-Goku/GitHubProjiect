#pragma once
#include "IFactory.h"

class xhBFISServerJZPluginFactoryImp : public IFactory
{
public:
	xhBFISServerJZPluginFactoryImp(void);
	~xhBFISServerJZPluginFactoryImp(void);
public:
	virtual CISocObject* CreateObject(ISOC_UINT nObjType,const ISOC_STR strFacilityDes,const ISOC_STR pFunction,ISOC_DWORDPTR dwReserved = NULL);
	virtual ISOC_VOID ReleaseObject(CISocObject** ppObj,const ISOC_STR pFunction,ISOC_DWORDPTR dwReserved = NULL);
	virtual ISOC_bool HasObjectInObjType(ISOC_UINT nObjType);
	virtual ISOC_INT GetObjectFacilityLevel(ISOC_UINT nObjType,const ISOC_STR strFacilityDes);
};

