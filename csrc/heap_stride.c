// a simple C program accessing heap stridedly
#include "dr.h"
#define ITER 100

int main() {
    DR_START();
    int *a = (int *)malloc(ITER * sizeof(int));
    for (int i = 0; i < ITER; i++) {
        a[i] = i;
    }
    for (int i = 0; i < ITER; i++) {
        a[i] = a[i] + 1;
    }
    DR_END();
    return 0;
}