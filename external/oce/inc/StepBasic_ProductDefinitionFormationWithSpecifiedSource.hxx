// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ProductDefinitionFormationWithSpecifiedSource_HeaderFile
#define _StepBasic_ProductDefinitionFormationWithSpecifiedSource_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ProductDefinitionFormationWithSpecifiedSource.hxx>

#include <StepBasic_Source.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_Product.hxx>
class TCollection_HAsciiString;
class StepBasic_Product;



class StepBasic_ProductDefinitionFormationWithSpecifiedSource : public StepBasic_ProductDefinitionFormation
{

public:

  
  //! Returns a ProductDefinitionFormationWithSpecifiedSource
  Standard_EXPORT StepBasic_ProductDefinitionFormationWithSpecifiedSource();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aId, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepBasic_Product)& aOfProduct) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aId, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepBasic_Product)& aOfProduct, const StepBasic_Source aMakeOrBuy) ;
  
  Standard_EXPORT   void SetMakeOrBuy (const StepBasic_Source aMakeOrBuy) ;
  
  Standard_EXPORT   StepBasic_Source MakeOrBuy()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ProductDefinitionFormationWithSpecifiedSource)

protected:




private: 


  StepBasic_Source makeOrBuy;


};







#endif // _StepBasic_ProductDefinitionFormationWithSpecifiedSource_HeaderFile
