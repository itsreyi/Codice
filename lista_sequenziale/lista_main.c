#include <stdio.h>
#include <stdlib.h>
#include<lista_se.h>

#define DimF 50

int main()
{
    Lista l;

    nuovaLista(&l);

    int num;

    do
    {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        printf("\n");
        if(num==0 || num<0)
        {
            break;
        }

        insOrd(&l, num);

    } while(1);

    stampaLista(&l);

    return 0;


}