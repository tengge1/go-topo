// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDataStd_CommentDriver_HeaderFile
#define _XmlMDataStd_CommentDriver_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_XmlMDataStd_CommentDriver.hxx>

#include <XmlMDF_ADriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Standard_Boolean.hxx>
#include <XmlObjMgt_RRelocationTable.hxx>
#include <XmlObjMgt_SRelocationTable.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class XmlObjMgt_Persistent;


//! Attribute Driver.
class XmlMDataStd_CommentDriver : public XmlMDF_ADriver
{

public:

  
  Standard_EXPORT XmlMDataStd_CommentDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   Standard_Boolean Paste (const XmlObjMgt_Persistent& Source, const Handle(TDF_Attribute)& Target, XmlObjMgt_RRelocationTable& RelocTable)  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Source, XmlObjMgt_Persistent& Target, XmlObjMgt_SRelocationTable& RelocTable)  const;




  DEFINE_STANDARD_RTTI(XmlMDataStd_CommentDriver)

protected:




private: 




};







#endif // _XmlMDataStd_CommentDriver_HeaderFile
