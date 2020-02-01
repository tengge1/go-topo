// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LProp3d_SLProps_HeaderFile
#define _LProp3d_SLProps_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Adaptor3d_HSurface.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Dir.hxx>
#include <LProp_Status.hxx>
#include <Standard_Boolean.hxx>
class Adaptor3d_HSurface;
class LProp_BadContinuity;
class Standard_DomainError;
class Standard_OutOfRange;
class LProp_NotDefined;
class LProp3d_SurfaceTool;
class gp_Pnt;
class gp_Vec;
class gp_Dir;



class LProp3d_SLProps 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT LProp3d_SLProps(const Handle(Adaptor3d_HSurface)& S, const Standard_Real U, const Standard_Real V, const Standard_Integer N, const Standard_Real Resolution);
  
  Standard_EXPORT LProp3d_SLProps(const Handle(Adaptor3d_HSurface)& S, const Standard_Integer N, const Standard_Real Resolution);
  
  Standard_EXPORT LProp3d_SLProps(const Standard_Integer N, const Standard_Real Resolution);
  
  Standard_EXPORT   void SetSurface (const Handle(Adaptor3d_HSurface)& S) ;
  
  Standard_EXPORT   void SetParameters (const Standard_Real U, const Standard_Real V) ;
  
  Standard_EXPORT  const  gp_Pnt& Value()  const;
  
  Standard_EXPORT  const  gp_Vec& D1U() ;
  
  Standard_EXPORT  const  gp_Vec& D1V() ;
  
  Standard_EXPORT  const  gp_Vec& D2U() ;
  
  Standard_EXPORT  const  gp_Vec& D2V() ;
  
  Standard_EXPORT  const  gp_Vec& DUV() ;
  
  Standard_EXPORT   Standard_Boolean IsTangentUDefined() ;
  
  Standard_EXPORT   void TangentU (gp_Dir& D) ;
  
  Standard_EXPORT   Standard_Boolean IsTangentVDefined() ;
  
  Standard_EXPORT   void TangentV (gp_Dir& D) ;
  
  Standard_EXPORT   Standard_Boolean IsNormalDefined() ;
  
  Standard_EXPORT  const  gp_Dir& Normal() ;
  
  Standard_EXPORT   Standard_Boolean IsCurvatureDefined() ;
  
  Standard_EXPORT   Standard_Boolean IsUmbilic() ;
  
  Standard_EXPORT   Standard_Real MaxCurvature() ;
  
  Standard_EXPORT   Standard_Real MinCurvature() ;
  
  Standard_EXPORT   void CurvatureDirections (gp_Dir& MaxD, gp_Dir& MinD) ;
  
  Standard_EXPORT   Standard_Real MeanCurvature() ;
  
  Standard_EXPORT   Standard_Real GaussianCurvature() ;




protected:





private:



  Handle(Adaptor3d_HSurface) mySurf;
  Standard_Real myU;
  Standard_Real myV;
  Standard_Integer myDerOrder;
  Standard_Integer myCN;
  Standard_Real myLinTol;
  gp_Pnt myPnt;
  gp_Vec myD1u;
  gp_Vec myD1v;
  gp_Vec myD2u;
  gp_Vec myD2v;
  gp_Vec myDuv;
  gp_Dir myNormal;
  Standard_Real myMinCurv;
  Standard_Real myMaxCurv;
  gp_Dir myDirMinCurv;
  gp_Dir myDirMaxCurv;
  Standard_Real myMeanCurv;
  Standard_Real myGausCurv;
  Standard_Integer mySignificantFirstDerivativeOrderU;
  Standard_Integer mySignificantFirstDerivativeOrderV;
  LProp_Status myUTangentStatus;
  LProp_Status myVTangentStatus;
  LProp_Status myNormalStatus;
  LProp_Status myCurvatureStatus;


};







#endif // _LProp3d_SLProps_HeaderFile
