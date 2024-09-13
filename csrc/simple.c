// a simple C program accessing stack
#include "dr.h"

int main() {
    DR_START();
    int a = 10;
    int b = 20;
    a = a + b;
    DR_END();
    return 0;
}