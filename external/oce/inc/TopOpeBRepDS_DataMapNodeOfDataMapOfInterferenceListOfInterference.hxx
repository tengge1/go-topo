// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference_HeaderFile
#define _TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference.hxx>

#include <Handle_TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_ListOfInterference.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TopOpeBRepDS_Interference;
class TopOpeBRepDS_ListOfInterference;
class TColStd_MapTransientHasher;
class TopOpeBRepDS_DataMapOfInterferenceListOfInterference;
class TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceListOfInterference;



class TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference : public TCollection_MapNode
{

public:

  
    TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference(const Handle(TopOpeBRepDS_Interference)& K, const TopOpeBRepDS_ListOfInterference& I, const TCollection_MapNodePtr& n);
  
      Handle(TopOpeBRepDS_Interference)& Key()  const;
  
      TopOpeBRepDS_ListOfInterference& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference)

protected:




private: 


  Handle(TopOpeBRepDS_Interference) myKey;
  TopOpeBRepDS_ListOfInterference myValue;


};

#define TheKey Handle(TopOpeBRepDS_Interference)
#define TheKey_hxx <TopOpeBRepDS_Interference.hxx>
#define TheItem TopOpeBRepDS_ListOfInterference
#define TheItem_hxx <TopOpeBRepDS_ListOfInterference.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference
#define TCollection_DataMapNode_hxx <TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference.hxx>
#define TCollection_DataMapIterator TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceListOfInterference
#define TCollection_DataMapIterator_hxx <TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceListOfInterference.hxx>
#define Handle_TCollection_DataMapNode Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference
#define TCollection_DataMapNode_Type_() TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference_Type_()
#define TCollection_DataMap TopOpeBRepDS_DataMapOfInterferenceListOfInterference
#define TCollection_DataMap_hxx <TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference_HeaderFile