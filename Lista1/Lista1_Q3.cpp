// Aluno: Carlos Pantoja
// Turma: Ciência da Computação

// Problema: Três amigos foram curtir um morma para relaxar depois de uma semana cruel de provas.
// Na saída, João, Rodrigo e Ricardo resolveram dividir a conta. Seu papel é fazer um programa que receba o total 
// a ser pago e exibir o quanto cada um deve pagar, mas considerando que João e Rodrigo não paguem os centavos.
// Por exemplo, se o total for R$ 100,50 então João paga R$ 33,00, Rodrigo paga R$ 33,00 e Ricardo paga R$ 33,50.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float total;

    printf("Informe o total a ser pago: ");
    scanf("%f", &total);

    printf("O total a ser pago por Ricardo e: R$ %.2f\n", total/3);
    printf("O total a ser pago por Rodrigo e: R$ %d\n", (int)total/3);
    printf("O total a ser pago por Joao e: R$ %d\n", (int)total/3);

    system("PAUSE");
}