// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_Reference_HeaderFile
#define _TDF_Reference_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDF_Reference.hxx>

#include <TDF_Label.hxx>
#include <TDF_Attribute.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Handle_TDF_DataSet.hxx>
#include <Standard_OStream.hxx>
class Standard_GUID;
class TDF_Label;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DataSet;


//! This  attribute is  used to  store in the  framework a
//! reference to an other label.
class TDF_Reference : public TDF_Attribute
{

public:

  
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  Standard_EXPORT static   Handle(TDF_Reference) Set (const TDF_Label& I, const TDF_Label& Origin) ;
  
  Standard_EXPORT   void Set (const TDF_Label& Origin) ;
  
  Standard_EXPORT   TDF_Label Get()  const;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   void References (const Handle(TDF_DataSet)& DS)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;
  
  Standard_EXPORT TDF_Reference();




  DEFINE_STANDARD_RTTI(TDF_Reference)

protected:




private: 


  TDF_Label myOrigin;


};







#endif // _TDF_Reference_HeaderFile
