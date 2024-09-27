#include <stdio.h>
#include <time.h>
#include "randlib.h"


/* functions */

// int InitRand(){
//  // skipped dont know how to do 
// }


// Generate Seed
int RandSeed(){
    time_t seconds;
    seconds = time(NULL);
    int hours = seconds/3600;
    int minutes = seconds/60;

    clock_t start_time = clock();

    for (long i = 0; i < 100000000; i++);

    clock_t end_time = clock();
    double elapsed_seconds = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    int miliseconds = (int)(elapsed_seconds * 1000);

    int seed = (int)(miliseconds ^ (miliseconds >> 4) * hours ^ minutes);

    if(seed % 2){
        seed = seed * 32 / 3;
    }

    return seed;
}