// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <IGESSelect_ModelModifier.hxx>

#include <Standard_Type.hxx>

#include <IGESData_IGESModel.hxx>
#include <IGESData_Protocol.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>

 


IMPLEMENT_STANDARD_TYPE(IGESSelect_ModelModifier)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_Modifier),
  STANDARD_TYPE(IFSelect_GeneralModifier),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_ModelModifier)


IMPLEMENT_DOWNCAST(IGESSelect_ModelModifier,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_ModelModifier)


#define Handle_Model Handle_IGESData_IGESModel
#define Model IGESData_IGESModel
#define Model_hxx <IGESData_IGESModel.hxx>
#define Handle_Proto Handle_IGESData_Protocol
#define Proto IGESData_Protocol
#define Proto_hxx <IGESData_Protocol.hxx>
#define IFSelect_ModelModifier IGESSelect_ModelModifier
#define IFSelect_ModelModifier_hxx <IGESSelect_ModelModifier.hxx>
#define Handle_IFSelect_ModelModifier Handle_IGESSelect_ModelModifier
#define IFSelect_ModelModifier_Type_() IGESSelect_ModelModifier_Type_()
#include <IFSelect_ModelModifier.gxx>
