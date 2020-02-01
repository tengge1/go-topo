// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeTorus_HeaderFile
#define _BRepPrimAPI_MakeTorus_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BRepPrim_Torus.hxx>
#include <BRepPrimAPI_MakeOneAxis.hxx>
#include <Standard_Real.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class gp_Ax2;
class BRepPrim_Torus;


//! Describes functions to build tori or portions of tori.
//! A MakeTorus object provides a framework for:
//! -   defining the construction of a torus,
//! -   implementing the construction algorithm, and
//! -   consulting the result.
class BRepPrimAPI_MakeTorus  : public BRepPrimAPI_MakeOneAxis
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Make a torus of radii R1 R2.
  Standard_EXPORT BRepPrimAPI_MakeTorus(const Standard_Real R1, const Standard_Real R2);
  
  //! Make a section of a torus of radii R1 R2.
  Standard_EXPORT BRepPrimAPI_MakeTorus(const Standard_Real R1, const Standard_Real R2, const Standard_Real angle);
  
  //! Make  a torus of  radii R2, R2  with angles on the
  //! small circle.
  Standard_EXPORT BRepPrimAPI_MakeTorus(const Standard_Real R1, const Standard_Real R2, const Standard_Real angle1, const Standard_Real angle2);
  
  //! Make  a torus of  radii R2, R2  with angles on the
  //! small circle.
  Standard_EXPORT BRepPrimAPI_MakeTorus(const Standard_Real R1, const Standard_Real R2, const Standard_Real angle1, const Standard_Real angle2, const Standard_Real angle);
  
  //! Make a torus of radii R1 R2.
  Standard_EXPORT BRepPrimAPI_MakeTorus(const gp_Ax2& Axes, const Standard_Real R1, const Standard_Real R2);
  
  //! Make a section of a torus of radii R1 R2.
  Standard_EXPORT BRepPrimAPI_MakeTorus(const gp_Ax2& Axes, const Standard_Real R1, const Standard_Real R2, const Standard_Real angle);
  
  //! Make a torus of radii R1 R2.
  Standard_EXPORT BRepPrimAPI_MakeTorus(const gp_Ax2& Axes, const Standard_Real R1, const Standard_Real R2, const Standard_Real angle1, const Standard_Real angle2);
  
  //! Make a section of a torus of radii R1 R2.
  //! For all algorithms The resulting shape is composed of
  //! -      a lateral toroidal face,
  //! -      two conical faces (defined  by the equation v = angle1 and
  //! v = angle2) if the sphere is truncated in the v parametric
  //! direction (they may be cylindrical faces in some
  //! particular conditions), and in case of a portion
  //! of torus, two planar faces to close the shape.(in the planes
  //! u = 0 and u = angle).
  //! Notes:
  //! -      The u parameter corresponds to a rotation angle around the Z axis.
  //! -      The circle whose radius is equal to the minor radius,
  //! located in the plane defined by the X axis and the Z axis,
  //! centered on the X axis, on its positive side, and positioned
  //! at a distance from the origin equal to the major radius, is
  //! the reference circle of the torus. The rotation around an
  //! axis parallel to the Y axis and passing through the center
  //! of the reference circle gives the v parameter on the
  //! reference circle. The X axis gives the origin of the v
  //! parameter. Near 0, as v increases, the Z coordinate decreases.
  Standard_EXPORT BRepPrimAPI_MakeTorus(const gp_Ax2& Axes, const Standard_Real R1, const Standard_Real R2, const Standard_Real angle1, const Standard_Real angle2, const Standard_Real angle);
  
  //! Returns the algorithm.
  Standard_EXPORT   Standard_Address OneAxis() ;
  
  //! Returns the algorithm.
  Standard_EXPORT   BRepPrim_Torus& Torus() ;




protected:





private:



  BRepPrim_Torus myTorus;


};







#endif // _BRepPrimAPI_MakeTorus_HeaderFile
