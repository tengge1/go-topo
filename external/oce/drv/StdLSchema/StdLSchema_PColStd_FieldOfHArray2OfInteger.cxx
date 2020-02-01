#ifndef _StdLSchema_PColStd_FieldOfHArray2OfInteger_HeaderFile
#include <StdLSchema_PColStd_FieldOfHArray2OfInteger.hxx>
#endif
#ifndef _PColStd_FieldOfHArray2OfInteger_HeaderFile
#include <PColStd_FieldOfHArray2OfInteger.hxx>
#endif
#include <StdLSchema_PColStd_FieldOfHArray2OfInteger.ixx>
#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Storage_stCONSTclCOM.hxx>
#endif

void StdLSchema_PColStd_FieldOfHArray2OfInteger::SWrite(const PColStd_FieldOfHArray2OfInteger& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg

  f.BeginWriteObjectData();
  f.PutInteger(pp.Length());
  for (Standard_Integer i = 0; i < pp.Length(); i++) {
    f.PutInteger(pp.Value(i));

  }
  f.EndWriteObjectData();
}

void StdLSchema_PColStd_FieldOfHArray2OfInteger::SRead(PColStd_FieldOfHArray2OfInteger& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg
  Standard_Integer size = 0;

  f.BeginReadObjectData();
  f.GetInteger(size);
  pp.Resize(size);

  for (Standard_Integer j = 0; j < size; j++) {
    Standard_Integer par;

    f.GetInteger(par);
    pp.SetValue(j,par);

  }
  f.EndReadObjectData();
}
