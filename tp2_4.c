#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 20

struct {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
   }typedef compu;

void velocidadAnioNucleos (compu *pcs);

int main() {
    compu arregloCompus[5];
    velocidadAnioNucleos(arregloCompus);

    return 0;
}

void velocidadAnioNucleos (compu *pcs) {
    for (int i=0; i<5; i++) {
     (pcs+i)->velocidad = rand() %3 + 1;
     (pcs+i)->anio = rand() %10 + 2015;
     (pcs+i)->cantidad_nucleos = rand() %8 + 1 ;
     printf("computadora %d, velocidad:%d, anio:%d, nucleos%d. \n", i+1, (pcs+i)->velocidad, (pcs+i)->anio, (pcs+i)->cantidad_nucleos);
    }
}