// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_ChangeRequest_HeaderFile
#define _StepAP203_ChangeRequest_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepAP203_ChangeRequest.hxx>

#include <Handle_StepAP203_HArray1OfChangeRequestItem.hxx>
#include <StepBasic_ActionRequestAssignment.hxx>
#include <Handle_StepBasic_VersionedActionRequest.hxx>
class StepAP203_HArray1OfChangeRequestItem;
class StepBasic_VersionedActionRequest;


//! Representation of STEP entity ChangeRequest
class StepAP203_ChangeRequest : public StepBasic_ActionRequestAssignment
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepAP203_ChangeRequest();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepBasic_VersionedActionRequest)& aActionRequestAssignment_AssignedActionRequest, const Handle(StepAP203_HArray1OfChangeRequestItem)& aItems) ;
  
  //! Returns field Items
  Standard_EXPORT   Handle(StepAP203_HArray1OfChangeRequestItem) Items()  const;
  
  //! Set field Items
  Standard_EXPORT   void SetItems (const Handle(StepAP203_HArray1OfChangeRequestItem)& Items) ;




  DEFINE_STANDARD_RTTI(StepAP203_ChangeRequest)

protected:




private: 


  Handle(StepAP203_HArray1OfChangeRequestItem) theItems;


};







#endif // _StepAP203_ChangeRequest_HeaderFile
