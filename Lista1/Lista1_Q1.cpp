// Aluno: Carlos Pantoja
// Turma: Ciência da Computação

// Problema: Deu a louca na empresa SportChibé e ela resolveu oferecer descontos em seus produtos considerando a 
// tabela abaixo. Seu papel é fazer um programa que receba o preço atual de um determinado produto ao qual o cliente 
// deseja comprar, calcule e exiba o valor do desconto oferecido bem como o novo preço.
// Preço atual % desconto
// Abaixo de R$ 90,00 10
// Entre R$ 90,00 e R$ 150,00 15
// Acima de R$ 150,00 25


#include <stdio.h>
#include <stdlib.h>

int main(){
    float preco, desconto;

    printf("Informe o preco do produto: ");
    scanf("%f", &preco);
    if (preco < 90){
        printf("Voce recebeu um desconto de 10%%\n");
        desconto = (preco * 10)/100;
        printf("O novo valor e: R$ %.2f\n", preco - desconto);
    }else{
        if (preco == 90 || preco <= 150){
            printf("Voce recebeu um desconto de 15%%\n");
            desconto = (preco * 15)/100;
            printf("O novo valor e: R$ %.2f\n", preco - desconto);
        }else{
            printf("Voce recebeu um desconto de 25%%\n");
            desconto = (preco * 25)/100;
            printf("O novo valor e: R$ %.2f\n", preco - desconto);
        }
    }

    system("PAUSE");
    
}