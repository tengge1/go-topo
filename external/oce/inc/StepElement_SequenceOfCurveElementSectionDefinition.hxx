// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_SequenceOfCurveElementSectionDefinition_HeaderFile
#define _StepElement_SequenceOfCurveElementSectionDefinition_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_StepElement_CurveElementSectionDefinition.hxx>
#include <Handle_StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepElement_CurveElementSectionDefinition;
class StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition;



class StepElement_SequenceOfCurveElementSectionDefinition  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepElement_SequenceOfCurveElementSectionDefinition();
  
  Standard_EXPORT StepElement_SequenceOfCurveElementSectionDefinition(const StepElement_SequenceOfCurveElementSectionDefinition& Other);
  
  Standard_EXPORT   void Clear() ;
~StepElement_SequenceOfCurveElementSectionDefinition()
{
  Clear();
}
  
  Standard_EXPORT  const  StepElement_SequenceOfCurveElementSectionDefinition& Assign (const StepElement_SequenceOfCurveElementSectionDefinition& Other) ;
 const  StepElement_SequenceOfCurveElementSectionDefinition& operator = (const StepElement_SequenceOfCurveElementSectionDefinition& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(StepElement_CurveElementSectionDefinition)& T) ;
  
      void Append (StepElement_SequenceOfCurveElementSectionDefinition& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepElement_CurveElementSectionDefinition)& T) ;
  
      void Prepend (StepElement_SequenceOfCurveElementSectionDefinition& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(StepElement_CurveElementSectionDefinition)& T) ;
  
      void InsertBefore (const Standard_Integer Index, StepElement_SequenceOfCurveElementSectionDefinition& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(StepElement_CurveElementSectionDefinition)& T) ;
  
      void InsertAfter (const Standard_Integer Index, StepElement_SequenceOfCurveElementSectionDefinition& S) ;
  
  Standard_EXPORT  const  Handle(StepElement_CurveElementSectionDefinition)& First()  const;
  
  Standard_EXPORT  const  Handle(StepElement_CurveElementSectionDefinition)& Last()  const;
  
      void Split (const Standard_Integer Index, StepElement_SequenceOfCurveElementSectionDefinition& Sub) ;
  
  Standard_EXPORT  const  Handle(StepElement_CurveElementSectionDefinition)& Value (const Standard_Integer Index)  const;
 const  Handle(StepElement_CurveElementSectionDefinition)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(StepElement_CurveElementSectionDefinition)& I) ;
  
  Standard_EXPORT   Handle(StepElement_CurveElementSectionDefinition)& ChangeValue (const Standard_Integer Index) ;
  Handle(StepElement_CurveElementSectionDefinition)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(StepElement_CurveElementSectionDefinition)
#define SeqItem_hxx <StepElement_CurveElementSectionDefinition.hxx>
#define TCollection_SequenceNode StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition
#define TCollection_SequenceNode_hxx <StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition.hxx>
#define Handle_TCollection_SequenceNode Handle_StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition
#define TCollection_SequenceNode_Type_() StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition_Type_()
#define TCollection_Sequence StepElement_SequenceOfCurveElementSectionDefinition
#define TCollection_Sequence_hxx <StepElement_SequenceOfCurveElementSectionDefinition.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _StepElement_SequenceOfCurveElementSectionDefinition_HeaderFile