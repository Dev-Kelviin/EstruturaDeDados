#include <stdio.h>
#include <stdlib.h>

int somatoria (int n){
    
    if (n == 1){
        return 1;
    } else { 
        return n + somatoria(n-1);
    }
    
}

int main(){

    int n;

    printf("informe um numero inteiro e positivo \n");
    scanf("%i",&n);
    printf("%i",somatoria(n));

}