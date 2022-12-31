/*
Aluno: Carlos Pantoja
Turma: Ciência da Computação

Problema: Escreva um programa que, para uma conta bancária, leia o seu número, o saldo, o tipo de operação a ser realizada (1 para depósito ou 2 para retirada) e o valor da operação.
Após, determine e mostre o novo saldo. Considere que o cliente tem R$ 2000,00 de cheque especial. 
Se o novo saldo ficar negativo, então deve-se descontar do cheque especial, também deve-se exibir uma mensagem informando que o cliente estourou seu saldo, exibir que está fazendo uso do cheque especial, o quanto foi usado e o novo saldo. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, op;
    float saldo, valop;

    printf("Informe seu numero: ");
    scanf("%d", &numero);
    printf("Informe seu saldo: ");
    scanf("%f", &saldo);
    printf("Informe o valor da operacao: ");
    scanf("%f", &valop);
    printf("Escolha o tipo de operacao:\n1 - deposito\n2 - retirada\n");
    scanf("%d", &op);
    
    if (op == 1){
        printf("--------------deposito--------------\n");
        saldo = saldo + valop;
        printf("O seu novo saldo e de: %.2f\n", saldo);
    } else {
        if (op == 2) {
            printf("--------------retirada--------------\n");
            saldo = saldo - valop;
            if (saldo >= 0){
                printf("O seu novo saldo e de: %.2f\n", saldo);
            }else{
                printf("Voce estourou seu saldo.\n");
                printf("Sera feito uso do cheque especial.\n");
                saldo = saldo + 2000;
                printf("O seu novo saldo e de: %.2f\n", saldo);
            }
            
        }else printf("Opcao invalida!\n");
        
    }
    
    system("PAUSE");
}