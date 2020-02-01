// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_LabelMapHasher_HeaderFile
#define _TDF_LabelMapHasher_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class TDF_Label;


//! A label hasher for label maps.
class TDF_LabelMapHasher 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a HasCode value  for  the  Key <K>  in the
  //! range 0..Upper.
    static   Standard_Integer HashCode (const TDF_Label& aLab, const Standard_Integer Upper) ;
  
  //! Returns True  when the two  keys are the same. Two
  //! same  keys  must   have  the  same  hashcode,  the
  //! contrary is not necessary.
    static   Standard_Boolean IsEqual (const TDF_Label& aLab1, const TDF_Label& aLab2) ;




protected:





private:





};


#include <TDF_LabelMapHasher.lxx>





#endif // _TDF_LabelMapHasher_HeaderFile
