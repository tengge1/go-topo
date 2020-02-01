// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapIteratorOfShapeSurface_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfShapeSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Handle_TopOpeBRepDS_DataMapNodeOfShapeSurface.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class Geom_Surface;
class TopTools_ShapeMapHasher;
class TopOpeBRepDS_ShapeSurface;
class TopOpeBRepDS_DataMapNodeOfShapeSurface;



class TopOpeBRepDS_DataMapIteratorOfShapeSurface  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfShapeSurface();
  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfShapeSurface(const TopOpeBRepDS_ShapeSurface& aMap);
  
  Standard_EXPORT   void Initialize (const TopOpeBRepDS_ShapeSurface& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT  const  Handle(Geom_Surface)& Value()  const;




protected:





private:





};







#endif // _TopOpeBRepDS_DataMapIteratorOfShapeSurface_HeaderFile
