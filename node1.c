#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    
}Node;

Node* createNode(void)
{
    Node *newNode = (Node*) malloc(sizeof(Node));
    if(newNode==NULL)
    {
        printf("[!] Errore allocazione memoria [!]\n");
        exit(0);
    }

    int data;
    printf("Data da inserire nel nodo: ");
    scanf("%d", &data);

    newNode->data=data;
    newNode->next=NULL;

    return newNode;
}

Node* insNodeCoda(Node *testa)
{
    Node* new_node=NULL;

    if(testa==NULL)
    {
        printf("Il nodo è vuoto creazione di un nuovo nodo\n");
        testa = createNode();

        return testa;
    }

    Node* temp = testa;
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }

    new_node = createNode();
    temp->next= new_node;

    return testa;

}

void printNode(Node* testa)
{
    Node* temp = testa;
    while(temp!=NULL)
    {
        printf("| %d |  ", temp->data);
        temp=temp->next;
    }

    printf("\n");
}

Node* findNode(Node *testa, int data)
{
    Node *temp=testa;
    while(temp!=NULL)
    {
        if(temp->data==data)
        {
            printf("Nodo trovato con il dato (%d)\n", data);
        }

        temp=temp->next;
    }

    return temp;
}

Node* deleteNode(Node* testa)
{
    int data;

    printf("Data dal nodo da eliminare: ");
    scanf("%d", &data);

    if(testa==NULL)
    {
        printf("Lista vuota, nessun elemento da eliminare\n");
        exit(1);
    }

    if(testa->data==data)
    {
        Node* temp=testa->next;
        free(testa);

        return temp;
    }

    Node* corrente=testa;

    while(corrente->next!=NULL)
    {
        if(corrente->next->data==data)
        {
            Node* temp = corrente->next;
            corrente->next=corrente->next->next;
            free(temp);

            return testa;
        }
        else
        {
            corrente=corrente->next;
        }
        
    }
}

int main()
{
    Node *testa=NULL;
    int data;

    testa=insNodeCoda(testa);
    testa=insNodeCoda(testa);
    testa=insNodeCoda(testa);
    testa=insNodeCoda(testa);

    findNode(testa, 2);
    
    printNode(testa);

    testa=deleteNode(testa);
    printNode(testa);

    return 0;
}