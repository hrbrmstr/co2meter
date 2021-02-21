#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

extern SEXP int_close_dev();
extern SEXP int_get_readings();
extern SEXP int_init_dev();

static const R_CallMethodDef CallEntries[] = {
  {"int_close_dev",    (DL_FUNC) &int_close_dev,    0},
  {"int_get_readings", (DL_FUNC) &int_get_readings, 0},
  {"int_init_dev",     (DL_FUNC) &int_init_dev,     0},
  {NULL, NULL, 0}
};

void R_init_co2(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}