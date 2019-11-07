// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgoAPI_Common_HeaderFile
#define _BRepAlgoAPI_Common_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BRepAlgoAPI_BooleanOperation.hxx>
class BOPAlgo_PaveFiller;
class TopoDS_Shape;



//! The class provides Boolean common operation
//! between arguments and tools (Boolean Intersection).
class BRepAlgoAPI_Common  : public BRepAlgoAPI_BooleanOperation
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT BRepAlgoAPI_Common();
Standard_EXPORT virtual ~BRepAlgoAPI_Common();
  
  //! Empty constructor
  //! <PF> - PaveFiller object that is carried out
  Standard_EXPORT BRepAlgoAPI_Common(const BOPAlgo_PaveFiller& PF);
  
  //! Constructor with two shapes
  //! <S1>  -argument
  //! <S2>  -tool
  //! <anOperation> - the type of the operation
  //! Obsolete
  Standard_EXPORT BRepAlgoAPI_Common(const TopoDS_Shape& S1, const TopoDS_Shape& S2);
  
  //! Constructor with two shapes
  //! <S1>  -argument
  //! <S2>  -tool
  //! <anOperation> - the type of the operation
  //! <PF> - PaveFiller object that is carried out
  //! Obsolete
  Standard_EXPORT BRepAlgoAPI_Common(const TopoDS_Shape& S1, const TopoDS_Shape& S2, const BOPAlgo_PaveFiller& PF);




protected:





private:





};







#endif // _BRepAlgoAPI_Common_HeaderFile
