// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_TFace_HeaderFile
#define _PBRep_TFace_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PBRep_TFace.hxx>

#include <Handle_PGeom_Surface.hxx>
#include <Handle_PPoly_Triangulation.hxx>
#include <PTopLoc_Location.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <PTopoDS_TFace.hxx>
class PGeom_Surface;
class PPoly_Triangulation;
class PTopLoc_Location;


class PBRep_TFace : public PTopoDS_TFace
{

public:

  
  //! Creates an empty TFace.
  Standard_EXPORT PBRep_TFace();
  
  Standard_EXPORT   Handle(PGeom_Surface) Surface()  const;
  
  Standard_EXPORT   Handle(PPoly_Triangulation) Triangulation()  const;
  
  Standard_EXPORT   PTopLoc_Location Location()  const;
  
  Standard_EXPORT   Standard_Real Tolerance()  const;
  
  Standard_EXPORT   void Surface (const Handle(PGeom_Surface)& S) ;
  
  Standard_EXPORT   void Triangulation (const Handle(PPoly_Triangulation)& T) ;
  
  Standard_EXPORT   void Location (const PTopLoc_Location& L) ;
  
  Standard_EXPORT   void Tolerance (const Standard_Real T) ;
  
  Standard_EXPORT   Standard_Boolean NaturalRestriction()  const;
  
  Standard_EXPORT   void NaturalRestriction (const Standard_Boolean N) ;

PBRep_TFace(const Storage_stCONSTclCOM& a) : PTopoDS_TFace(a)
{
  
}
    Handle(PGeom_Surface) _CSFDB_GetPBRep_TFacemySurface() const { return mySurface; }
    void _CSFDB_SetPBRep_TFacemySurface(const Handle(PGeom_Surface)& p) { mySurface = p; }
    Handle(PPoly_Triangulation) _CSFDB_GetPBRep_TFacemyTriangulation() const { return myTriangulation; }
    void _CSFDB_SetPBRep_TFacemyTriangulation(const Handle(PPoly_Triangulation)& p) { myTriangulation = p; }
    const PTopLoc_Location& _CSFDB_GetPBRep_TFacemyLocation() const { return myLocation; }
    Standard_Real _CSFDB_GetPBRep_TFacemyTolerance() const { return myTolerance; }
    void _CSFDB_SetPBRep_TFacemyTolerance(const Standard_Real p) { myTolerance = p; }
    Standard_Boolean _CSFDB_GetPBRep_TFacemyNaturalRestriction() const { return myNaturalRestriction; }
    void _CSFDB_SetPBRep_TFacemyNaturalRestriction(const Standard_Boolean p) { myNaturalRestriction = p; }



  DEFINE_STANDARD_RTTI(PBRep_TFace)

protected:




private: 


  Handle(PGeom_Surface) mySurface;
  Handle(PPoly_Triangulation) myTriangulation;
  PTopLoc_Location myLocation;
  Standard_Real myTolerance;
  Standard_Boolean myNaturalRestriction;


};







#endif // _PBRep_TFace_HeaderFile
