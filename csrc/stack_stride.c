// a simple C program accessing stack stridedly
#include "dr.h"
#define ITER 100

int main() {
    DR_START();
    int a[ITER];
    // set values
    for (int i = 0; i < ITER; i++) {
        a[i] = i;
    }
    // access values
    for (int i = 0; i < ITER; i++) {
        a[i] = a[i] + 1;
    }
    DR_END();
    return 0;
}