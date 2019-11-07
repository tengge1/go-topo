// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_DoubleMapNodeOfAttributeDoubleMap_HeaderFile
#define _TDF_DoubleMapNodeOfAttributeDoubleMap_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDF_DoubleMapNodeOfAttributeDoubleMap.hxx>

#include <Handle_TDF_Attribute.hxx>
#include <TCollection_MapNodePtr.hxx>
#include <TCollection_MapNode.hxx>
class TDF_Attribute;
class TColStd_MapTransientHasher;
class TDF_AttributeDoubleMap;
class TDF_DoubleMapIteratorOfAttributeDoubleMap;



class TDF_DoubleMapNodeOfAttributeDoubleMap : public TCollection_MapNode
{

public:

  
    TDF_DoubleMapNodeOfAttributeDoubleMap(const Handle(TDF_Attribute)& K1, const Handle(TDF_Attribute)& K2, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Handle(TDF_Attribute)& Key1()  const;
  
      Handle(TDF_Attribute)& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;




  DEFINE_STANDARD_RTTI(TDF_DoubleMapNodeOfAttributeDoubleMap)

protected:




private: 


  Handle(TDF_Attribute) myKey1;
  Handle(TDF_Attribute) myKey2;
  TCollection_MapNodePtr myNext2;


};

#define TheKey1 Handle(TDF_Attribute)
#define TheKey1_hxx <TDF_Attribute.hxx>
#define TheKey2 Handle(TDF_Attribute)
#define TheKey2_hxx <TDF_Attribute.hxx>
#define Hasher1 TColStd_MapTransientHasher
#define Hasher1_hxx <TColStd_MapTransientHasher.hxx>
#define Hasher2 TColStd_MapTransientHasher
#define Hasher2_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DoubleMapNode TDF_DoubleMapNodeOfAttributeDoubleMap
#define TCollection_DoubleMapNode_hxx <TDF_DoubleMapNodeOfAttributeDoubleMap.hxx>
#define TCollection_DoubleMapIterator TDF_DoubleMapIteratorOfAttributeDoubleMap
#define TCollection_DoubleMapIterator_hxx <TDF_DoubleMapIteratorOfAttributeDoubleMap.hxx>
#define Handle_TCollection_DoubleMapNode Handle_TDF_DoubleMapNodeOfAttributeDoubleMap
#define TCollection_DoubleMapNode_Type_() TDF_DoubleMapNodeOfAttributeDoubleMap_Type_()
#define TCollection_DoubleMap TDF_AttributeDoubleMap
#define TCollection_DoubleMap_hxx <TDF_AttributeDoubleMap.hxx>

#include <TCollection_DoubleMapNode.lxx>

#undef TheKey1
#undef TheKey1_hxx
#undef TheKey2
#undef TheKey2_hxx
#undef Hasher1
#undef Hasher1_hxx
#undef Hasher2
#undef Hasher2_hxx
#undef TCollection_DoubleMapNode
#undef TCollection_DoubleMapNode_hxx
#undef TCollection_DoubleMapIterator
#undef TCollection_DoubleMapIterator_hxx
#undef Handle_TCollection_DoubleMapNode
#undef TCollection_DoubleMapNode_Type_
#undef TCollection_DoubleMap
#undef TCollection_DoubleMap_hxx




#endif // _TDF_DoubleMapNodeOfAttributeDoubleMap_HeaderFile
