// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_SequenceOfFaceAndOrder_HeaderFile
#define _BRepFill_SequenceOfFaceAndOrder_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_BRepFill_SequenceNodeOfSequenceOfFaceAndOrder.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class BRepFill_FaceAndOrder;
class BRepFill_SequenceNodeOfSequenceOfFaceAndOrder;



class BRepFill_SequenceOfFaceAndOrder  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    BRepFill_SequenceOfFaceAndOrder();
  
  Standard_EXPORT BRepFill_SequenceOfFaceAndOrder(const BRepFill_SequenceOfFaceAndOrder& Other);
  
  Standard_EXPORT   void Clear() ;
~BRepFill_SequenceOfFaceAndOrder()
{
  Clear();
}
  
  Standard_EXPORT  const  BRepFill_SequenceOfFaceAndOrder& Assign (const BRepFill_SequenceOfFaceAndOrder& Other) ;
 const  BRepFill_SequenceOfFaceAndOrder& operator = (const BRepFill_SequenceOfFaceAndOrder& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const BRepFill_FaceAndOrder& T) ;
  
      void Append (BRepFill_SequenceOfFaceAndOrder& S) ;
  
  Standard_EXPORT   void Prepend (const BRepFill_FaceAndOrder& T) ;
  
      void Prepend (BRepFill_SequenceOfFaceAndOrder& S) ;
  
      void InsertBefore (const Standard_Integer Index, const BRepFill_FaceAndOrder& T) ;
  
      void InsertBefore (const Standard_Integer Index, BRepFill_SequenceOfFaceAndOrder& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const BRepFill_FaceAndOrder& T) ;
  
      void InsertAfter (const Standard_Integer Index, BRepFill_SequenceOfFaceAndOrder& S) ;
  
  Standard_EXPORT  const  BRepFill_FaceAndOrder& First()  const;
  
  Standard_EXPORT  const  BRepFill_FaceAndOrder& Last()  const;
  
      void Split (const Standard_Integer Index, BRepFill_SequenceOfFaceAndOrder& Sub) ;
  
  Standard_EXPORT  const  BRepFill_FaceAndOrder& Value (const Standard_Integer Index)  const;
 const  BRepFill_FaceAndOrder& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const BRepFill_FaceAndOrder& I) ;
  
  Standard_EXPORT   BRepFill_FaceAndOrder& ChangeValue (const Standard_Integer Index) ;
  BRepFill_FaceAndOrder& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem BRepFill_FaceAndOrder
#define SeqItem_hxx <BRepFill_FaceAndOrder.hxx>
#define TCollection_SequenceNode BRepFill_SequenceNodeOfSequenceOfFaceAndOrder
#define TCollection_SequenceNode_hxx <BRepFill_SequenceNodeOfSequenceOfFaceAndOrder.hxx>
#define Handle_TCollection_SequenceNode Handle_BRepFill_SequenceNodeOfSequenceOfFaceAndOrder
#define TCollection_SequenceNode_Type_() BRepFill_SequenceNodeOfSequenceOfFaceAndOrder_Type_()
#define TCollection_Sequence BRepFill_SequenceOfFaceAndOrder
#define TCollection_Sequence_hxx <BRepFill_SequenceOfFaceAndOrder.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _BRepFill_SequenceOfFaceAndOrder_HeaderFile
