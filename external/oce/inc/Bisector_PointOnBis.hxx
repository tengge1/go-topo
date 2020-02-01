// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bisector_PointOnBis_HeaderFile
#define _Bisector_PointOnBis_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <gp_Pnt2d.hxx>
class gp_Pnt2d;



class Bisector_PointOnBis 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Bisector_PointOnBis();
  
  Standard_EXPORT Bisector_PointOnBis(const Standard_Real Param1, const Standard_Real Param2, const Standard_Real ParamBis, const Standard_Real Distance, const gp_Pnt2d& Point);
  
  Standard_EXPORT   void ParamOnC1 (const Standard_Real Param) ;
  
  Standard_EXPORT   void ParamOnC2 (const Standard_Real Param) ;
  
  Standard_EXPORT   void ParamOnBis (const Standard_Real Param) ;
  
  Standard_EXPORT   void Distance (const Standard_Real Distance) ;
  
  Standard_EXPORT   void IsInfinite (const Standard_Boolean Infinite) ;
  
  Standard_EXPORT   void Point (const gp_Pnt2d& P) ;
  
  Standard_EXPORT   Standard_Real ParamOnC1()  const;
  
  Standard_EXPORT   Standard_Real ParamOnC2()  const;
  
  Standard_EXPORT   Standard_Real ParamOnBis()  const;
  
  Standard_EXPORT   Standard_Real Distance()  const;
  
  Standard_EXPORT   gp_Pnt2d Point()  const;
  
  Standard_EXPORT   Standard_Boolean IsInfinite()  const;
  
  Standard_EXPORT   void Dump()  const;




protected:





private:



  Standard_Real param1;
  Standard_Real param2;
  Standard_Real paramBis;
  Standard_Real distance;
  Standard_Boolean infinite;
  gp_Pnt2d point;


};







#endif // _Bisector_PointOnBis_HeaderFile