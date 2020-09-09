#include <stdio.h>
#include <stdlib.h>

int main () {
    float passagem = 4.50;
    float dias_de_viagem;
    float valor;

    printf("valor das passagens, %f\n", passagem);
    printf("insira os dias de viagem");
    scanf("%f", &dias_de_viagem);
    valor = (dias_de_viagem * passagem);
    printf ("valor gasto, %f",valor);
    


    return 0;



}
