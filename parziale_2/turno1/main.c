#include<stdio.h>
#include<stdlib.h>
#include"radice.h"

float f (float n)
{
    float radicando;
    radicando=(n-1)/(n+1);
    return radice(radicando);
}

int main()
{
    float n1, n2;

    printf("Inserisci due nuemri: ");
    scanf("%f%f", &n1, &n2);
    printf("\n");

    for(int i=n1; i<n2+1; i++)
    {
        if(i%2==0)
        {
            printf("%f\n", f(i));
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

