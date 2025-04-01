#include <stdio.h>
#include <stdlib.h>
#define N 20

int main() {
    int i;
    double vt[N]; //*p_arreglo=vt;
    for(i=0; i<N; i++)
    {
        *(vt+i)=1+rand()%100;
        printf("[%d]%.2f \n", i+1, *(vt+i));
    }
    /*
    for(i=0; i<5; i++) {
        printf("[%d(2)]%.2f \n", i+1, *(p_arreglo+i));
    } probando la misma aritmetica con un puntero que apunta a vt

    for(i=0; i<5; i++) {
        printf("[%d(3)]%.2f \n", i+1, *p_arreglo);
        p_arreglo++;
    } moviendo fisicamente el puntero pero haciendo lo mismo que la version anterior

    for(i=0; i<5; i++) {
        printf("[%d(4)]%.2f \n", i+1, *(p_arreglo+i));
    } probando aritmetica indexada pero despues de haber movido fisicamente el puntero (muestra lo q hay despues de [4])
        */
    return 0;

    
}