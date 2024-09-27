#include <stdio.h>
#include <time.h>
#include "randlib.h"

int main () {

    int seed = RandSeed();

    printf("%ld",seed);
    return 0;
}