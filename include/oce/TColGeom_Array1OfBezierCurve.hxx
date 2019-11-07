// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_Array1OfBezierCurve_HeaderFile
#define _TColGeom_Array1OfBezierCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Geom_BezierCurve.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Geom_BezierCurve;



class TColGeom_Array1OfBezierCurve 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColGeom_Array1OfBezierCurve(const Standard_Integer Low, const Standard_Integer Up);
  
    TColGeom_Array1OfBezierCurve(const Handle(Geom_BezierCurve)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(Geom_BezierCurve)& V) ;
  
      void Destroy() ;
~TColGeom_Array1OfBezierCurve()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  TColGeom_Array1OfBezierCurve& Assign (const TColGeom_Array1OfBezierCurve& Other) ;
 const  TColGeom_Array1OfBezierCurve& operator = (const TColGeom_Array1OfBezierCurve& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(Geom_BezierCurve)& Value) ;
  
     const  Handle(Geom_BezierCurve)& Value (const Standard_Integer Index)  const;
   const  Handle(Geom_BezierCurve)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(Geom_BezierCurve)& ChangeValue (const Standard_Integer Index) ;
    Handle(Geom_BezierCurve)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT TColGeom_Array1OfBezierCurve(const TColGeom_Array1OfBezierCurve& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(Geom_BezierCurve)
#define Array1Item_hxx <Geom_BezierCurve.hxx>
#define TCollection_Array1 TColGeom_Array1OfBezierCurve
#define TCollection_Array1_hxx <TColGeom_Array1OfBezierCurve.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _TColGeom_Array1OfBezierCurve_HeaderFile
