// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_Product_HeaderFile
#define _Expr_Product_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Expr_Product.hxx>

#include <Expr_PolyExpression.hxx>
#include <Handle_Expr_GeneralExpression.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Expr_NamedUnknown.hxx>
#include <Standard_Real.hxx>
class Standard_NumericError;
class Expr_NotEvaluable;
class Expr_SequenceOfGeneralExpression;
class Expr_GeneralExpression;
class Expr_NamedUnknown;
class Expr_Array1OfNamedUnknown;
class TColStd_Array1OfReal;
class TCollection_AsciiString;



class Expr_Product : public Expr_PolyExpression
{

public:

  
  //! Creates the product of all members of sequence <exps>
  Standard_EXPORT Expr_Product(const Expr_SequenceOfGeneralExpression& exps);
  
  //! Creates the product of <exp1> and <exp2>.
  Standard_EXPORT Expr_Product(const Handle(Expr_GeneralExpression)& exp1, const Handle(Expr_GeneralExpression)& exp2);
  
  //! Returns a GeneralExpression after a simplification
  //! of the arguments of <me>.
  Standard_EXPORT   Handle(Expr_GeneralExpression) ShallowSimplified()  const;
  
  //! Returns a copy of <me> having the same unknowns and functions.
  Standard_EXPORT   Handle(Expr_GeneralExpression) Copy()  const;
  
  //! Tests if <me> and <Other> define the same expression.
  //! This method does not include any simplification before
  //! testing.
  Standard_EXPORT   Standard_Boolean IsIdentical (const Handle(Expr_GeneralExpression)& Other)  const;
  
  Standard_EXPORT   Standard_Boolean IsLinear()  const;
  
  //! Returns the derivative on <X> unknown of <me>
  Standard_EXPORT   Handle(Expr_GeneralExpression) Derivative (const Handle(Expr_NamedUnknown)& X)  const;
  
  //! Returns the value of <me> (as a Real) by
  //! replacement of <vars> by <vals>.
  //! Raises NotEvaluable if <me> contains NamedUnknown not
  //! in <vars> or NumericError if result cannot be computed.
  Standard_EXPORT   Standard_Real Evaluate (const Expr_Array1OfNamedUnknown& vars, const TColStd_Array1OfReal& vals)  const;
  
  //! returns a string representing <me> in a readable way.
  Standard_EXPORT   TCollection_AsciiString String()  const;




  DEFINE_STANDARD_RTTI(Expr_Product)

protected:




private: 




};







#endif // _Expr_Product_HeaderFile
