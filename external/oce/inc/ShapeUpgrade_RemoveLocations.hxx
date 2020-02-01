// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_RemoveLocations_HeaderFile
#define _ShapeUpgrade_RemoveLocations_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ShapeUpgrade_RemoveLocations.hxx>

#include <TopAbs_ShapeEnum.hxx>
#include <TopoDS_Shape.hxx>
#include <TopTools_DataMapOfShapeShape.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
class TopoDS_Shape;


//! Removes all locations sub-shapes of specified shape
class ShapeUpgrade_RemoveLocations : public MMgt_TShared
{

public:

  
  //! Empy constructor
  Standard_EXPORT ShapeUpgrade_RemoveLocations();
  
  //! Removes all location correspodingly to RemoveLevel.
  Standard_EXPORT   Standard_Boolean Remove (const TopoDS_Shape& theShape) ;
  
  //! Returns shape with removed locatins.
      TopoDS_Shape GetResult()  const;
  
  //! sets level starting with that location will be removed,
  //! by default TopAbs_SHAPE. In this case locations will be kept for specified shape
  //! and if specified shape is TopAbs_COMPOUND for sub-shapes of first level.
      void SetRemoveLevel (const TopAbs_ShapeEnum theLevel) ;
  
  //! sets level starting with that location will be removed.Value of level can be set to
  //! TopAbs_SHAPE,TopAbs_COMPOUND,TopAbs_SOLID,TopAbs_SHELL,TopAbs_FACE.By default TopAbs_SHAPE.
  //! In this case location will be removed for all shape types for exception of compound.
      TopAbs_ShapeEnum RemoveLevel()  const;
  
  //! Returns modified shape obtained from initial shape.
      TopoDS_Shape ModifiedShape (const TopoDS_Shape& theInitShape)  const;




  DEFINE_STANDARD_RTTI(ShapeUpgrade_RemoveLocations)

protected:




private: 

  
  Standard_EXPORT   Standard_Boolean MakeNewShape (const TopoDS_Shape& theShape, const TopoDS_Shape& theAncShape, TopoDS_Shape& theNewShape, const Standard_Boolean theRemoveLoc) ;

  TopAbs_ShapeEnum myLevelRemoving;
  TopoDS_Shape myShape;
  TopTools_DataMapOfShapeShape myMapNewShapes;


};


#include <ShapeUpgrade_RemoveLocations.lxx>





#endif // _ShapeUpgrade_RemoveLocations_HeaderFile
