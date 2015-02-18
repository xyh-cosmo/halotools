//
// countpairs_ispc.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#ifndef ISPC_COUNTPAIRS_ISPC_H
#define ISPC_COUNTPAIRS_ISPC_H

#include <stdint.h>



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus

///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && !defined(__ISPC_NO_EXTERN_C)
extern "C" {
#endif // __cplusplus
    extern void compute_distances_two_cells(const int32_t N1, const double * x1, const double * y1, const double * z1, const int32_t N2, const double * x2, const double * y2, const double * z2, const int32_t Nbins, const double * rupp_sqr, uint32_t * npairs);
#if defined(__cplusplus) && !defined(__ISPC_NO_EXTERN_C)
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus

#endif // ISPC_COUNTPAIRS_ISPC_H