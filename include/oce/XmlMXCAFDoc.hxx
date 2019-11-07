// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMXCAFDoc_HeaderFile
#define _XmlMXCAFDoc_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_XmlMDF_ADriverTable.hxx>
#include <Handle_CDM_MessageDriver.hxx>
class XmlMDF_ADriverTable;
class CDM_MessageDriver;
class XmlMXCAFDoc_AreaDriver;
class XmlMXCAFDoc_CentroidDriver;
class XmlMXCAFDoc_ColorDriver;
class XmlMXCAFDoc_GraphNodeDriver;
class XmlMXCAFDoc_LocationDriver;
class XmlMXCAFDoc_VolumeDriver;
class XmlMXCAFDoc_DatumDriver;
class XmlMXCAFDoc_DimTolDriver;
class XmlMXCAFDoc_MaterialDriver;
class XmlMXCAFDoc_ColorToolDriver;
class XmlMXCAFDoc_DocumentToolDriver;
class XmlMXCAFDoc_LayerToolDriver;
class XmlMXCAFDoc_ShapeToolDriver;
class XmlMXCAFDoc_DimTolToolDriver;
class XmlMXCAFDoc_MaterialToolDriver;


//! Storage and Retrieval drivers for modelling attributes.
//! Transient attributes are defined in package XCAFDoc
class XmlMXCAFDoc 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Adds the attribute drivers to <aDriverTable>.
  Standard_EXPORT static   void AddDrivers (const Handle(XmlMDF_ADriverTable)& aDriverTable, const Handle(CDM_MessageDriver)& anMsgDrv) ;




protected:





private:




friend class XmlMXCAFDoc_AreaDriver;
friend class XmlMXCAFDoc_CentroidDriver;
friend class XmlMXCAFDoc_ColorDriver;
friend class XmlMXCAFDoc_GraphNodeDriver;
friend class XmlMXCAFDoc_LocationDriver;
friend class XmlMXCAFDoc_VolumeDriver;
friend class XmlMXCAFDoc_DatumDriver;
friend class XmlMXCAFDoc_DimTolDriver;
friend class XmlMXCAFDoc_MaterialDriver;
friend class XmlMXCAFDoc_ColorToolDriver;
friend class XmlMXCAFDoc_DocumentToolDriver;
friend class XmlMXCAFDoc_LayerToolDriver;
friend class XmlMXCAFDoc_ShapeToolDriver;
friend class XmlMXCAFDoc_DimTolToolDriver;
friend class XmlMXCAFDoc_MaterialToolDriver;

};







#endif // _XmlMXCAFDoc_HeaderFile
