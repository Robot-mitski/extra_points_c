#include <assert.h>
#include <stdio.h>
#include "lab1.h"

int main() {
    assert(apples_left(3, 10) == 1);
    assert(apples_left(5, 20) == 0);
    assert(apples_left(4, 17) == 1);

    printf("Task 2: all tests passed!\n");
    return 0;
}