#include <assert.h>
#include <stdio.h>
#include "lab1.h"

int main() {
    assert(remaining_kopecks(10, 50, 3) == 50);
    assert(remaining_kopecks(5, 20, 4) == 80);
    assert(remaining_kopecks(7, 25, 4) == 0);

    printf("Task 1: all tests passed!\n");

    return 0;
}
