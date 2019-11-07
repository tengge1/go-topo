// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ApplicationContext_HeaderFile
#define _StepBasic_ApplicationContext_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ApplicationContext.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <MMgt_TShared.hxx>
class TCollection_HAsciiString;



class StepBasic_ApplicationContext : public MMgt_TShared
{

public:

  
  //! Returns a ApplicationContext
  Standard_EXPORT StepBasic_ApplicationContext();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aApplication) ;
  
  Standard_EXPORT   void SetApplication (const Handle(TCollection_HAsciiString)& aApplication) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Application()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ApplicationContext)

protected:




private: 


  Handle(TCollection_HAsciiString) application;


};







#endif // _StepBasic_ApplicationContext_HeaderFile
