// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepSweep_Builder_HeaderFile
#define _BRepSweep_Builder_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BRep_Builder.hxx>
#include <TopAbs_Orientation.hxx>
class BRep_Builder;
class TopoDS_Shape;


//! implements the abstract Builder with the BRep Builder
class BRepSweep_Builder 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates a Builder.
  Standard_EXPORT BRepSweep_Builder(const BRep_Builder& aBuilder);
  
     const  BRep_Builder& Builder()  const;
  
  //! Returns an empty Compound.
  Standard_EXPORT   void MakeCompound (TopoDS_Shape& aCompound)  const;
  
  //! Returns an empty CompSolid.
  Standard_EXPORT   void MakeCompSolid (TopoDS_Shape& aCompSolid)  const;
  
  //! Returns an empty Solid.
  Standard_EXPORT   void MakeSolid (TopoDS_Shape& aSolid)  const;
  
  //! Returns an empty Shell.
  Standard_EXPORT   void MakeShell (TopoDS_Shape& aShell)  const;
  
  //! Returns an empty Wire.
  Standard_EXPORT   void MakeWire (TopoDS_Shape& aWire)  const;
  
  //! Adds the Shape 1 in the Shape 2, set to
  //! <Orient> orientation.
  Standard_EXPORT   void Add (TopoDS_Shape& aShape1, const TopoDS_Shape& aShape2, const TopAbs_Orientation Orient)  const;
  
  //! Adds the Shape 1 in the Shape 2.
  Standard_EXPORT   void Add (TopoDS_Shape& aShape1, const TopoDS_Shape& aShape2)  const;




protected:





private:



  BRep_Builder myBuilder;


};


#include <BRepSweep_Builder.lxx>





#endif // _BRepSweep_Builder_HeaderFile