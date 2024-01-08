#include <stdio.h>
#include <stdlib.h>

#define MAX_SOSTE 100

typedef struct
{
    char targa[8];
    float durata_sosta;
} Sosta;

int main(int argc, char *argv[])
{
    FILE *pf;
    Sosta soste[MAX_SOSTE];
    int i = 0;

    if (argc < 2)
    {
        printf("[!] Errore Apertura FILE [!]\n");
        printf("Uso ./fatture <file.dat>\n");

        exit(1);
    }

    pf = fopen(argv[1], "rb");
    if (pf == NULL)
    {
        printf("[!] Errore Apertura FILE [!]\n");
        exit(2);
    }

    while (fread(&soste[i], sizeof(Sosta), 1, pf) == 1 && i < MAX_SOSTE)
    {
        i++;
    }

    if (fclose(pf))
    {
        printf("[!] Errore Chiusura FILE [!]\n");
        exit(3);
    }

    for (int j = 0; j < i; j++)
    {
        printf("Targa: %s, Durata Sosta: %f\n", soste[j].targa, soste[j].durata_sosta);
    }
}
