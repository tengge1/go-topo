// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_HeaderFile
#define _MDF_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_TDF_Data.hxx>
#include <Handle_PDF_Data.hxx>
#include <Handle_MDF_ASDriverTable.hxx>
#include <Handle_MDF_SRelocationTable.hxx>
#include <Standard_Integer.hxx>
#include <Handle_MDF_ARDriverTable.hxx>
#include <Handle_MDF_RRelocationTable.hxx>
#include <Handle_MDF_ASDriverHSequence.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_MDF_ARDriverHSequence.hxx>
class TDF_Data;
class PDF_Data;
class MDF_ASDriverTable;
class MDF_SRelocationTable;
class MDF_ARDriverTable;
class MDF_RRelocationTable;
class MDF_ASDriverHSequence;
class CDM_MessageDriver;
class MDF_ARDriverHSequence;
class MDF_ASDriver;
class MDF_ARDriver;
class MDF_RelocationTable;
class MDF_DriverTable;
class MDF_DriverList;
class MDF_TypeDriverListMap;
class MDF_Tool;
class MDF_TagSourceStorageDriver;
class MDF_TagSourceRetrievalDriver;
class MDF_ReferenceStorageDriver;
class MDF_ReferenceRetrievalDriver;
class MDF_ASDriverSequence;
class MDF_ASDriverHSequence;
class MDF_ARDriverSequence;
class MDF_ARDriverHSequence;
class MDF_SRelocationTable;
class MDF_RRelocationTable;
class MDF_TypeASDriverMap;
class MDF_TypeARDriverMap;
class MDF_ASDriverTable;
class MDF_ARDriverTable;
class MDF_SequenceNodeOfASDriverSequence;
class MDF_SequenceNodeOfARDriverSequence;
class MDF_DataMapNodeOfTypeASDriverMap;
class MDF_DataMapIteratorOfTypeASDriverMap;
class MDF_DataMapNodeOfTypeARDriverMap;
class MDF_DataMapIteratorOfTypeARDriverMap;
class MDF_ListNodeOfDriverListOfASDriverTable;
class MDF_ListIteratorOfDriverListOfASDriverTable;
class MDF_DriverListOfASDriverTable;
class MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable;
class MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable;
class MDF_TypeDriverListMapOfASDriverTable;
class MDF_ListNodeOfDriverListOfARDriverTable;
class MDF_ListIteratorOfDriverListOfARDriverTable;
class MDF_DriverListOfARDriverTable;
class MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable;
class MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable;
class MDF_TypeDriverListMapOfARDriverTable;


//! This package provides classes and methods to
//! translate a transient DF into a persistent one and
//! vice versa.
//!
//! Driver
//!
//! A driver is a tool used to translate a transient
//! attribute into a persistent one and vice versa.
//!
//! Relocation Table
//!
//! A relocation table is a tool who provides services
//! to relocate transient objects into persistent ones
//! (or vice versa). It uses a map system to keep the
//! sharing. This service is used by the drivers.
//!
//! Driver Table
//!
//! A driver table is an object building links between
//! object types and object drivers. In the
//! translation process, a driver table is asked to
//! give a translation driver for each current object
//! to be translated.
class MDF 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Translates a transient <aSource> into a persistent
  //! <aTarget>.
  Standard_EXPORT static   void FromTo (const Handle(TDF_Data)& aSource, Handle(PDF_Data)& aTarget, const Handle(MDF_ASDriverTable)& aDriverTable, const Handle(MDF_SRelocationTable)& aReloc, const Standard_Integer aVersion = 0) ;
  
  //! Translates a persistent <aSource> into a transient
  //! <aTarget>.
  Standard_EXPORT static   void FromTo (const Handle(PDF_Data)& aSource, Handle(TDF_Data)& aTarget, const Handle(MDF_ARDriverTable)& aDriverTable, const Handle(MDF_RRelocationTable)& aReloc) ;
  
  //! Adds the attribute storage drivers to <aDriverSeq>.
  Standard_EXPORT static   void AddStorageDrivers (const Handle(MDF_ASDriverHSequence)& aDriverSeq, const Handle(CDM_MessageDriver)& theMessageDriver) ;
  
  //! Adds the attribute retrieval drivers to <aDriverSeq>.
  Standard_EXPORT static   void AddRetrievalDrivers (const Handle(MDF_ARDriverHSequence)& aDriverSeq, const Handle(CDM_MessageDriver)& theMessageDriver) ;




protected:





private:




friend class MDF_ASDriver;
friend class MDF_ARDriver;
friend class MDF_RelocationTable;
friend class MDF_DriverTable;
friend class MDF_DriverList;
friend class MDF_TypeDriverListMap;
friend class MDF_Tool;
friend class MDF_TagSourceStorageDriver;
friend class MDF_TagSourceRetrievalDriver;
friend class MDF_ReferenceStorageDriver;
friend class MDF_ReferenceRetrievalDriver;
friend class MDF_ASDriverSequence;
friend class MDF_ASDriverHSequence;
friend class MDF_ARDriverSequence;
friend class MDF_ARDriverHSequence;
friend class MDF_SRelocationTable;
friend class MDF_RRelocationTable;
friend class MDF_TypeASDriverMap;
friend class MDF_TypeARDriverMap;
friend class MDF_ASDriverTable;
friend class MDF_ARDriverTable;
friend class MDF_SequenceNodeOfASDriverSequence;
friend class MDF_SequenceNodeOfARDriverSequence;
friend class MDF_DataMapNodeOfTypeASDriverMap;
friend class MDF_DataMapIteratorOfTypeASDriverMap;
friend class MDF_DataMapNodeOfTypeARDriverMap;
friend class MDF_DataMapIteratorOfTypeARDriverMap;
friend class MDF_ListNodeOfDriverListOfASDriverTable;
friend class MDF_ListIteratorOfDriverListOfASDriverTable;
friend class MDF_DriverListOfASDriverTable;
friend class MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable;
friend class MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable;
friend class MDF_TypeDriverListMapOfASDriverTable;
friend class MDF_ListNodeOfDriverListOfARDriverTable;
friend class MDF_ListIteratorOfDriverListOfARDriverTable;
friend class MDF_DriverListOfARDriverTable;
friend class MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable;
friend class MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable;
friend class MDF_TypeDriverListMapOfARDriverTable;

};







#endif // _MDF_HeaderFile
