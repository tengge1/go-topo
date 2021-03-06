// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XDEDRAW_HeaderFile
#define _XDEDRAW_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Draw_Interpretor.hxx>
class XDEDRAW_Shapes;
class XDEDRAW_Colors;
class XDEDRAW_Layers;
class XDEDRAW_Props;
class XDEDRAW_Common;


//! Provides DRAW commands for work with DECAF data structures
class XDEDRAW 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Provides common commands for work XDE
  //! Initializes all the functions
  Standard_EXPORT static   void Init (Draw_Interpretor& di) ;
  
  //! Loads all Draw commands of  TKXDEDRAW. Used for plugin.
  Standard_EXPORT static   void Factory (Draw_Interpretor& theDI) ;




protected:





private:




friend class XDEDRAW_Shapes;
friend class XDEDRAW_Colors;
friend class XDEDRAW_Layers;
friend class XDEDRAW_Props;
friend class XDEDRAW_Common;

};







#endif // _XDEDRAW_HeaderFile
