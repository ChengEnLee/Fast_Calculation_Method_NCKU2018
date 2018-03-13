#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

    int a, b, c, d;
    double e;
    a = 0;
    b = 1;
    c = 1;

    printf("Starting addition!! \n");
    //Compute addition
    double t1 = clock();
    for(int i=0; i<100000000; i++){
        a += i;
    }
    double t2 = clock();
    printf("Addition result : %d\n", a);
    printf("Elapsed time : %f (s)\n", (t2 - t1)/CLOCKS_PER_SEC);

    //Compute multiplication
    printf("-----------------------------\n");
    printf("Starting multiplication!! \n");
    double t3 = clock();
    for(int i=0; i<100000000; i++){
       d = b * c;
    }
    double t4 = clock();
    printf("Elapsed time : %f (s)\n", (t4 - t3)/CLOCKS_PER_SEC);

    //Compute sin(x)
    printf("-----------------------------\n");
    printf("Starting to compute sin(x)\n");
    double t5 = clock();
    for(int i=0; i <100000000; i++){
        e = sin(i);
    }
    double t6 = clock();
    printf("Result : %f", e);
    printf("Elapsed time : %f (s)\n", (t6 - t5)/CLOCKS_PER_SEC);

    printf("End of HW1. \n");

    return 0;

}
