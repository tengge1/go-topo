// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_ListNodeOfStackOfGeneralRelation_HeaderFile
#define _ExprIntrp_ListNodeOfStackOfGeneralRelation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ExprIntrp_ListNodeOfStackOfGeneralRelation.hxx>

#include <Handle_Expr_GeneralRelation.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class Expr_GeneralRelation;
class ExprIntrp_StackOfGeneralRelation;
class ExprIntrp_ListIteratorOfStackOfGeneralRelation;



class ExprIntrp_ListNodeOfStackOfGeneralRelation : public TCollection_MapNode
{

public:

  
    ExprIntrp_ListNodeOfStackOfGeneralRelation(const Handle(Expr_GeneralRelation)& I, const TCollection_MapNodePtr& n);
  
      Handle(Expr_GeneralRelation)& Value()  const;




  DEFINE_STANDARD_RTTI(ExprIntrp_ListNodeOfStackOfGeneralRelation)

protected:




private: 


  Handle(Expr_GeneralRelation) myValue;


};

#define Item Handle(Expr_GeneralRelation)
#define Item_hxx <Expr_GeneralRelation.hxx>
#define TCollection_ListNode ExprIntrp_ListNodeOfStackOfGeneralRelation
#define TCollection_ListNode_hxx <ExprIntrp_ListNodeOfStackOfGeneralRelation.hxx>
#define TCollection_ListIterator ExprIntrp_ListIteratorOfStackOfGeneralRelation
#define TCollection_ListIterator_hxx <ExprIntrp_ListIteratorOfStackOfGeneralRelation.hxx>
#define Handle_TCollection_ListNode Handle_ExprIntrp_ListNodeOfStackOfGeneralRelation
#define TCollection_ListNode_Type_() ExprIntrp_ListNodeOfStackOfGeneralRelation_Type_()
#define TCollection_List ExprIntrp_StackOfGeneralRelation
#define TCollection_List_hxx <ExprIntrp_StackOfGeneralRelation.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _ExprIntrp_ListNodeOfStackOfGeneralRelation_HeaderFile
