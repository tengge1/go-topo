// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <FEmTool_ListNodeOfListOfVectors.hxx>

#include <Standard_Type.hxx>

#include <TColStd_HArray1OfReal.hxx>
#include <FEmTool_ListOfVectors.hxx>
#include <FEmTool_ListIteratorOfListOfVectors.hxx>

 


IMPLEMENT_STANDARD_TYPE(FEmTool_ListNodeOfListOfVectors)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(FEmTool_ListNodeOfListOfVectors)


IMPLEMENT_DOWNCAST(FEmTool_ListNodeOfListOfVectors,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(FEmTool_ListNodeOfListOfVectors)


#define Item Handle(TColStd_HArray1OfReal)
#define Item_hxx <TColStd_HArray1OfReal.hxx>
#define TCollection_ListNode FEmTool_ListNodeOfListOfVectors
#define TCollection_ListNode_hxx <FEmTool_ListNodeOfListOfVectors.hxx>
#define TCollection_ListIterator FEmTool_ListIteratorOfListOfVectors
#define TCollection_ListIterator_hxx <FEmTool_ListIteratorOfListOfVectors.hxx>
#define Handle_TCollection_ListNode Handle_FEmTool_ListNodeOfListOfVectors
#define TCollection_ListNode_Type_() FEmTool_ListNodeOfListOfVectors_Type_()
#define TCollection_List FEmTool_ListOfVectors
#define TCollection_List_hxx <FEmTool_ListOfVectors.hxx>
#include <TCollection_ListNode.gxx>

