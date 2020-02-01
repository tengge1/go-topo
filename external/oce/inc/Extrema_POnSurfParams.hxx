// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_POnSurfParams_HeaderFile
#define _Extrema_POnSurfParams_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <Extrema_ElementType.hxx>
#include <Standard_Integer.hxx>
#include <Extrema_POnSurf.hxx>
class gp_Pnt;


//! Data container for point on surface parameters. These parameters
//! are required to compute an initial approximation for extrema
//! computation.
class Extrema_POnSurfParams  : public Extrema_POnSurf
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! empty constructor
    Extrema_POnSurfParams();
  
  //! Creation of a point on surface with parameter
  //! values on the surface and a Pnt from gp.
    Extrema_POnSurfParams(const Standard_Real theU, const Standard_Real theV, const gp_Pnt& thePnt);
  
  //! Sets the square distance from this point to another one
  //! (e.g. to the point to be projected).
      void SetSqrDistance (const Standard_Real theSqrDistance) ;
  
  //! Query the square distance from this point to another one.
      Standard_Real GetSqrDistance()  const;
  
  //! Sets the element type on which this point is situated.
      void SetElementType (const Extrema_ElementType theElementType) ;
  
  //! Query the element type on which this point is situated.
      Extrema_ElementType GetElementType()  const;
  
  //! Sets the U and V indices of an element that contains
  //! this point.
      void SetIndices (const Standard_Integer theIndexU, const Standard_Integer theIndexV) ;
  
  //! Query the U and V indices of an element that contains
  //! this point.
      void GetIndices (Standard_Integer& theIndexU, Standard_Integer& theIndexV)  const;




protected:





private:



  Standard_Real mySqrDistance;
  Extrema_ElementType myElementType;
  Standard_Integer myIndexU;
  Standard_Integer myIndexV;


};


#include <Extrema_POnSurfParams.lxx>





#endif // _Extrema_POnSurfParams_HeaderFile
