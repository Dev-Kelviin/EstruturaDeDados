#include <stdio.h>
#include<stdlib.h>


int somatoria(int v[], int n){

if (n == 0){
    return 0;
} else {
    return v[n-1] + somatoria(v, n-1);
}

}


int main(){

    int x,n, resultado;


    printf("quantos valores quer calcular? \n");
    scanf("%i",&n);

    int v[n];

    for(x=0; x<n; x++){
        printf("informe o valor:\n",x);
        scanf("%i",&v[x]);
    }

    resultado = somatoria(v,n);
    printf("%i", resultado);
}