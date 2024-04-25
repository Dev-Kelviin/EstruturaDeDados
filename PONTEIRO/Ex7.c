#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void calc_esfera(float r, float *area, float *volume){

    *area = 4 * 3.14 * pow(r,2);
    *volume = (4 * 3.14) * pow(r,3) / 3; 

    printf("O valor do volume de uma esfera e %.2f\n",*volume);
    printf("O valor da area de uma esfera e %.2f\n",*area);

}


int main(){

    float r, a, v;

    printf("Vamos calcular a area de uma esfera e seu volume\nInformar o raio:\n");
    scanf("%f",&r);


    calc_esfera(r,&a,&v);
    return 0;
}

