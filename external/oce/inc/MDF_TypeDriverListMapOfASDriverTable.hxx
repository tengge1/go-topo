// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_TypeDriverListMapOfASDriverTable_HeaderFile
#define _MDF_TypeDriverListMapOfASDriverTable_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_Standard_Type.hxx>
#include <Handle_MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class Standard_Type;
class MDF_DriverListOfASDriverTable;
class TColStd_MapTransientHasher;
class MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable;
class MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable;



class MDF_TypeDriverListMapOfASDriverTable  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MDF_TypeDriverListMapOfASDriverTable(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   MDF_TypeDriverListMapOfASDriverTable& Assign (const MDF_TypeDriverListMapOfASDriverTable& Other) ;
  MDF_TypeDriverListMapOfASDriverTable& operator = (const MDF_TypeDriverListMapOfASDriverTable& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~MDF_TypeDriverListMapOfASDriverTable()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Handle(Standard_Type)& K, const MDF_DriverListOfASDriverTable& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(Standard_Type)& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Handle(Standard_Type)& K) ;
  
  Standard_EXPORT  const  MDF_DriverListOfASDriverTable& Find (const Handle(Standard_Type)& K)  const;
 const  MDF_DriverListOfASDriverTable& operator() (const Handle(Standard_Type)& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   MDF_DriverListOfASDriverTable& ChangeFind (const Handle(Standard_Type)& K) ;
  MDF_DriverListOfASDriverTable& operator() (const Handle(Standard_Type)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Handle(Standard_Type)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Handle(Standard_Type)& K) ;




protected:





private:

  
  Standard_EXPORT MDF_TypeDriverListMapOfASDriverTable(const MDF_TypeDriverListMapOfASDriverTable& Other);




};







#endif // _MDF_TypeDriverListMapOfASDriverTable_HeaderFile
