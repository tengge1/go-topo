// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopLoc_SListNodeOfItemLocation_HeaderFile
#define _TopLoc_SListNodeOfItemLocation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopLoc_SListNodeOfItemLocation.hxx>

#include <TopLoc_SListOfItemLocation.hxx>
#include <TopLoc_ItemLocation.hxx>
#include <MMgt_TShared.hxx>
class TopLoc_ItemLocation;
class TopLoc_SListOfItemLocation;



class TopLoc_SListNodeOfItemLocation : public MMgt_TShared
{

public:

  
    TopLoc_SListNodeOfItemLocation(const TopLoc_ItemLocation& I, const TopLoc_SListOfItemLocation& aTail);
  
      TopLoc_SListOfItemLocation& Tail()  const;
  
      TopLoc_ItemLocation& Value()  const;




  DEFINE_STANDARD_RTTI(TopLoc_SListNodeOfItemLocation)

protected:




private: 


  TopLoc_SListOfItemLocation myTail;
  TopLoc_ItemLocation myValue;


};


#include <TopLoc_SListNodeOfItemLocation.lxx>





#endif // _TopLoc_SListNodeOfItemLocation_HeaderFile