/*
Aluno: Carlos Pantoja
Turma: Ciência da Computação

Problema: Faça um algoritmo que calcule a média de salários de uma empresa, pedindo ao usuário a quantidade de funcionários, número de matrícula e o salário de cada funcionário e devolvendo a média, a matrícula e o valor do salário mais alto assim como do mais baixo. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd = 0;
    int matricula[qtd];
    float salario[qtd];
    float total = 0, menor = 0, maior = 0;
    
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &qtd);
    printf("\n");

    for (int i = 0; i < qtd; i++){
        printf("Informe o salario do funcionario %d: ", i+1);
        scanf("%f", &salario[i]);
        printf("E tambem informe sua matricula: ");
        scanf("%d", &matricula[i]);

        if (i == 0){
           maior = salario[i];
           menor = salario[i];
        } else if (salario[i] > maior){
            maior = salario[i];
        } else {
            if (salario[i] < menor)
            {
                menor = salario[i];
            }
        }       
    }

    for (int i = 0; i < qtd; i++){
        total = total + salario[i];
        printf("\n");
        printf("O funcionario %d de matricula %d, tem um salario de: R$ %.2f\n", i+1, matricula[i], salario[i]);
    }

    printf("\n");
    printf("Media dos salarios: R$ %.2f\n", total/qtd);
    printf("O maior salario: R$ %.2f\n", maior);
    printf("O menor salario: R$ %.2f\n", menor);

    system("pause");
}