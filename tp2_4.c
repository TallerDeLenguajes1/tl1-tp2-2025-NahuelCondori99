#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct compu 
{
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)

}typedef computadora;

void listarPCs(struct compu pc[], int cantidad);

int main()
{
    srand(time(NULL));

    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
        
    computadora PC[5];

    for (int i = 0; i < 5; i++)
    {
        PC[i].velocidad = 1 + rand() % (3 - 1 + 1);
        PC[i].anio = 2015  + rand() % (2024 - 2015 + 1);
        PC[i].cantidad_nucleos = 1 + rand() % (8 - 1 + 1);
        PC[i].tipo_cpu = tipos[rand() % (6)];
    }

    listarPCs(PC, 5);

    return 0;
}

void listarPCs(struct compu pc[], int cantidad)
{
    printf("---Listado de las PCs---\n");

    for (int i = 0; i < 5; i++)
    {
        printf("PC numero: %d\n",i);
        printf("-Anio: %d\n",pc[i].anio);
        printf("-Velocidad: %d\n",pc[i].velocidad);
        printf("-Cantidad de nucleos: %d\n",pc[i].cantidad_nucleos);
        printf("Tipo de procesador: %s\n",pc[i].tipo_cpu);

        printf("\n");
    }
    
}

    