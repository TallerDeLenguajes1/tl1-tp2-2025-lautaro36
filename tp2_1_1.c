#include <stdio.h>
#include <stdlib.h>
#define N 20

int main() {
    int i;
    double vt[N];
    for(i=0; i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("[%d]%.2f \n", i+1, vt[i]);
    }
    return 0;
}