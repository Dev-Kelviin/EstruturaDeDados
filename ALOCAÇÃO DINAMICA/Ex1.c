#include<stdio.h>
#include<stdlib.h>

int main(){

int *x, n, i, numPar=0, numImpar=0;

printf("Informe quantos valores deseja inserir em um vetor\n");
scanf("%i",&n);

x = (int *) malloc (n * sizeof(int));
    if(x == NULL){
        printf("Erro de alocacao\n");
        exit(1);
    }


    for(i=0; i<n; i++){
        printf("infrome o valor de posicao %i:\n",i);
        scanf("%i",&x[i]);

        if(x[i] % 2 == 0){
            numPar ++;
        } else {
            numImpar ++;
        }
    }

    printf("\nVetor:\n\n");

    for(i=0; i<n; i++){
        printf("%i  ",x[i]);
    }
    
    printf("\nQuantidade de numero pares:%i\n",numPar);
    printf("Quantidade de numero pares:%i\n",numImpar);

    free(x);

}