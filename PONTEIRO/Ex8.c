#include<stdio.h>
#include<stdlib.h>

void converteHora(int total, int *hora, int *min, int *seg){

    *hora = total / 3600;
    total = total - (*hora * 3600);

    *min = total / 60;
    total = total - (*min * 60);
    
    *seg = total;

    printf("%i:%i:%i\n",*hora,*min,*seg);
}

int main(){

    int hora, min, seg, total;

    printf("informe uma quantidade em segundos e iremos converter para horas minutos e segundos\n");
    scanf("%i",&total);


    converteHora(total, &hora, &min, &seg);

}
