// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_CurveElementIntervalLinearlyVarying_HeaderFile
#define _StepFEA_CurveElementIntervalLinearlyVarying_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_CurveElementIntervalLinearlyVarying.hxx>

#include <Handle_StepElement_HArray1OfCurveElementSectionDefinition.hxx>
#include <StepFEA_CurveElementInterval.hxx>
#include <Handle_StepFEA_CurveElementLocation.hxx>
#include <Handle_StepBasic_EulerAngles.hxx>
class StepElement_HArray1OfCurveElementSectionDefinition;
class StepFEA_CurveElementLocation;
class StepBasic_EulerAngles;


//! Representation of STEP entity CurveElementIntervalLinearlyVarying
class StepFEA_CurveElementIntervalLinearlyVarying : public StepFEA_CurveElementInterval
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_CurveElementIntervalLinearlyVarying();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepFEA_CurveElementLocation)& aCurveElementInterval_FinishPosition, const Handle(StepBasic_EulerAngles)& aCurveElementInterval_EuAngles, const Handle(StepElement_HArray1OfCurveElementSectionDefinition)& aSections) ;
  
  //! Returns field Sections
  Standard_EXPORT   Handle(StepElement_HArray1OfCurveElementSectionDefinition) Sections()  const;
  
  //! Set field Sections
  Standard_EXPORT   void SetSections (const Handle(StepElement_HArray1OfCurveElementSectionDefinition)& Sections) ;




  DEFINE_STANDARD_RTTI(StepFEA_CurveElementIntervalLinearlyVarying)

protected:




private: 


  Handle(StepElement_HArray1OfCurveElementSectionDefinition) theSections;


};







#endif // _StepFEA_CurveElementIntervalLinearlyVarying_HeaderFile