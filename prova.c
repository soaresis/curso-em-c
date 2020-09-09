#include <stdio.h>
#include <stdlib.h>

int main() {
float nota_da_primeira_prova;
float nota_da_segunda_prova;
float nota_da_terceira_prova;
float soma_das_notas;
float numero_de_provas = 3;
float media_das_notas;

printf("ensira a nota da primeira prova\n");
printf("ensira a nota da segunda prova\n");
printf("ensira a nota da terceira prova\n");
scanf("%f %f %f", &nota_da_primeira_prova, &nota_da_segunda_prova, &nota_da_terceira_prova);
printf("as notas das avaliações são, %f, %f, %f\n", nota_da_primeira_prova,nota_da_segunda_prova,nota_da_terceira_prova);
soma_das_notas=(nota_da_primeira_prova + nota_da_segunda_prova + nota_da_terceira_prova);
media_das_notas=(soma_das_notas/numero_de_provas);
printf("a média final é %f\n", media_das_notas);

return 0;



}
