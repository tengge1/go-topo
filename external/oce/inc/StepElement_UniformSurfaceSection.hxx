// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_UniformSurfaceSection_HeaderFile
#define _StepElement_UniformSurfaceSection_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepElement_UniformSurfaceSection.hxx>

#include <Standard_Real.hxx>
#include <StepElement_MeasureOrUnspecifiedValue.hxx>
#include <StepElement_SurfaceSection.hxx>
class StepElement_MeasureOrUnspecifiedValue;


//! Representation of STEP entity UniformSurfaceSection
class StepElement_UniformSurfaceSection : public StepElement_SurfaceSection
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepElement_UniformSurfaceSection();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const StepElement_MeasureOrUnspecifiedValue& aSurfaceSection_Offset, const StepElement_MeasureOrUnspecifiedValue& aSurfaceSection_NonStructuralMass, const StepElement_MeasureOrUnspecifiedValue& aSurfaceSection_NonStructuralMassOffset, const Standard_Real aThickness, const StepElement_MeasureOrUnspecifiedValue& aBendingThickness, const StepElement_MeasureOrUnspecifiedValue& aShearThickness) ;
  
  //! Returns field Thickness
  Standard_EXPORT   Standard_Real Thickness()  const;
  
  //! Set field Thickness
  Standard_EXPORT   void SetThickness (const Standard_Real Thickness) ;
  
  //! Returns field BendingThickness
  Standard_EXPORT   StepElement_MeasureOrUnspecifiedValue BendingThickness()  const;
  
  //! Set field BendingThickness
  Standard_EXPORT   void SetBendingThickness (const StepElement_MeasureOrUnspecifiedValue& BendingThickness) ;
  
  //! Returns field ShearThickness
  Standard_EXPORT   StepElement_MeasureOrUnspecifiedValue ShearThickness()  const;
  
  //! Set field ShearThickness
  Standard_EXPORT   void SetShearThickness (const StepElement_MeasureOrUnspecifiedValue& ShearThickness) ;




  DEFINE_STANDARD_RTTI(StepElement_UniformSurfaceSection)

protected:




private: 


  Standard_Real theThickness;
  StepElement_MeasureOrUnspecifiedValue theBendingThickness;
  StepElement_MeasureOrUnspecifiedValue theShearThickness;


};







#endif // _StepElement_UniformSurfaceSection_HeaderFile