// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_IndexedDataMapOfShapeBox_HeaderFile
#define _TopOpeBRepTool_IndexedDataMapOfShapeBox_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class TopoDS_Shape;
class Bnd_Box;
class TopTools_OrientedShapeMapHasher;
class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox;



class TopOpeBRepTool_IndexedDataMapOfShapeBox  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepTool_IndexedDataMapOfShapeBox(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopOpeBRepTool_IndexedDataMapOfShapeBox& Assign (const TopOpeBRepTool_IndexedDataMapOfShapeBox& Other) ;
  TopOpeBRepTool_IndexedDataMapOfShapeBox& operator = (const TopOpeBRepTool_IndexedDataMapOfShapeBox& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopOpeBRepTool_IndexedDataMapOfShapeBox()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const TopoDS_Shape& K, const Bnd_Box& I) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const TopoDS_Shape& K, const Bnd_Box& T) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  TopoDS_Shape& FindKey (const Standard_Integer I)  const;
  
  Standard_EXPORT  const  Bnd_Box& FindFromIndex (const Standard_Integer I)  const;
 const  Bnd_Box& operator () (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT   Bnd_Box& ChangeFromIndex (const Standard_Integer I) ;
  Bnd_Box& operator () (const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  Bnd_Box& FindFromKey (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Bnd_Box& ChangeFromKey (const TopoDS_Shape& K) ;
  
  Standard_EXPORT   Standard_Address FindFromKey1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFromKey1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopOpeBRepTool_IndexedDataMapOfShapeBox(const TopOpeBRepTool_IndexedDataMapOfShapeBox& Other);




};







#endif // _TopOpeBRepTool_IndexedDataMapOfShapeBox_HeaderFile