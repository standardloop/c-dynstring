/**
 * @file dynstring.h
 * @headerfile dynstring.h <standardloop/dynstring.h>
 * @brief A C library for dynamic strings.
 */

#ifndef STANDARDLOOP_DYNSTRING_H
#define STANDARDLOOP_DYNSTRING_H

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *value;
    size_t size;
    // size_t chars;
    // size_t cur_idx;
} DynString;

extern char *DynStringToCString(DynString *str);
extern void DynStringFree(DynString *str);
extern void DynStringPrint(DynString *str);
extern void DynStringAddCharAt(DynString *str, size_t idx, char c);
extern void DynStringTrimEnd(DynString *str);
extern void DynStringShiftLeft(DynString *str, size_t index);
extern DynString *DynStringDefaultInit();

/// @cond INTERNAL
extern void TestDynString(void);
/// @endcond

#endif
