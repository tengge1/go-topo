// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_Cut_HeaderFile
#define _BRepAlgo_Cut_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BRepAlgo_BooleanOperation.hxx>
class TopoDS_Shape;


//! Describes functions for performing a topological cut
//! operation (Boolean subtraction).
//! A Cut object provides the framework for:
//! - defining the construction of a cut shape,
//! - implementing the construction algorithm, and
//! - consulting the result.
class BRepAlgo_Cut  : public BRepAlgo_BooleanOperation
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Cuts the shape S2 from the shape S1.
  Standard_EXPORT BRepAlgo_Cut(const TopoDS_Shape& S1, const TopoDS_Shape& S2);




protected:





private:





};







#endif // _BRepAlgo_Cut_HeaderFile
