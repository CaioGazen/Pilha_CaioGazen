#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main(){

    struct spilha p;
    init(&p);
    char palavra[256];
    char palavra_inversa[256];
    printf("\n digite uma palavra \n\n");
    scanf(" %s",palavra);

    push(&p,'\0');
    for(int i = 0; i <= strlen(palavra)-1; i++){
        push(&p,palavra[i]);
    }

    for (int i = 0; i <= strlen(palavra); i++){
        palavra_inversa[i] = pop(&p);
    }

    printf("\n%s",palavra_inversa);

    if(strcmp(palavra, palavra_inversa) == 0) {
        printf("\na palavra e palindroma\n");
    }
    else{
        printf("\na palavra nao e palindroma");
    }
}
