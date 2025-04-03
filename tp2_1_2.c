#include<stdio.h>
#include<stdlib.h>

#define N 20

int main()
{

int i;
double vt[N];
double *puntero;

puntero = vt;

for(i = 0;i<N; i++)
{
    *(puntero + i)=1+rand()%100;
    printf("%.2f", *(puntero + i));
}

    return 0;
} 