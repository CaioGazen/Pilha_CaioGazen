#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    int n;
    struct spilha p;
    init(&p);
    printf("informe um numero: ");
    scanf("%d",&n);
    while(n > 0){  
        push(&p,n%2);
        n = n/2;
    }


    printf("\n Pilha par \n\n");
    for (int i = p.topo - 1; i >= 0; i--){
        printf("%d", p.vetor[i]);
    }

}
