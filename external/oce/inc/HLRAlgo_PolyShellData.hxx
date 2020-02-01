// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_PolyShellData_HeaderFile
#define _HLRAlgo_PolyShellData_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_HLRAlgo_PolyShellData.hxx>

#include <Standard_Integer.hxx>
#include <TColStd_Array1OfTransient.hxx>
#include <Handle_TColStd_HArray1OfTransient.hxx>
#include <HLRAlgo_ListOfBPoint.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
class TColStd_HArray1OfTransient;
class TColStd_Array1OfTransient;
class HLRAlgo_ListOfBPoint;


//! All the PolyData of a Shell
class HLRAlgo_PolyShellData : public MMgt_TShared
{

public:

  
  Standard_EXPORT HLRAlgo_PolyShellData(const Standard_Integer nbFace);
  
  Standard_EXPORT   void UpdateGlobalMinMax (const Standard_Address TotMinMax) ;
  
  Standard_EXPORT   void UpdateHiding (const Standard_Integer nbHiding) ;
  
      Standard_Boolean Hiding()  const;
  
      TColStd_Array1OfTransient& PolyData() ;
  
      TColStd_Array1OfTransient& HidingPolyData() ;
  
      HLRAlgo_ListOfBPoint& Edges() ;
  
      Standard_Address Indices() ;




  DEFINE_STANDARD_RTTI(HLRAlgo_PolyShellData)

protected:




private: 


  Standard_Integer myMinMax[2];
  TColStd_Array1OfTransient myPolyg;
  Handle(TColStd_HArray1OfTransient) myHPolHi;
  HLRAlgo_ListOfBPoint mySegList;


};


#include <HLRAlgo_PolyShellData.lxx>





#endif // _HLRAlgo_PolyShellData_HeaderFile