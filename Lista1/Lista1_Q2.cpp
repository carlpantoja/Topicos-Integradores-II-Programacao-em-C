//Aluno: Carlos Pantoja
//Matricula: 26149852
//Turma: Ciência da Computação

#include <stdio.h>
#include <stdlib.h>

int main(){    
    int qtdvendas;
    float vendas;

    printf("Informe a quantidade de produtos vendidos: ");
    scanf("%d", &qtdvendas);
    printf("Informe o valor das vendas: ");
    scanf("%f", &vendas);

    printf("O seu salario final sera de: R$ %.2f\n", 3300 + (10.00 * qtdvendas) + (vendas * 3)/100);

    system("PAUSE");
}