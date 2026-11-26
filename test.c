#include <assert.h>
#include <standardloop/testing.h>
#include <stdio.h>
#include <stdlib.h>

#include "./dynstring.h"

int main(void)
{
    TestingInit();
    TestDynString();
    TestCaseVerify(true, "Test", 1);
    TestingTearDown();
    return EXIT_SUCCESS;
}
