#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    struct spilha x;
    struct spilha y;
    struct spilha z;
    init(&x);
    init(&y);
    init(&z);
    
    push(&x,'A');
    push(&x, 'B');
    push(&x, 'C');
    push(&x, 'D');

    printf("\n --------------Estado Inicial-------------- \n\n");


    printf("\n Pilha x \n\n");
    for (int i = x.topo - 1; i >= 0; i--){
        printf(" %c\n", x.vetor[i]);
    }

    printf("\n\n Pilha y \n\n");
    for (int i = y.topo - 1; i >= 0; i--){
        printf(" %c\n", y.vetor[i]);
    }

    printf("\n\n Pilha z \n\n");
    for (int i = z.topo - 1; i >= 0; i--){
        printf(" %c\n", z.vetor[i]);
    }

    push(&y,pop(&x));
    push(&y,pop(&x));
    push(&y,pop(&x));
    push(&z,pop(&x));
    push(&x,pop(&y));
    push(&z,pop(&y));
    push(&z,pop(&x));
    push(&z,pop(&y));


    printf("\n --------------Estado Final-------------- \n\n");


    printf("\n Pilha x \n\n");
    for (int i = x.topo - 1; i >= 0; i--){
        printf(" %c\n", x.vetor[i]);
    }

    printf("\n\n Pilha y \n\n");
    for (int i = y.topo - 1; i >= 0; i--){
        printf(" %c\n", y.vetor[i]);
    }

    printf("\n\n Pilha z \n\n");
    for (int i = z.topo - 1; i >= 0; i--){
        printf(" %c\n", z.vetor[i]);
    }
}
