// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Array1OfDerivedUnitElement_HeaderFile
#define _StepBasic_Array1OfDerivedUnitElement_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepBasic_DerivedUnitElement.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_DerivedUnitElement;



class StepBasic_Array1OfDerivedUnitElement 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepBasic_Array1OfDerivedUnitElement(const Standard_Integer Low, const Standard_Integer Up);
  
    StepBasic_Array1OfDerivedUnitElement(const Handle(StepBasic_DerivedUnitElement)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepBasic_DerivedUnitElement)& V) ;
  
      void Destroy() ;
~StepBasic_Array1OfDerivedUnitElement()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepBasic_Array1OfDerivedUnitElement& Assign (const StepBasic_Array1OfDerivedUnitElement& Other) ;
 const  StepBasic_Array1OfDerivedUnitElement& operator = (const StepBasic_Array1OfDerivedUnitElement& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepBasic_DerivedUnitElement)& Value) ;
  
     const  Handle(StepBasic_DerivedUnitElement)& Value (const Standard_Integer Index)  const;
   const  Handle(StepBasic_DerivedUnitElement)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepBasic_DerivedUnitElement)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepBasic_DerivedUnitElement)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepBasic_Array1OfDerivedUnitElement(const StepBasic_Array1OfDerivedUnitElement& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepBasic_DerivedUnitElement)
#define Array1Item_hxx <StepBasic_DerivedUnitElement.hxx>
#define TCollection_Array1 StepBasic_Array1OfDerivedUnitElement
#define TCollection_Array1_hxx <StepBasic_Array1OfDerivedUnitElement.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepBasic_Array1OfDerivedUnitElement_HeaderFile
