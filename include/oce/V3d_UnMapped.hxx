// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_UnMapped_HeaderFile
#define _V3d_UnMapped_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_DomainError.hxx>
#include <Handle_V3d_UnMapped.hxx>

#if !defined No_Exception && !defined No_V3d_UnMapped
  #define V3d_UnMapped_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) V3d_UnMapped::Raise(MESSAGE);
#else
  #define V3d_UnMapped_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(V3d_UnMapped, Standard_DomainError)

#endif // _V3d_UnMapped_HeaderFile
