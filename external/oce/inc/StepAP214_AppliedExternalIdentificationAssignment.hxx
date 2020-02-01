// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AppliedExternalIdentificationAssignment_HeaderFile
#define _StepAP214_AppliedExternalIdentificationAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepAP214_AppliedExternalIdentificationAssignment.hxx>

#include <Handle_StepAP214_HArray1OfExternalIdentificationItem.hxx>
#include <StepBasic_ExternalIdentificationAssignment.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_IdentificationRole.hxx>
#include <Handle_StepBasic_ExternalSource.hxx>
class StepAP214_HArray1OfExternalIdentificationItem;
class TCollection_HAsciiString;
class StepBasic_IdentificationRole;
class StepBasic_ExternalSource;


//! Representation of STEP entity AppliedExternalIdentificationAssignment
class StepAP214_AppliedExternalIdentificationAssignment : public StepBasic_ExternalIdentificationAssignment
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepAP214_AppliedExternalIdentificationAssignment();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aIdentificationAssignment_AssignedId, const Handle(StepBasic_IdentificationRole)& aIdentificationAssignment_Role, const Handle(StepBasic_ExternalSource)& aExternalIdentificationAssignment_Source, const Handle(StepAP214_HArray1OfExternalIdentificationItem)& aItems) ;
  
  //! Returns field Items
  Standard_EXPORT   Handle(StepAP214_HArray1OfExternalIdentificationItem) Items()  const;
  
  //! Set field Items
  Standard_EXPORT   void SetItems (const Handle(StepAP214_HArray1OfExternalIdentificationItem)& Items) ;




  DEFINE_STANDARD_RTTI(StepAP214_AppliedExternalIdentificationAssignment)

protected:




private: 


  Handle(StepAP214_HArray1OfExternalIdentificationItem) theItems;


};







#endif // _StepAP214_AppliedExternalIdentificationAssignment_HeaderFile
