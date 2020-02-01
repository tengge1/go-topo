// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_DispGlobal_HeaderFile
#define _IFSelect_DispGlobal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IFSelect_DispGlobal.hxx>

#include <IFSelect_Dispatch.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class TCollection_AsciiString;
class Interface_Graph;
class IFGraph_SubPartsIterator;


//! A DispGlobal gathers all the input Entities into only one
//! global Packet
class IFSelect_DispGlobal : public IFSelect_Dispatch
{

public:

  
  //! Creates a DispGlobal
  Standard_EXPORT IFSelect_DispGlobal();
  
  //! Returns as Label, "One File for all Input"
  Standard_EXPORT   TCollection_AsciiString Label()  const;
  
  //! Returns True : maximum equates 1
  Standard_EXPORT virtual   Standard_Boolean LimitedMax (const Standard_Integer nbent, Standard_Integer& max)  const;
  
  //! Returns True (count of packets is well known) and count is 1
  Standard_EXPORT virtual   Standard_Integer PacketsCount (const Interface_Graph& G, Standard_Integer& count)  const;
  
  //! Computes the list of produced Packets. It is made of only ONE
  //! Packet, which gets the RootResult from the Final Selection.
  //! Remark : the inherited exception raising is never activated.
  Standard_EXPORT   void Packets (const Interface_Graph& G, IFGraph_SubPartsIterator& packs)  const;




  DEFINE_STANDARD_RTTI(IFSelect_DispGlobal)

protected:




private: 




};







#endif // _IFSelect_DispGlobal_HeaderFile
