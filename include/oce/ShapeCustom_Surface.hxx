// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeCustom_Surface_HeaderFile
#define _ShapeCustom_Surface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom_Surface.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
class Geom_Surface;


//! Converts a surface to the analitical form with given
//! precision. Conversion is done only the surface is bspline
//! of bezier and this can be approximed by some analytical
//! surface with that precision.
class ShapeCustom_Surface 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ShapeCustom_Surface();
  
  Standard_EXPORT ShapeCustom_Surface(const Handle(Geom_Surface)& S);
  
  Standard_EXPORT   void Init (const Handle(Geom_Surface)& S) ;
  
  //! Returns maximal deviation of converted surface from the original
  //! one computed by last call to ConvertToAnalytical
      Standard_Real Gap()  const;
  
  //! Tries to convert the Surface to an Analytic form
  //! Returns the result
  //! Works only if the Surface is BSpline or Bezier.
  //! Else, or in case of failure, returns a Null Handle
  //!
  //! If <substitute> is True, the new surface replaces the actual
  //! one in <me>
  //!
  //! It works by analysing the case which can apply, creating the
  //! corresponding analytic surface, then checking coincidence
  //! Warning: Parameter laws are not kept, hence PCurves should be redone
  Standard_EXPORT   Handle(Geom_Surface) ConvertToAnalytical (const Standard_Real tol, const Standard_Boolean substitute) ;
  
  //! Tries to convert the Surface to the Periodic form
  //! Returns the resulting surface
  //! Works only if the Surface is BSpline and is closed with
  //! Precision::Confusion()
  //! Else, or in case of failure, returns a Null Handle
  Standard_EXPORT   Handle(Geom_Surface) ConvertToPeriodic (const Standard_Boolean substitute, const Standard_Real preci = -1) ;




protected:





private:



  Handle(Geom_Surface) mySurf;
  Standard_Real myGap;


};


#include <ShapeCustom_Surface.lxx>





#endif // _ShapeCustom_Surface_HeaderFile
