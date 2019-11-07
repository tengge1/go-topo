// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ApplicationProtocolDefinition_HeaderFile
#define _StepBasic_ApplicationProtocolDefinition_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ApplicationProtocolDefinition.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Standard_Integer.hxx>
#include <Handle_StepBasic_ApplicationContext.hxx>
#include <MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepBasic_ApplicationContext;



class StepBasic_ApplicationProtocolDefinition : public MMgt_TShared
{

public:

  
  //! Returns a ApplicationProtocolDefinition
  Standard_EXPORT StepBasic_ApplicationProtocolDefinition();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aStatus, const Handle(TCollection_HAsciiString)& aApplicationInterpretedModelSchemaName, const Standard_Integer aApplicationProtocolYear, const Handle(StepBasic_ApplicationContext)& aApplication) ;
  
  Standard_EXPORT   void SetStatus (const Handle(TCollection_HAsciiString)& aStatus) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Status()  const;
  
  Standard_EXPORT   void SetApplicationInterpretedModelSchemaName (const Handle(TCollection_HAsciiString)& aApplicationInterpretedModelSchemaName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) ApplicationInterpretedModelSchemaName()  const;
  
  Standard_EXPORT   void SetApplicationProtocolYear (const Standard_Integer aApplicationProtocolYear) ;
  
  Standard_EXPORT   Standard_Integer ApplicationProtocolYear()  const;
  
  Standard_EXPORT   void SetApplication (const Handle(StepBasic_ApplicationContext)& aApplication) ;
  
  Standard_EXPORT   Handle(StepBasic_ApplicationContext) Application()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ApplicationProtocolDefinition)

protected:




private: 


  Handle(TCollection_HAsciiString) status;
  Handle(TCollection_HAsciiString) applicationInterpretedModelSchemaName;
  Standard_Integer applicationProtocolYear;
  Handle(StepBasic_ApplicationContext) application;


};







#endif // _StepBasic_ApplicationProtocolDefinition_HeaderFile
