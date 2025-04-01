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
//void elijoCpu (compu *pcs, char *nombresCpu[6]);
void listarPCs(compu *pcs, int cantidad);
void mostrarMasVieja(compu *pcs, int cantidad);

int main() {
    int cantidad=5;
    compu arregloCompus[5];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    velocidadAnioNucleos(arregloCompus);
    //elijoCpu(arregloCompus, tipos);
    listarPCs(arregloCompus, cantidad);
    mostrarMasVieja(arregloCompus, cantidad);


    return 0;
}

void velocidadAnioNucleos (compu *pcs) {
    for (int i=0; i<5; i++) {
     (pcs+i)->velocidad = rand() %3 + 1;
     (pcs+i)->anio = rand() %10 + 2015;
     (pcs+i)->cantidad_nucleos = rand() %8 + 1 ;
    }
}

/*void elijoCpu (compu *pcs, char *nombresCpu[6]) {
    int numRand;
    for (int i=0; i<6; i++) {
        numRand = rand() %6 + 1;
        (pcs+i)->tipo_cpu = nombresCpu[numRand];
        puts((pcs+i)->tipo_cpu);
    }
}
    */

void listarPCs(compu *pcs, int cantidad) {
    for (int i=0; i<cantidad; i++) {
        printf("Computadora %d: velocidad:%d \t anio:%d\t nucleos%d. \n", i+1, (pcs+i)->velocidad, (pcs+i)->anio, (pcs+i)->cantidad_nucleos);
       }
}

void mostrarMasVieja(compu *pcs, int cantidad) {
    int i=0, anio = pcs->anio, pcVieja;
    for (i=0; i<cantidad; i++) {
        if(anio > (pcs+i)->anio) {
            anio = (pcs+i)->anio;
            pcVieja=i;
        }
    }
    printf("La pc mas vieja tiene:\nvelocidad:%d\tanio:%d\tnucleos%d. ", (pcs+pcVieja)->velocidad, (pcs+pcVieja)->anio, (pcs+pcVieja)->cantidad_nucleos);
}