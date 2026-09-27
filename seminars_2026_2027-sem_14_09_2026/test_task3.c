#include <assert.h>
#include <stdio.h>
#include "lab1.h"

int main() {
    assert(full_kilometers(1500) == 1);
    assert(full_kilometers(999) == 0);
    assert(full_kilometers(3200) == 3);

    printf("Task 3: all tests passed!\n");
    return 0;
}
