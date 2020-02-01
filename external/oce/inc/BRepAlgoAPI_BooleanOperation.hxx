// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgoAPI_BooleanOperation_HeaderFile
#define _BRepAlgoAPI_BooleanOperation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopTools_ListOfShape.hxx>
#include <BOPAlgo_Operation.hxx>
#include <Standard_Boolean.hxx>
#include <TopTools_DataMapOfShapeShape.hxx>
#include <BRepAlgoAPI_BuilderAlgo.hxx>
class BOPAlgo_PaveFiller;
class TopoDS_Shape;
class TopTools_ListOfShape;



//! The abstract class BooleanOperation is the root
//! class of Boolean Operations (see Overview).
//! Boolean Operations algorithm is divided onto two parts.
//! - The first one is computing interference between arguments.
//! - The second one is building the result of operation.
//! The class BooleanOperation provides API level of both parts
class BRepAlgoAPI_BooleanOperation  : public BRepAlgoAPI_BuilderAlgo
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns the first argument involved in this Boolean operation.
  //! Obsolete
  Standard_EXPORT  const  TopoDS_Shape& Shape1()  const;
  
  //! Returns the second argument involved in this Boolean operation.
  //! Obsolete
  Standard_EXPORT  const  TopoDS_Shape& Shape2()  const;
  
  //! Sets the tools
  Standard_EXPORT   void SetTools (const TopTools_ListOfShape& theLS) ;
  
  //! Gets the tools
  Standard_EXPORT  const  TopTools_ListOfShape& Tools()  const;
  
  //! Sets the type of Boolean operation
  Standard_EXPORT   void SetOperation (const BOPAlgo_Operation anOp) ;
  
  //! Returns the type of Boolean Operation
  Standard_EXPORT   BOPAlgo_Operation Operation()  const;
Standard_EXPORT virtual ~BRepAlgoAPI_BooleanOperation();
  
  //! Performs the algorithm
  //! Filling interference Data Structure (if it is necessary)
  //! Building the result of the operation.
  Standard_EXPORT virtual   void Build() ;
  
  //! Returns True if there was no errors occured
  //! obsolete
  Standard_EXPORT   Standard_Boolean BuilderCanWork()  const;
  
  //! Returns the flag of edge refining
  Standard_EXPORT   Standard_Boolean FuseEdges()  const;
  
  //! Fuse C1 edges
  Standard_EXPORT   void RefineEdges() ;
  
  //! Returns a list of section edges.
  //! The edges represent the result of intersection between arguments of
  //! Boolean Operation. They are computed during operation execution.
  Standard_EXPORT  const  TopTools_ListOfShape& SectionEdges() ;
  
  //! Returns the list  of shapes modified from the shape <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Modified (const TopoDS_Shape& aS) ;
  
  //! Returns true if the shape S has been deleted. The
  //! result shape of the operation does not contain the shape S.
  Standard_EXPORT virtual   Standard_Boolean IsDeleted (const TopoDS_Shape& aS) ;
  
  //! Returns the list  of shapes generated from the shape <S>.
  //! For use in BRepNaming.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Generated (const TopoDS_Shape& S) ;
  
  //! Returns true if there is at least one modified shape.
  //! For use in BRepNaming.
  Standard_EXPORT virtual   Standard_Boolean HasModified()  const;
  
  //! Returns true if there is at least one generated shape.
  //! For use in BRepNaming.
  Standard_EXPORT virtual   Standard_Boolean HasGenerated()  const;
  
  //! Returns true if there is at least one deleted shape.
  //! For use in BRepNaming.
  Standard_EXPORT virtual   Standard_Boolean HasDeleted()  const;




protected:

  
  //! Empty constructor
  Standard_EXPORT BRepAlgoAPI_BooleanOperation();
  
  //! Empty constructor
  //! <PF> - PaveFiller object that is carried out
  Standard_EXPORT BRepAlgoAPI_BooleanOperation(const BOPAlgo_PaveFiller& PF);
  
  //! Constructor with two arguments
  //! <S1>, <S2>  -arguments
  //! <anOperation> - the type of the operation
  //! Obsolete
  Standard_EXPORT BRepAlgoAPI_BooleanOperation(const TopoDS_Shape& S1, const TopoDS_Shape& S2, const BOPAlgo_Operation anOperation);
  
  //! Constructor with two arguments
  //! <S1>, <S2>  -arguments
  //! <anOperation> - the type of the operation
  //! <PF> - PaveFiller object that is carried out
  //! Obsolete
  Standard_EXPORT BRepAlgoAPI_BooleanOperation(const TopoDS_Shape& S1, const TopoDS_Shape& S2, const BOPAlgo_PaveFiller& PF, const BOPAlgo_Operation anOperation);
  
  Standard_EXPORT virtual   void Clear() ;
  
  Standard_EXPORT virtual   void SetAttributes() ;
  
  //! Returns the list  of shapes generated from the shape <S>.
  //! For use in BRepNaming.
  Standard_EXPORT  const  TopTools_ListOfShape& RefinedList (const TopTools_ListOfShape& theL) ;


  TopTools_ListOfShape myTools;
  BOPAlgo_Operation myOperation;
  Standard_Boolean myBuilderCanWork;


private:



  Standard_Boolean myFuseEdges;
  TopTools_DataMapOfShapeShape myModifFaces;
  TopTools_DataMapOfShapeShape myEdgeMap;


};







#endif // _BRepAlgoAPI_BooleanOperation_HeaderFile