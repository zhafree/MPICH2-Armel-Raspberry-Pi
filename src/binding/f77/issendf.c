/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISSEND( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_issend__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_issend( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_issend_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_ISSEND = PMPI_ISSEND
#pragma weak mpi_issend__ = PMPI_ISSEND
#pragma weak mpi_issend_ = PMPI_ISSEND
#pragma weak mpi_issend = PMPI_ISSEND
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ISSEND = pmpi_issend__
#pragma weak mpi_issend__ = pmpi_issend__
#pragma weak mpi_issend_ = pmpi_issend__
#pragma weak mpi_issend = pmpi_issend__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ISSEND = pmpi_issend_
#pragma weak mpi_issend__ = pmpi_issend_
#pragma weak mpi_issend_ = pmpi_issend_
#pragma weak mpi_issend = pmpi_issend_
#else
#pragma weak MPI_ISSEND = pmpi_issend
#pragma weak mpi_issend__ = pmpi_issend
#pragma weak mpi_issend_ = pmpi_issend
#pragma weak mpi_issend = pmpi_issend
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISSEND( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_ISSEND = PMPI_ISSEND
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_issend__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_issend__ = pmpi_issend__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_issend( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_issend = pmpi_issend
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_issend_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_issend_ = pmpi_issend_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_ISSEND  MPI_ISSEND
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_issend__  mpi_issend__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_issend  mpi_issend
#else
#pragma _HP_SECONDARY_DEF pmpi_issend_  mpi_issend_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_ISSEND as PMPI_ISSEND
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_issend__ as pmpi_issend__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_issend as pmpi_issend
#else
#pragma _CRI duplicate mpi_issend_ as pmpi_issend_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISSEND( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_issend__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_issend( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_issend_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_issend__ = MPI_ISSEND
#pragma weak mpi_issend_ = MPI_ISSEND
#pragma weak mpi_issend = MPI_ISSEND
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ISSEND = mpi_issend__
#pragma weak mpi_issend_ = mpi_issend__
#pragma weak mpi_issend = mpi_issend__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ISSEND = mpi_issend_
#pragma weak mpi_issend__ = mpi_issend_
#pragma weak mpi_issend = mpi_issend_
#else
#pragma weak MPI_ISSEND = mpi_issend
#pragma weak mpi_issend__ = mpi_issend
#pragma weak mpi_issend_ = mpi_issend
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISSEND( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_issend__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_issend_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_issend( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_issend__ = PMPI_ISSEND
#pragma weak pmpi_issend_ = PMPI_ISSEND
#pragma weak pmpi_issend = PMPI_ISSEND
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_ISSEND = pmpi_issend__
#pragma weak pmpi_issend_ = pmpi_issend__
#pragma weak pmpi_issend = pmpi_issend__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_ISSEND = pmpi_issend_
#pragma weak pmpi_issend__ = pmpi_issend_
#pragma weak pmpi_issend = pmpi_issend_
#else
#pragma weak PMPI_ISSEND = pmpi_issend
#pragma weak pmpi_issend__ = pmpi_issend
#pragma weak pmpi_issend_ = pmpi_issend
#endif /* Test on name mapping */
#endif /* Use multiple pragma weak */

#ifdef F77_NAME_UPPER
#define mpi_issend_ PMPI_ISSEND
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_issend_ pmpi_issend__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_issend_ pmpi_issend
#else
#define mpi_issend_ pmpi_issend_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings,
   such as those put in place by the globus device when it is building on
   top of a vendor MPI. */
#undef MPI_Issend
#define MPI_Issend PMPI_Issend 

#else

#ifdef F77_NAME_UPPER
#define mpi_issend_ MPI_ISSEND
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_issend_ mpi_issend__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_issend_ mpi_issend
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_issend_ ( void*v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *ierr ){
    *ierr = MPI_Issend( v1, *v2, (MPI_Datatype)(*v3), *v4, *v5, (MPI_Comm)(*v6), (MPI_Request *)(v7) );
}
