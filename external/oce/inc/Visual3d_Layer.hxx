// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_Layer_HeaderFile
#define _Visual3d_Layer_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Visual3d_Layer.hxx>

#include <Handle_Graphic3d_GraphicDriver.hxx>
#include <Aspect_CLayer2d.hxx>
#include <Standard_Address.hxx>
#include <Visual3d_NListOfLayerItem.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_Visual3d_ViewManager.hxx>
#include <Aspect_TypeOfLayer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Standard_CString.hxx>
#include <Standard_ShortReal.hxx>
#include <Aspect_TypeOfLine.hxx>
#include <Aspect_TypeOfDisplayText.hxx>
#include <Aspect_TypeOfConstraint.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Visual3d_LayerItem.hxx>
class Graphic3d_GraphicDriver;
class Visual3d_LayerDefinitionError;
class Visual3d_ViewManager;
class Quantity_Color;
class Visual3d_LayerItem;


//! This class allows to manage 2d graphics.
class Visual3d_Layer : public MMgt_TShared
{

public:

  
  //! Creates a layer with the type <Atype>.
  //! if <AFlag> == Standard_True then the layer is
  //! "size dependent".
  //! The mapping of the layer is dependent of each
  //! window's size.
  //! if <AFlag> == Standard_False then the mapping of the
  //! layer is dependent of the highest window and the largest
  //! window of all the views of the viewer <AViewer>.
  //! When the viewer <AViewer> have only one view, the
  //! result will be the same with <AFlag> == Standard_False
  //! or <AFlag> == Standard_True.
  Standard_EXPORT Visual3d_Layer(const Handle(Visual3d_ViewManager)& AViewer, const Aspect_TypeOfLayer AType = Aspect_TOL_OVERLAY, const Standard_Boolean AFlag = Standard_False);
  
  //! Suppress the layer <me>.
  Standard_EXPORT   void Destroy() ;
~Visual3d_Layer()
{
  Destroy();
}
  
  //! Begins the definition of the layer <me>
  //! Warning: No default attributes
  Standard_EXPORT   void Begin() ;
  
  //! Finishs the definition of the layer <me>.
  Standard_EXPORT   void End() ;
  
  //! Clear all graphics managed by the layer <me>.
  Standard_EXPORT   void Clear() ;
  
  //! After this call, <me> is ready to receive
  //! a definition of a polyline with AddVertex().
  Standard_EXPORT   void BeginPolyline() ;
  
  //! After this call, <me> is ready to receive
  //! a definition of a polygon with AddEdge().
  Standard_EXPORT   void BeginPolygon() ;
  
  //! Puts <X, Y> as a new point in the current primitive.
  //! If <AFlag> then it is a draw between last point and
  //! this point else it is a move between last point and
  //! this point.
  Standard_EXPORT   void AddVertex (const Standard_Real X, const Standard_Real Y, const Standard_Boolean AFlag = Standard_True) ;
  
  //! After this call, <me> stops the reception of
  //! a definition of a Begin... primitive.
  Standard_EXPORT   void ClosePrimitive() ;
  
  //! Draws the rectangle at position <X,Y>.
  Standard_EXPORT   void DrawRectangle (const Standard_Real X, const Standard_Real Y, const Standard_Real Width, const Standard_Real Height) ;
  
  //! Draws the string <AText> at position <X,Y>.
  //! The attributes are given with respect to the plane of
  //! projection.
  //! <AHeight>   : Height of text.
  //! (Relative to the Normalized Projection
  //! Coordinates (NPC) Space).
  Standard_EXPORT   void DrawText (const Standard_CString AText, const Standard_Real X, const Standard_Real Y, const Standard_Real AHeight) ;
  
  //! Get the size of text.
  //! The attributes are given with respect to the plane of
  //! projection.
  //! <AHeight>   : Height of text.
  //! (Relative to the Normalized Projection
  //! Coordinates (NPC) Space).
  Standard_EXPORT   void TextSize (const Standard_CString AText, const Standard_Real AHeight, Standard_Real& AWidth, Standard_Real& AnAscent, Standard_Real& ADescent)  const;
  
  //! Modifies the current color.
  //! Warning: No default color
  Standard_EXPORT   void SetColor (const Quantity_Color& AColor) ;
  
  //! Modifies the current transparency.
  //! Warning: No default transparency
  Standard_EXPORT   void SetTransparency (const Standard_ShortReal ATransparency) ;
  
  //! Unsets the transparency.
  Standard_EXPORT   void UnsetTransparency() ;
  
  //! Modifies the current lines attributes.
  //! Warning: No default attributes
  Standard_EXPORT   void SetLineAttributes (const Aspect_TypeOfLine AType, const Standard_Real AWidth) ;
  
  //! Modifies the current texts attributes.
  //! <AFont> defines the name of the font to be used.
  //! <AType> defines the display type of the text.
  //! <AColor> defines the color of decal or subtitle background.
  //! To set the color of the text you can use the SetColor method.
  //! Warning: No default attributes
  Standard_EXPORT   void SetTextAttributes (const Standard_CString AFont, const Aspect_TypeOfDisplayText AType, const Quantity_Color& AColor) ;
  
  //! Modifies the current coordinates system of the layer <me>.
  Standard_EXPORT   void SetOrtho (const Standard_Real Left, const Standard_Real Right, const Standard_Real Bottom, const Standard_Real Top, const Aspect_TypeOfConstraint Attach = Aspect_TOC_BOTTOM_LEFT) ;
  
  //! Modifies the current viewport of the layer <me>.
  Standard_EXPORT   void SetViewport (const Standard_Integer Width, const Standard_Integer Height) ;
  
  //! Returns the associated C structure.
  Standard_EXPORT   Aspect_CLayer2d CLayer()  const;
  
  //! Returns the type.
  Standard_EXPORT   Aspect_TypeOfLayer Type()  const;
  
  Standard_EXPORT   void AddLayerItem (const Handle(Visual3d_LayerItem)& Item) ;
  
  Standard_EXPORT   void RemoveLayerItem (const Handle(Visual3d_LayerItem)& Item) ;
  
  Standard_EXPORT   void RemoveAllLayerItems() ;
  
  Standard_EXPORT  const  Visual3d_NListOfLayerItem& GetLayerItemList()  const;
  
  Standard_EXPORT   void RenderLayerItems()  const;



  DEFINE_STANDARD_RTTI(Visual3d_Layer)

protected:




private: 


  Handle(Graphic3d_GraphicDriver) MyGraphicDriver;
  Aspect_CLayer2d MyCLayer;
  Standard_Address MyPtrViewManager;
  Visual3d_NListOfLayerItem MyListOfLayerItems;


};







#endif // _Visual3d_Layer_HeaderFile