// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectBasics_SensitiveEntity_HeaderFile
#define _SelectBasics_SensitiveEntity_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_SelectBasics_SensitiveEntity.hxx>

#include <Handle_SelectBasics_EntityOwner.hxx>
#include <Standard_Integer.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <SelectBasics_SelectingVolumeManager.hxx>
#include <SelectBasics_PickResult.hxx>
#include <Select3D_BndBox3d.hxx>
class SelectBasics_EntityOwner;
class gp_Trsf;


//! root class; the inheriting classes will be able to give
//! sensitive Areas for the dynamic selection algorithms
class SelectBasics_SensitiveEntity : public MMgt_TShared
{

public:

  
  //! Sets owner of the entity
  Standard_EXPORT virtual   void Set (const Handle(SelectBasics_EntityOwner)& theOwnerId) ;
  
  //! Returns pointer to owner of the entity
  Standard_EXPORT  const  Handle(SelectBasics_EntityOwner)& OwnerId()  const;
  
  //! Allows to manage the sensitivity of the entity
  Standard_EXPORT   void SetSensitivityFactor (const Standard_Integer theSensFactor) ;
  
  //! Checks whether the sensitive entity is overlapped by
  //! current selecting volume
  Standard_EXPORT virtual   Standard_Boolean Matches (SelectBasics_SelectingVolumeManager& theMgr, SelectBasics_PickResult& thePickResult)  = 0;
  
  //! allows a better sensitivity for
  //! a specific entity in selection algorithms
  //! useful for small sized entities.
      Standard_Integer SensitivityFactor()  const;
  
  //! Returns the number of sub-entities or elements in
  //! sensitive entity. Is used to determine if entity is
  //! complex and needs to pre-build BVH at the creation of
  //! sensitive entity step or is light-weighted so the tree
  //! can be build on demand with unnoticeable delay
  Standard_EXPORT virtual   Standard_Integer NbSubElements()  = 0;
  
  //! Returns bounding box of sensitive entity
  Standard_EXPORT virtual   Select3D_BndBox3d BoundingBox()  = 0;
  
  //! Builds BVH tree for sensitive if it is needed
  Standard_EXPORT virtual   void BVH()  = 0;
  
  //! Clears up all the resources and memory allocated
  Standard_EXPORT virtual   void Clear()  = 0;
  
  //! Returns true if the shape corresponding to the entity
  //! has init location.
  Standard_EXPORT virtual   Standard_Boolean HasInitLocation()  const = 0;
  
  //! Returns inversed location transformation matrix if the shape corresponding
  //! to this entity has init location set. Otherwise, returns identity matrix.
  Standard_EXPORT virtual   gp_Trsf InvInitLocation()  const = 0;




  DEFINE_STANDARD_RTTI(SelectBasics_SensitiveEntity)

protected:

  
  Standard_EXPORT SelectBasics_SensitiveEntity(const Handle(SelectBasics_EntityOwner)& theOwnerId, const Standard_Integer theSensFactor = 2);

  Handle(SelectBasics_EntityOwner) myOwnerId;


private: 


  Standard_Integer mySFactor;


};


#include <SelectBasics_SensitiveEntity.lxx>





#endif // _SelectBasics_SensitiveEntity_HeaderFile
