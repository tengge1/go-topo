// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_IDList_HeaderFile
#define _TDF_IDList_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_TDF_ListNodeOfIDList.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoSuchObject;
class TDF_ListIteratorOfIDList;
class Standard_GUID;
class TDF_ListNodeOfIDList;



class TDF_IDList 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDF_IDList();
  
  Standard_EXPORT TDF_IDList(const TDF_IDList& Other);
  
  Standard_EXPORT   void Assign (const TDF_IDList& Other) ;
  void operator= (const TDF_IDList& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~TDF_IDList()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const Standard_GUID& I) ;
  
  Standard_EXPORT   void Prepend (const Standard_GUID& I, TDF_ListIteratorOfIDList& theIt) ;
  
  Standard_EXPORT   void Prepend (TDF_IDList& Other) ;
  
  Standard_EXPORT   void Append (const Standard_GUID& I) ;
  
  Standard_EXPORT   void Append (const Standard_GUID& I, TDF_ListIteratorOfIDList& theIt) ;
  
  Standard_EXPORT   void Append (TDF_IDList& Other) ;
  
  Standard_EXPORT   Standard_GUID& First()  const;
  
  Standard_EXPORT   Standard_GUID& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (TDF_ListIteratorOfIDList& It) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_GUID& I, TDF_ListIteratorOfIDList& It) ;
  
  Standard_EXPORT   void InsertBefore (TDF_IDList& Other, TDF_ListIteratorOfIDList& It) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_GUID& I, TDF_ListIteratorOfIDList& It) ;
  
  Standard_EXPORT   void InsertAfter (TDF_IDList& Other, TDF_ListIteratorOfIDList& It) ;


friend class TDF_ListIteratorOfIDList;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item Standard_GUID
#define Item_hxx <Standard_GUID.hxx>
#define TCollection_ListNode TDF_ListNodeOfIDList
#define TCollection_ListNode_hxx <TDF_ListNodeOfIDList.hxx>
#define TCollection_ListIterator TDF_ListIteratorOfIDList
#define TCollection_ListIterator_hxx <TDF_ListIteratorOfIDList.hxx>
#define Handle_TCollection_ListNode Handle_TDF_ListNodeOfIDList
#define TCollection_ListNode_Type_() TDF_ListNodeOfIDList_Type_()
#define TCollection_List TDF_IDList
#define TCollection_List_hxx <TDF_IDList.hxx>

#include <TCollection_List.lxx>

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




#endif // _TDF_IDList_HeaderFile