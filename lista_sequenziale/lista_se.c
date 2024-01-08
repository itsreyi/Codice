#include <stdio.h>
#include <stdlib.h>

#define DimF 50

typedef struct
{
    int DimL;
    int dato[DimF];
} Lista;

void nuovaLista(Lista *pl)
{
    pl->DimL = 0;
}

int piena(Lista l)
{
    return l.DimL == DimF;
}

int vuota(Lista l)
{
    return l.DimL == 0;
}

void insOrd(Lista *pl, int num)
{
    int i;
    if (piena(*pl))
    {
        printf(" Errore : lista piena \n ");
        exit(-1);
    }

    i = pl->DimL;
    while (i > 0 && pl->dato[i - 1] > num)
    {
        pl->dato[i] = pl->dato[i - 1];
        i--;
    }

    pl->dato[i] = num;
    pl->DimL++;
}

void stampaLista(Lista *pl)
{
    for(int i=0; i<pl->DimL; i++)
    {
        printf("%d. %d\n", i, pl->dato[i]);
    }
}
