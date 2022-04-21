// Aluno: Carlos Pantoja
// Turma: Ciência da Computação

// Problema: Uma revenda de cosméticos paga aos seus funcionários um salário base de 3 salários mínimos, além disso 
// paga uma comissão de R$ 10,00 por produtos vendidos e mais 3% do valor das vendas. Então, faça um programa que 
// etermine o salário final de um vendedor.

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