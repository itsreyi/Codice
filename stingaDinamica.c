#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *alloca(int dimensione)
{
    char *pc;
    pc=(char *)malloc(dimensione);
    return pc;
}

int main()
{
    char *s;

    strcpy(s, "Ferrara");
    printf("%s\n", s);
}