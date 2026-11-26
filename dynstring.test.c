#include "./dynstring.h"

extern void TestDynString()
{
    DynString *test = DynStringDefaultInit();
    DynStringAddCharAt(test, 0, 'a');
    DynStringAddCharAt(test, 1, 'b');
    DynStringAddCharAt(test, 2, 'b');
    DynStringAddCharAt(test, 3, 'b');
    DynStringAddCharAt(test, 4, 'b');
    DynStringAddCharAt(test, 5, 'b');
    DynStringAddCharAt(test, 6, 'b');

    DynStringAddCharAt(test, 7, ' ');
    DynStringPrint(test);
    printf("\n");
    DynStringTrimEnd(test);
    DynStringPrint(test);
    printf("\n");

    DynStringShiftLeft(test, 3);
    DynStringPrint(test);
    printf("\n");

    DynStringFree(test);
}
