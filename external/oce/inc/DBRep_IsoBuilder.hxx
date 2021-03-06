// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBRep_IsoBuilder_HeaderFile
#define _DBRep_IsoBuilder_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <Standard_Integer.hxx>
#include <Geom2dHatch_Hatcher.hxx>
#include <Handle_DBRep_Face.hxx>
class TopoDS_Face;
class DBRep_Face;


//! Creation of isoparametric curves.
class DBRep_IsoBuilder  : public Geom2dHatch_Hatcher
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates the builder.
  Standard_EXPORT DBRep_IsoBuilder(const TopoDS_Face& TopologicalFace, const Standard_Real Infinite, const Standard_Integer NbIsos);
  
  //! Returns the total number of domains.
      Standard_Integer NbDomains()  const;
  
  //! Loading of the isoparametric curves in the
  //! Data Structure of a drawable face.
  Standard_EXPORT   void LoadIsos (const Handle(DBRep_Face)& Face)  const;




protected:





private:



  Standard_Real myInfinite;
  Standard_Real myUMin;
  Standard_Real myUMax;
  Standard_Real myVMin;
  Standard_Real myVMax;
  TColStd_Array1OfReal myUPrm;
  TColStd_Array1OfInteger myUInd;
  TColStd_Array1OfReal myVPrm;
  TColStd_Array1OfInteger myVInd;
  Standard_Integer myNbDom;


};


#include <DBRep_IsoBuilder.lxx>





#endif // _DBRep_IsoBuilder_HeaderFile
