// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdPrs_DeflectionCurve_HeaderFile
#define _StdPrs_DeflectionCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Prs3d_Root.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Prs3d_Drawer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Quantity_Length.hxx>
class Prs3d_Presentation;
class Adaptor3d_Curve;
class TColgp_SequenceOfPnt;


//! A framework to provide display of any curve with
//! respect to the maximal chordal deviation defined in
//! the Prs3d_Drawer attributes manager.
class StdPrs_DeflectionCurve  : public Prs3d_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! adds to the presentation aPresentation the drawing of the curve
  //! aCurve with respect to the maximal chordial deviation defined
  //! by the drawer aDrawer.
  //! The aspect is defined by LineAspect in aDrawer.
  //! If drawCurve equals Standard_False the curve will not be displayed,
  //! it is used if the curve is a part of some shape and PrimitiveArray
  //! visualization approach is activated (it is activated by default).
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, Adaptor3d_Curve& aCurve, const Handle(Prs3d_Drawer)& aDrawer, const Standard_Boolean drawCurve = Standard_True) ;
  
  //! adds to the presentation aPresentation the drawing of the curve
  //! aCurve with respect to the maximal chordial deviation defined
  //! by the drawer aDrawer.
  //! The aspect is defined by LineAspect in aDrawer.
  //! The drawing will be limited between the points of parameter U1 and U2.
  //! If drawCurve equals Standard_False the curve will not be displayed,
  //! it is used if the curve is a part of some shape and PrimitiveArray
  //! visualization approach is activated (it is activated by default).
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, Adaptor3d_Curve& aCurve, const Standard_Real U1, const Standard_Real U2, const Handle(Prs3d_Drawer)& aDrawer, const Standard_Boolean drawCurve = Standard_True) ;
  
  //! adds to the presentation aPresentation the drawing of the curve
  //! aCurve with respect to the maximal chordial deviation aDeflection.
  //! The aspect is the current aspect
  //! If drawCurve equals Standard_False the curve will not be displayed,
  //! it is used if the curve is a part of some shape and PrimitiveArray
  //! visualization approach is activated (it is activated by default).
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, Adaptor3d_Curve& aCurve, const Standard_Real aDeflection, const Standard_Real aLimit, const Standard_Real anAngle = 0.2, const Standard_Boolean drawCurve = Standard_True) ;
  
  //! adds to the presentation aPresentation the drawing of the curve
  //! aCurve with respect to the maximal chordial deviation aDeflection.
  //! The aspect is the current aspect
  //! Points give a sequence of curve points.
  //! If drawCurve equals Standard_False the curve will not be displayed,
  //! it is used if the curve is a part of some shape and PrimitiveArray
  //! visualization approach is activated (it is activated by default).
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, Adaptor3d_Curve& aCurve, const Standard_Real aDeflection, const Handle(Prs3d_Drawer)& aDrawer, TColgp_SequenceOfPnt& Points, const Standard_Boolean drawCurve = Standard_True) ;
  
  //! adds to the presentation aPresentation the drawing of the curve
  //! aCurve with respect to the maximal chordial deviation aDeflection.
  //! The aspect is the current aspect
  //! The drawing will be limited between the points of parameter U1 and U2.
  //! Points give a sequence of curve points.
  //! If drawCurve equals Standard_False the curve will not be displayed,
  //! it is used if the curve is a part of some shape and PrimitiveArray
  //! visualization approach is activated (it is activated by default).
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, Adaptor3d_Curve& aCurve, const Standard_Real U1, const Standard_Real U2, const Standard_Real aDeflection, TColgp_SequenceOfPnt& Points, const Standard_Real anAngle = 0.2, const Standard_Boolean drawCurve = Standard_True) ;
  
  //! returns true if the distance between the point (X,Y,Z) and the
  //! drawing of the curve aCurve with respect of the maximal
  //! chordial deviation defined by the drawer aDrawer is less then aDistance.
  Standard_EXPORT static   Standard_Boolean Match (const Quantity_Length X, const Quantity_Length Y, const Quantity_Length Z, const Quantity_Length aDistance, const Adaptor3d_Curve& aCurve, const Handle(Prs3d_Drawer)& aDrawer) ;
  
  //! returns true if the distance between the point (X,Y,Z) and the
  //! drawing of the curve aCurve with respect of the maximal
  //! chordial deviation defined by the drawer aDrawer is less
  //! then aDistance. The drawing is considered between the points
  //! of parameter U1 and U2;
  Standard_EXPORT static   Standard_Boolean Match (const Quantity_Length X, const Quantity_Length Y, const Quantity_Length Z, const Quantity_Length aDistance, const Adaptor3d_Curve& aCurve, const Standard_Real U1, const Standard_Real U2, const Handle(Prs3d_Drawer)& aDrawer) ;
  
  //! returns true if the distance between the point (X,Y,Z) and the
  //! drawing with respect of the maximal chordial deviation
  //! aDeflection is less then aDistance.
  Standard_EXPORT static   Standard_Boolean Match (const Quantity_Length X, const Quantity_Length Y, const Quantity_Length Z, const Quantity_Length aDistance, const Adaptor3d_Curve& aCurve, const Standard_Real aDeflection, const Standard_Real aLimit, const Standard_Real anAngle = 0.2) ;
  
  //! returns true if the distance between the point (X,Y,Z) and the
  //! drawing with respect of the maximal chordial deviation
  //! aDeflection is less then aDistance. The drawing is considered
  //! between the points of parameter U1 and U2;
  Standard_EXPORT static   Standard_Boolean Match (const Quantity_Length X, const Quantity_Length Y, const Quantity_Length Z, const Quantity_Length aDistance, const Adaptor3d_Curve& aCurve, const Standard_Real U1, const Standard_Real U2, const Standard_Real aDeflection, const Standard_Real anAngle = 0.2) ;




protected:





private:





};







#endif // _StdPrs_DeflectionCurve_HeaderFile
