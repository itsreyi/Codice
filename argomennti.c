#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    printf("argc: %d\n", argc);

    if(argc>1)
    {  
        printf("\n%s\n", argv[0]);
        printf("%s\n", argv[1]);
    }
}