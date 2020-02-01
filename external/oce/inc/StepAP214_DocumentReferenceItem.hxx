// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_DocumentReferenceItem_HeaderFile
#define _StepAP214_DocumentReferenceItem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepBasic_Approval.hxx>
#include <Handle_StepRepr_DescriptiveRepresentationItem.hxx>
#include <Handle_StepRepr_MaterialDesignation.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
#include <Handle_StepBasic_ProductDefinitionRelationship.hxx>
#include <Handle_StepRepr_PropertyDefinition.hxx>
#include <Handle_StepRepr_Representation.hxx>
#include <Handle_StepRepr_ShapeAspect.hxx>
#include <Handle_StepRepr_ShapeAspectRelationship.hxx>
class Standard_Transient;
class StepBasic_Approval;
class StepRepr_DescriptiveRepresentationItem;
class StepRepr_MaterialDesignation;
class StepBasic_ProductDefinition;
class StepBasic_ProductDefinitionRelationship;
class StepRepr_PropertyDefinition;
class StepRepr_Representation;
class StepRepr_ShapeAspect;
class StepRepr_ShapeAspectRelationship;



class StepAP214_DocumentReferenceItem  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a DocumentReferenceItem SelectType
  Standard_EXPORT StepAP214_DocumentReferenceItem();
  
  //! Recognizes a DocumentReferenceItem Kind Entity that is :
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a Approval (Null if another type)
  Standard_EXPORT   Handle(StepBasic_Approval) Approval()  const;
  
  //! returns Value as a  (Null if another type)
  Standard_EXPORT   Handle(StepRepr_DescriptiveRepresentationItem) DescriptiveRepresentationItem()  const;
  
  //! returns Value as a MaterialDesignation (Null if another type)
  Standard_EXPORT   Handle(StepRepr_MaterialDesignation) MaterialDesignation()  const;
  
  //! returns Value as a ProductDefinition (Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinition) ProductDefinition()  const;
  
  //! returns Value as aProductDefinitionRelationship (Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinitionRelationship) ProductDefinitionRelationship()  const;
  
  //! returns Value as a PropertyDefinition (Null if another type)
  Standard_EXPORT   Handle(StepRepr_PropertyDefinition) PropertyDefinition()  const;
  
  //! returns Value as a Representation (Null if another type)
  Standard_EXPORT   Handle(StepRepr_Representation) Representation()  const;
  
  //! returns Value as a ShapeAspect (Null if another type)
  Standard_EXPORT   Handle(StepRepr_ShapeAspect) ShapeAspect()  const;
  
  //! returns Value as a ShapeAspectRelationship (Null if another type)
  Standard_EXPORT   Handle(StepRepr_ShapeAspectRelationship) ShapeAspectRelationship()  const;




protected:





private:





};







#endif // _StepAP214_DocumentReferenceItem_HeaderFile