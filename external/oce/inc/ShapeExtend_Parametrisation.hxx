// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeExtend_Parametrisation_HeaderFile
#define _ShapeExtend_Parametrisation_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! Defines kind of global parametrisation on the composite surface
//! each patch of the 1st row and column adds its range, Ui+1 = Ui + URange(i,1), etc.
//! each patch gives range 1.: Ui = i-1, Vj = j-1
//! uniform parametrisation with global range [0,1]
enum ShapeExtend_Parametrisation
{
ShapeExtend_Natural,
ShapeExtend_Uniform,
ShapeExtend_Unitary
};

#endif // _ShapeExtend_Parametrisation_HeaderFile
