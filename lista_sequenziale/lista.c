#include <stdlib.h>
#include <stdio.h>

typedef struct nodo
{
    int dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void newNodo(Lista l, int dato)
{
    Lista nuovoNodo = malloc(sizeof(Lista));

    nuovoNodo->dato = dato;
    nuovoNodo->next = NULL;

    if (l == NULL)
    {
        // lista vuota mettere come primo nodo
        l = nuovoNodo;
    }
    else
    {
        // trova l ultimo nodo
        Lista corrente = l;
        while (corrente->next)
        {
            corrente = corrente->next;
        }

        corrente->next = nuovoNodo;
    }
}

void printNodo(Lista l)
{
    while (l != NULL)
    {
        printf("%d\n", l->dato);
        l = l->next;
    }
}

int main()
{
    Lista l = NULL;

    newNodo(&l, 1);
    newNodo(&l, 2);
    newNodo(&l, 3);
    newNodo(&l, 4);
    newNodo(&l, 5);

    printNodo(l);

    // Free the allocated memory
    Nodo *corrente = l;
    Nodo *prossimo;
    while (corrente != NULL)
    {
        prossimo = corrente->next;
        free(corrente);
        corrente = prossimo;
    }
    return 0;
}