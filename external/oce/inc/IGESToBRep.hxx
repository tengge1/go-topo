// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESToBRep_HeaderFile
#define _IGESToBRep_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_IGESToBRep_AlgoContainer.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TColStd_HSequenceOfTransient.hxx>
class IGESToBRep_AlgoContainer;
class IGESData_IGESEntity;
class TopoDS_Shape;
class TColStd_HSequenceOfTransient;
class TopoDS_Edge;
class TopoDS_Face;
class IGESToBRep_CurveAndSurface;
class IGESToBRep_BasicSurface;
class IGESToBRep_BasicCurve;
class IGESToBRep_TopoSurface;
class IGESToBRep_TopoCurve;
class IGESToBRep_BRepEntity;
class IGESToBRep_IGESBoundary;
class IGESToBRep_Reader;
class IGESToBRep_Actor;
class IGESToBRep_AlgoContainer;
class IGESToBRep_ToolContainer;


//! Provides tools in order to transfer IGES entities
//! to CAS.CADE.
class IGESToBRep 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates and initializes default AlgoContainer.
  Standard_EXPORT static   void Init() ;
  
  //! Sets default AlgoContainer
  Standard_EXPORT static   void SetAlgoContainer (const Handle(IGESToBRep_AlgoContainer)& aContainer) ;
  
  //! Returns default AlgoContainer
  Standard_EXPORT static   Handle(IGESToBRep_AlgoContainer) AlgoContainer() ;
  
  //! Return True if the IGESEntity can be transfered by
  //! TransferCurveAndSurface.
  //! ex: All IGESEntity from IGESGeom
  Standard_EXPORT static   Standard_Boolean IsCurveAndSurface (const Handle(IGESData_IGESEntity)& start) ;
  
  //! Return True if the IGESEntity can be transfered by
  //! TransferBasicCurve.
  //! ex: CircularArc, ConicArc, Line, CopiousData,
  //! BSplineCurve, SplineCurve... from IGESGeom :
  //! 104,110,112,126
  Standard_EXPORT static   Standard_Boolean IsBasicCurve (const Handle(IGESData_IGESEntity)& start) ;
  
  //! Return True if the IGESEntity can be transfered by
  //! TransferBasicSurface.
  //! ex: BSplineSurface, SplineSurface... from IGESGeom :
  //! 114,128
  Standard_EXPORT static   Standard_Boolean IsBasicSurface (const Handle(IGESData_IGESEntity)& start) ;
  
  //! Return True if the IGESEntity can be transfered by
  //! TransferTopoCurve.
  //! ex: all Curves from IGESGeom :
  //! all basic curves,102,130,142,144
  Standard_EXPORT static   Standard_Boolean IsTopoCurve (const Handle(IGESData_IGESEntity)& start) ;
  
  //! Return True if the IGESEntity can be transfered by
  //! TransferTopoSurface.
  //! ex: All Surfaces from IGESGeom :
  //! all basic surfaces,108,118,120,122,141,143
  Standard_EXPORT static   Standard_Boolean IsTopoSurface (const Handle(IGESData_IGESEntity)& start) ;
  
  //! Return True if the IGESEntity can be transfered by
  //! TransferBRepEntity.
  //! ex: VertexList, EdgeList, Loop, Face, Shell,
  //! Manifold Solid BRep Object from IGESSolid :
  //! 502, 504, 508, 510, 514, 186.
  Standard_EXPORT static   Standard_Boolean IsBRepEntity (const Handle(IGESData_IGESEntity)& start) ;
  
  //! Creates  a file  Shape_'number' with the shape being
  //! able to be restored by Draw.
  Standard_EXPORT static   void WriteShape (const TopoDS_Shape& shape, const Standard_Integer number) ;
  
  Standard_EXPORT static   Standard_Integer IGESCurveToSequenceOfIGESCurve (const Handle(IGESData_IGESEntity)& curve, Handle(TColStd_HSequenceOfTransient)& sequence) ;
  
  Standard_EXPORT static   Standard_Boolean TransferPCurve (const TopoDS_Edge& fromedge, const TopoDS_Edge& toedge, const TopoDS_Face& face) ;




protected:





private:




friend class IGESToBRep_CurveAndSurface;
friend class IGESToBRep_BasicSurface;
friend class IGESToBRep_BasicCurve;
friend class IGESToBRep_TopoSurface;
friend class IGESToBRep_TopoCurve;
friend class IGESToBRep_BRepEntity;
friend class IGESToBRep_IGESBoundary;
friend class IGESToBRep_Reader;
friend class IGESToBRep_Actor;
friend class IGESToBRep_AlgoContainer;
friend class IGESToBRep_ToolContainer;

};







#endif // _IGESToBRep_HeaderFile
