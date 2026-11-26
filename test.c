#include <assert.h>
#include <standardloop/testing.h>
#include <stdio.h>
#include <stdlib.h>

#include "./todo.h"

int main(void)
{
    TestingInit();
    TestTodo();
    TestCaseVerify(true, "Test", 1);
    TestingTearDown();
    return EXIT_SUCCESS;
}
