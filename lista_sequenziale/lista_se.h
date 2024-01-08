#include <stdio.h>
#include <stdlib.h>

#define DimF 50

typedef struct
{
    int DimL;
    int dato[DimF];
} Lista;

void nuovaLista(Lista *pl);
int piena(Lista l);
int vuota(Lista l);
void insOrd(Lista *pl, int num);
void stampaLista(Lista *pl);
