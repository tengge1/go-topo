// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Convert_ConeToBSplineSurface_HeaderFile
#define _Convert_ConeToBSplineSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Convert_ElementarySurfaceToBSplineSurface.hxx>
#include <Standard_Real.hxx>
class Standard_DomainError;
class gp_Cone;



//! This algorithm converts a bounded Cone into a rational
//! B-spline  surface.
//! The cone a Cone from package gp. Its parametrization is :
//! P (U, V) =  Loc + V * Zdir +
//! (R + V*Tan(Ang)) * (Cos(U)*Xdir + Sin(U)*Ydir)
//! where Loc is the location point of the cone, Xdir, Ydir and Zdir
//! are the normalized directions of the local cartesian coordinate
//! system of the cone (Zdir is the direction of the Cone's axis) ,
//! Ang is the cone semi-angle.  The U parametrization range is
//! [0, 2PI].
//! KeyWords :
//! Convert, Cone, BSplineSurface.
class Convert_ConeToBSplineSurface  : public Convert_ElementarySurfaceToBSplineSurface
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! The equivalent B-spline surface as the same orientation as the
  //! Cone in the U and V parametric directions.
  //!
  //! Raised if U1 = U2 or U1 = U2 + 2.0 * Pi
  //! Raised if V1 = V2.
  Standard_EXPORT Convert_ConeToBSplineSurface(const gp_Cone& C, const Standard_Real U1, const Standard_Real U2, const Standard_Real V1, const Standard_Real V2);
  

  //! The equivalent B-spline surface as the same orientation as the
  //! Cone in the U and V parametric directions.
  //!
  //! Raised if V1 = V2.
  Standard_EXPORT Convert_ConeToBSplineSurface(const gp_Cone& C, const Standard_Real V1, const Standard_Real V2);




protected:





private:





};







#endif // _Convert_ConeToBSplineSurface_HeaderFile