#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    char targa[8];
    float durata_sosta;
    struct Node* next;
} Node;

Node* createNode(char* targa, float durata_sosta) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("[!] Errore di allocazione memoria [!]\n");
        exit(2);
    }
    strncpy(newNode->targa, targa, 8);
    newNode->durata_sosta = durata_sosta;
    newNode->next = NULL;
    return newNode;
}

int main(int argc, char *argv[])
{
    FILE *pf;
    Node* head = NULL;
    Node* current = NULL;
    char targa[8];
    float durata_sosta;

    pf = fopen(argv[1], "rb");
    if(pf == NULL)
    {
        printf("[!] Errore Apertura FILE [!]\n");
        exit(2);
    }

    while(fread(targa, sizeof(char), 8, pf) == 8 && fread(&durata_sosta, sizeof(float), 1, pf) == 1) {
        Node* newNode = createNode(targa, durata_sosta);
        if(head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    fclose(pf);

    // Ora la lista collegata inizia da head

    return 0;
}