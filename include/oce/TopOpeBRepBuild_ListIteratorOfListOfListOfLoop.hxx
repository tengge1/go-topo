// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_ListIteratorOfListOfListOfLoop_HeaderFile
#define _TopOpeBRepBuild_ListIteratorOfListOfListOfLoop_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_TopOpeBRepBuild_ListNodeOfListOfListOfLoop.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TopOpeBRepBuild_ListOfListOfLoop;
class TopOpeBRepBuild_ListOfLoop;
class TopOpeBRepBuild_ListNodeOfListOfListOfLoop;



class TopOpeBRepBuild_ListIteratorOfListOfListOfLoop 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_ListIteratorOfListOfListOfLoop();
  
  Standard_EXPORT TopOpeBRepBuild_ListIteratorOfListOfListOfLoop(const TopOpeBRepBuild_ListOfListOfLoop& L);
  
  Standard_EXPORT   void Initialize (const TopOpeBRepBuild_ListOfListOfLoop& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   TopOpeBRepBuild_ListOfLoop& Value()  const;


friend class TopOpeBRepBuild_ListOfListOfLoop;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item TopOpeBRepBuild_ListOfLoop
#define Item_hxx <TopOpeBRepBuild_ListOfLoop.hxx>
#define TCollection_ListNode TopOpeBRepBuild_ListNodeOfListOfListOfLoop
#define TCollection_ListNode_hxx <TopOpeBRepBuild_ListNodeOfListOfListOfLoop.hxx>
#define TCollection_ListIterator TopOpeBRepBuild_ListIteratorOfListOfListOfLoop
#define TCollection_ListIterator_hxx <TopOpeBRepBuild_ListIteratorOfListOfListOfLoop.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRepBuild_ListNodeOfListOfListOfLoop
#define TCollection_ListNode_Type_() TopOpeBRepBuild_ListNodeOfListOfListOfLoop_Type_()
#define TCollection_List TopOpeBRepBuild_ListOfListOfLoop
#define TCollection_List_hxx <TopOpeBRepBuild_ListOfListOfLoop.hxx>

#include <TCollection_ListIterator.lxx>

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




#endif // _TopOpeBRepBuild_ListIteratorOfListOfListOfLoop_HeaderFile
