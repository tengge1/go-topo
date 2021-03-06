// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_SparseMatrix_HeaderFile
#define _FEmTool_SparseMatrix_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_FEmTool_SparseMatrix.hxx>

#include <MMgt_TShared.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <math_Vector.hxx>
class StdFail_NotDone;


//! Sparse Matrix definition
class FEmTool_SparseMatrix : public MMgt_TShared
{

public:

  
  Standard_EXPORT virtual   void Init (const Standard_Real Value)  = 0;
  
  Standard_EXPORT virtual   Standard_Real& ChangeValue (const Standard_Integer I, const Standard_Integer J)  = 0;
  
  //! To make a Factorization of <me>
  Standard_EXPORT virtual   Standard_Boolean Decompose()  = 0;
  
  //! Direct Solve of AX = B
  Standard_EXPORT virtual   void Solve (const math_Vector& B, math_Vector& X)  const = 0;
  
  //! Make Preparation to iterative solve
  Standard_EXPORT virtual   Standard_Boolean Prepare()  = 0;
  
  //! Iterative solve  of AX = B
  Standard_EXPORT virtual   void Solve (const math_Vector& B, const math_Vector& Init, math_Vector& X, math_Vector& Residual, const Standard_Real Tolerance = 1.0e-8, const Standard_Integer NbIterations = 50)  const = 0;
  
  //! returns the product of a SparseMatrix by a vector.
  //! An exception is raised if the dimensions are different
  Standard_EXPORT virtual   void Multiplied (const math_Vector& X, math_Vector& MX)  const = 0;
  
  //! returns the row range of a matrix.
  Standard_EXPORT virtual   Standard_Integer RowNumber()  const = 0;
  
  //! returns the column range of the matrix.
  Standard_EXPORT virtual   Standard_Integer ColNumber()  const = 0;




  DEFINE_STANDARD_RTTI(FEmTool_SparseMatrix)

protected:




private: 




};







#endif // _FEmTool_SparseMatrix_HeaderFile
