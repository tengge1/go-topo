// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_CurveShapeIntersector_HeaderFile
#define _LocOpe_CurveShapeIntersector_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <LocOpe_SequenceOfPntFace.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <TopAbs_Orientation.hxx>
class StdFail_NotDone;
class Standard_OutOfRange;
class gp_Ax1;
class TopoDS_Shape;
class gp_Circ;
class LocOpe_PntFace;


//! This  class  provides  the intersection between an
//! axis  or  a circle and  the  faces of a shape. The
//! intersection   points  are   sorted in  increasing
//! parameter along the axis.
class LocOpe_CurveShapeIntersector 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor.
    LocOpe_CurveShapeIntersector();
  
  //! Creates  and performs the intersection     betwwen
  //! <Ax1> and <S>.
    LocOpe_CurveShapeIntersector(const gp_Ax1& Axis, const TopoDS_Shape& S);
  
  //! Creates  and performs yte intersection     betwwen
  //! <C> and <S>.
    LocOpe_CurveShapeIntersector(const gp_Circ& C, const TopoDS_Shape& S);
  
  //! Performs the intersection between <Ax1 and <S>.
  Standard_EXPORT   void Init (const gp_Ax1& Axis, const TopoDS_Shape& S) ;
  
  //! Performs the intersection between <Ax1 and <S>.
  Standard_EXPORT   void Init (const gp_Circ& C, const TopoDS_Shape& S) ;
  
  //! Returns <Standard_True>  if the  intersection  has
  //! been done.
      Standard_Boolean IsDone()  const;
  
  //! Returns the number of intersection point.
      Standard_Integer NbPoints()  const;
  
  //! Returns the intersection  point  of range <Index>.
  //! The points  are   sorted in increasing  order   of
  //! parameter along the axis.
     const  LocOpe_PntFace& Point (const Standard_Integer Index)  const;
  
  //! Searches the   first intersection  point   located
  //! after the  parameter  <From>, wich  orientation is
  //! not       TopAbs_EXTERNAL.      If found,  returns
  //! <Standard_True>.  <Or> contains the orientation of
  //! the  point, <IndFrom>  and  <IndTo> represents the
  //! interval of index  in the sequence of intersection
  //! point  corresponding  to   the point. (IndFrom  <=
  //! IndTo).
  //!
  //! Otherwise, returns <Standard_False>.
  Standard_EXPORT   Standard_Boolean LocalizeAfter (const Standard_Real From, TopAbs_Orientation& Or, Standard_Integer& IndFrom, Standard_Integer& IndTo)  const;
  
  //! Searches  the first intersection point     located
  //! before  the parameter <From>,  wich orientation is
  //! not      TopAbs_EXTERNAL.      If  found,  returns
  //! <Standard_True>.  <Or> contains the orientation of
  //! the point,  <IndFrom>  and <IndTo>  represents the
  //! interval of index  in the sequence of intersection
  //! point  corresponding   to the point   (IndFrom  <=
  //! IndTo).
  //!
  //! Otherwise, returns <Standard_False>.
  Standard_EXPORT   Standard_Boolean LocalizeBefore (const Standard_Real From, TopAbs_Orientation& Or, Standard_Integer& IndFrom, Standard_Integer& IndTo)  const;
  
  //! Searches  the first intersection point     located
  //! after the index <FromInd>  ( >= FromInd + 1), wich
  //! orientation   is   not TopAbs_EXTERNAL.   If found,
  //! returns   <Standard_True>.   <Or>  contains    the
  //! orientation of the  point, <IndFrom>  and  <IndTo>
  //! represents the interval  of index in  the sequence
  //! of  intersection  point     corresponding to   the
  //! point. (IndFrom <= IndTo).
  //!
  //! Otherwise, returns <Standard_False>.
  Standard_EXPORT   Standard_Boolean LocalizeAfter (const Standard_Integer FromInd, TopAbs_Orientation& Or, Standard_Integer& IndFrom, Standard_Integer& IndTo)  const;
  
  //! Searches the  first  intersection   point  located
  //! before the index <FromInd>  ( <= FromInd -1), wich
  //! orientation is   not TopAbs_EXTERNAL.   If   found,
  //! returns   <Standard_True>.  <Or>  contains     the
  //! orientation  of the  point,  <IndFrom> and <IndTo>
  //! represents the interval  of index  in the sequence
  //! of  intersection  point corresponding to the point
  //! (IndFrom <= IndTo).
  //!
  //! Otherwise, returns <Standard_False>.
  Standard_EXPORT   Standard_Boolean LocalizeBefore (const Standard_Integer FromInd, TopAbs_Orientation& Or, Standard_Integer& IndFrom, Standard_Integer& IndTo)  const;




protected:





private:



  Standard_Boolean myDone;
  LocOpe_SequenceOfPntFace myPoints;


};


#include <LocOpe_CurveShapeIntersector.lxx>





#endif // _LocOpe_CurveShapeIntersector_HeaderFile