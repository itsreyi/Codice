#include <stdlib.h>
#include <stdio.h>

int main()
{
    int dimensione;
    int *p;
    int i;

    printf("Elemnti: ");
    scanf("%d", &dimensione);

    p = (int *)malloc(dimensione * sizeof(int));

    if (p == NULL)
    {
        printf("Errore allocazione memoria\n");
        exit(1);
    }

    for (i = 0; i < dimensione; i++)
    {
        p[i] = i;
    }

    for (i = 0; i < dimensione; i++)
    {
        printf("Array: %d\n", *(p + i));
    }

    free(p);
    p = NULL;

    return 0;
}