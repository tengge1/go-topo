// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeTransformation2d_HeaderFile
#define _StepToGeom_MakeTransformation2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Handle_StepGeom_CartesianTransformationOperator2d.hxx>
class StepGeom_CartesianTransformationOperator2d;
class gp_Trsf2d;


//! Convert cartesian_transformation_operator_2d to gp_Trsf2d
class StepToGeom_MakeTransformation2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Boolean Convert (const Handle(StepGeom_CartesianTransformationOperator2d)& SCTO, gp_Trsf2d& CT) ;




protected:





private:





};







#endif // _StepToGeom_MakeTransformation2d_HeaderFile
