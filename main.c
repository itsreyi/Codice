#include<stdio.h>
#include"radq.h"

int main()
{
    float a;
    printf("numero maggiore di 0: ");
    scanf("%f", &a);
    printf("%f\n", radq(a));
}