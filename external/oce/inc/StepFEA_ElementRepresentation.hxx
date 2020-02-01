// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_ElementRepresentation_HeaderFile
#define _StepFEA_ElementRepresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_ElementRepresentation.hxx>

#include <Handle_StepFEA_HArray1OfNodeRepresentation.hxx>
#include <StepRepr_Representation.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepRepr_HArray1OfRepresentationItem.hxx>
#include <Handle_StepRepr_RepresentationContext.hxx>
class StepFEA_HArray1OfNodeRepresentation;
class TCollection_HAsciiString;
class StepRepr_HArray1OfRepresentationItem;
class StepRepr_RepresentationContext;


//! Representation of STEP entity ElementRepresentation
class StepFEA_ElementRepresentation : public StepRepr_Representation
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_ElementRepresentation();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aRepresentation_Name, const Handle(StepRepr_HArray1OfRepresentationItem)& aRepresentation_Items, const Handle(StepRepr_RepresentationContext)& aRepresentation_ContextOfItems, const Handle(StepFEA_HArray1OfNodeRepresentation)& aNodeList) ;
  
  //! Returns field NodeList
  Standard_EXPORT   Handle(StepFEA_HArray1OfNodeRepresentation) NodeList()  const;
  
  //! Set field NodeList
  Standard_EXPORT   void SetNodeList (const Handle(StepFEA_HArray1OfNodeRepresentation)& NodeList) ;




  DEFINE_STANDARD_RTTI(StepFEA_ElementRepresentation)

protected:




private: 


  Handle(StepFEA_HArray1OfNodeRepresentation) theNodeList;


};







#endif // _StepFEA_ElementRepresentation_HeaderFile
