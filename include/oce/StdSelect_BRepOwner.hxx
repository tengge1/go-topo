// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSelect_BRepOwner_HeaderFile
#define _StdSelect_BRepOwner_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StdSelect_BRepOwner.hxx>

#include <Handle_StdSelect_Shape.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <TopoDS_Shape.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Handle_SelectMgr_SelectableObject.hxx>
#include <Handle_PrsMgr_PresentationManager.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Graphic3d_ZLayerId.hxx>
class StdSelect_Shape;
class TopoDS_Shape;
class SelectMgr_SelectableObject;
class PrsMgr_PresentationManager;
class TopLoc_Location;


//! Defines Specific Owners for Sensitive Primitives
//! (Sensitive Segments,Circles...).
//! Used in Dynamic Selection Mechanism.
//! A BRepOwner has an Owner (the shape it represents)
//! and Users (One or More Transient entities).
//! The highlight-unhighlight methods are empty and
//! must be redefined by each User.
class StdSelect_BRepOwner : public SelectMgr_EntityOwner
{

public:

  
  //! Constructs an owner specification framework defined
  //! by the priority aPriority.
  Standard_EXPORT StdSelect_BRepOwner(const Standard_Integer aPriority);
  
  //! Constructs an owner specification framework defined
  //! by the shape aShape and the priority aPriority.
  //! aShape and aPriority are stored in this framework. If
  //! more than one owner are detected during dynamic
  //! selection, the one with the highest priority is the one stored.
  Standard_EXPORT StdSelect_BRepOwner(const TopoDS_Shape& aShape, const Standard_Integer aPriority = 0, const Standard_Boolean ComesFromDecomposition = Standard_False);
  
  //! Constructs an owner specification framework defined
  //! by the shape aShape, the selectable object theOrigin
  //! and the priority aPriority.
  //! aShape, theOrigin and aPriority are stored in this
  //! framework. If more than one owner are detected
  //! during dynamic selection, the one with the highest
  //! priority is the one stored.
  Standard_EXPORT StdSelect_BRepOwner(const TopoDS_Shape& aShape, const Handle(SelectMgr_SelectableObject)& theOrigin, const Standard_Integer aPriority = 0, const Standard_Boolean FromDecomposition = Standard_False);
  
  //! returns False if no shape was set
      Standard_Boolean HasShape()  const;
  
  //! <FromDecomposition> indicates whether <aShape>
  //! comes from decomposition of a bigger shape.
  Standard_EXPORT   void Set (const TopoDS_Shape& aShape, const Standard_Boolean FromDecomposition = Standard_False) ;
  
      Standard_Boolean ComesFromDecomposition()  const;
  
     const  TopoDS_Shape& Shape()  const;
  

  //! Returns true if this framework has a highlight mode defined for it.
      Standard_Boolean HasHilightMode()  const;
  
  //! Sets the highlight mode for this framework.
  //! This defines the type of display used to highlight the
  //! owner of the shape when it is detected by the selector.
  //! The default type of display is wireframe, defined by the index 0.
      void SetHilightMode (const Standard_Integer aMode) ;
  
  //! Resets the higlight mode for this framework.
  //! This defines the type of display used to highlight the
  //! owner of the shape when it is detected by the selector.
  //! The default type of display is wireframe, defined by the index 0.
      void ResetHilightMode() ;
  
  //! Returns the highlight mode for this framework.
  //! This defines the type of display used to highlight the
  //! owner of the shape when it is detected by the selector.
  //! The default type of display is wireframe, defined by the index 0.
      Standard_Integer HilightMode()  const;
  
  //! Returns true if an object with the selection mode
  //! aMode is highlighted in the presentation manager aPM.
  Standard_EXPORT virtual   Standard_Boolean IsHilighted (const Handle(PrsMgr_PresentationManager)& aPM, const Standard_Integer aMode = 0)  const;
  
  Standard_EXPORT virtual   void Hilight() ;
  
  //! Returns the selection mode aMode defining the type
  //! of shape highlighted in the presentation manager aPM.
  Standard_EXPORT virtual   void Hilight (const Handle(PrsMgr_PresentationManager)& aPM, const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT virtual   void HilightWithColor (const Handle(PrsMgr_PresentationManager3d)& aPM, const Quantity_NameOfColor aCol, const Standard_Integer aMode = 0) ;
  
  //! Removes highlighting from the type of shape
  //! identified the selection mode aMode in the presentation manager aPM.
  Standard_EXPORT virtual   void Unhilight (const Handle(PrsMgr_PresentationManager)& aPM, const Standard_Integer aMode = 0) ;
  
  //! Clears the presentation manager object aPM of all
  //! shapes with the selection mode aMode.
  Standard_EXPORT virtual   void Clear (const Handle(PrsMgr_PresentationManager)& aPM, const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT virtual   void SetLocation (const TopLoc_Location& aLoc) ;
  
  Standard_EXPORT virtual   void ResetLocation() ;
  
  //! Set Z layer ID and update all presentations.
  Standard_EXPORT virtual   void SetZLayer (const Graphic3d_ZLayerId theLayerId) ;




  DEFINE_STANDARD_RTTI(StdSelect_BRepOwner)

protected:


  Standard_Boolean myFromDecomposition;
  TopoDS_Shape myShape;


private: 


  Handle(StdSelect_Shape) myPrsSh;
  Standard_Integer myCurMode;


};


#include <StdSelect_BRepOwner.lxx>





#endif // _StdSelect_BRepOwner_HeaderFile
