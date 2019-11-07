// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_IndexedDataMapOfShapeShape_HeaderFile
#define _TopTools_IndexedDataMapOfShapeShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape;



class TopTools_IndexedDataMapOfShapeShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_IndexedDataMapOfShapeShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopTools_IndexedDataMapOfShapeShape& Assign (const TopTools_IndexedDataMapOfShapeShape& Other) ;
  TopTools_IndexedDataMapOfShapeShape& operator = (const TopTools_IndexedDataMapOfShapeShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopTools_IndexedDataMapOfShapeShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const TopoDS_Shape& K, const TopoDS_Shape& I) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const TopoDS_Shape& K, const TopoDS_Shape& T) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  TopoDS_Shape& FindKey (const Standard_Integer I)  const;
  
  Standard_EXPORT  const  TopoDS_Shape& FindFromIndex (const Standard_Integer I)  const;
 const  TopoDS_Shape& operator () (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT   TopoDS_Shape& ChangeFromIndex (const Standard_Integer I) ;
  TopoDS_Shape& operator () (const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  TopoDS_Shape& FindFromKey (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   TopoDS_Shape& ChangeFromKey (const TopoDS_Shape& K) ;
  
  Standard_EXPORT   Standard_Address FindFromKey1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFromKey1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopTools_IndexedDataMapOfShapeShape(const TopTools_IndexedDataMapOfShapeShape& Other);




};







#endif // _TopTools_IndexedDataMapOfShapeShape_HeaderFile
