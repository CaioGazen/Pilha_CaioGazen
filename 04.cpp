#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "pilha.h"

int main(){

    srand(time(NULL));
    struct spilha r;
    struct spilha p;
    struct spilha im;
    init(&r);
    init(&p);
    init(&im);
    
    push(&r,rand()%100);
    push(&r,rand()%100);
    push(&r,rand()%100);
    push(&r,rand()%100);
    push(&r,rand()%100);
    push(&r,rand()%100);
    push(&r,rand()%100);
    push(&r,rand()%100);
    push(&r,rand()%100);
    push(&r,rand()%100);

    for(int i = r.topo - 1; i >= 0; i--){
        int temp = pop(&r);
        if(temp % 2 == 0){
            push(&p,temp);
        }
        else{
            push(&im,temp);
        }
    }

    printf("\n Pilha par \n\n");
    for (int i = p.topo - 1; i >= 0; i--){
        printf(" %d\n", p.vetor[i]);
    }

    printf("\n\n Pilha impar \n\n");
    for (int i = im.topo - 1; i >= 0; i--){
        printf(" %d\n", im.vetor[i]);
    }
}
