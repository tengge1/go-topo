// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_Logbook_HeaderFile
#define _TFunction_Logbook_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TDF_LabelMap.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_OStream.hxx>
class TDF_Label;
class TDF_LabelMap;


//! This class contains information which is written and
//! read during the solving process. Information is divided
//! in three groups.
//!
//! * Touched Labels  (modified by the end user),
//! * Impacted Labels (modified during execution of the function),
//! * Valid Labels    (within the valid label scope).
class TFunction_Logbook 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! next methods are solving declaration
  //! ===================================
  Standard_EXPORT TFunction_Logbook();
  
  //! Clears this logbook to its default, empty state.
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   Standard_Boolean IsEmpty()  const;
  
  //! Sets the label L as a touched label in this logbook.
  //! In other words, L is understood to have been modified by the end user.
      void SetTouched (const TDF_Label& L) ;
  
  //! Sets the label L as an impacted label in this logbook.
  //! This method is called by execution of the function driver.
  Standard_EXPORT   void SetImpacted (const TDF_Label& L, const Standard_Boolean WithChildren = Standard_False) ;
  
  //! Sets the label L as a valid label in this logbook.
  Standard_EXPORT   void SetValid (const TDF_Label& L, const Standard_Boolean WithChildren = Standard_False) ;
  
      TDF_LabelMap& ChangeValid() ;
  
  //! Returns True if the label L is touched  or impacted. This method
  //! is called by <TFunction_FunctionDriver::MustExecute>.
  //! If <WithChildren> is set to true, the method checks
  //! all the sublabels of <L> too.
  //! next method to consult solving result
  //! =====================================
  Standard_EXPORT   Standard_Boolean IsModified (const TDF_Label& L, const Standard_Boolean WithChildren = Standard_False)  const;
  

  //! Returns the map of touched labels in this logbook.
  //! A touched label is the one modified by the end user.
     const  TDF_LabelMap& GetTouched()  const;
  

  //! Returns the map of impacted labels contained in this logbook.
     const  TDF_LabelMap& GetImpacted()  const;
  
  //! Returns the map of valid labels in this logbook.
     const  TDF_LabelMap& GetValid()  const;
  
  //! Sets if the execution failed
      void Done (const Standard_Boolean status) ;
  
      Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   Standard_OStream& Dump (Standard_OStream& stream)  const;




protected:





private:



  TDF_LabelMap myTouched;
  TDF_LabelMap myImpacted;
  TDF_LabelMap myValid;
  Standard_Boolean isDone;


};


#include <TFunction_Logbook.lxx>





#endif // _TFunction_Logbook_HeaderFile
