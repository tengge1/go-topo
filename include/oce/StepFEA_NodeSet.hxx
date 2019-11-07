// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_NodeSet_HeaderFile
#define _StepFEA_NodeSet_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_NodeSet.hxx>

#include <Handle_StepFEA_HArray1OfNodeRepresentation.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepFEA_HArray1OfNodeRepresentation;
class TCollection_HAsciiString;


//! Representation of STEP entity NodeSet
class StepFEA_NodeSet : public StepGeom_GeometricRepresentationItem
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_NodeSet();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aRepresentationItem_Name, const Handle(StepFEA_HArray1OfNodeRepresentation)& aNodes) ;
  
  //! Returns field Nodes
  Standard_EXPORT   Handle(StepFEA_HArray1OfNodeRepresentation) Nodes()  const;
  
  //! Set field Nodes
  Standard_EXPORT   void SetNodes (const Handle(StepFEA_HArray1OfNodeRepresentation)& Nodes) ;




  DEFINE_STANDARD_RTTI(StepFEA_NodeSet)

protected:




private: 


  Handle(StepFEA_HArray1OfNodeRepresentation) theNodes;


};







#endif // _StepFEA_NodeSet_HeaderFile
