/*
Aluno: Carlos Pantoja
Turma: Ciência da Computação

Problema: Uma loja está levantando o valor total de todas as mercadorias em estoque. Escreva um algoritmo que permita a entrada das seguintes informações: 
    a) o valor de cada mercadoria
    b) se existe ou não mais mercadorias no estoque: “mais mercadorias (s/n)?” 
Ao final imprimir o valor total em estoque e a média de valor das mercadorias. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int op = 1;
    float val_merc[i];
    float total = 0, media = 0;

    do
    {
        i++;
        printf("Informe o valor da mercadoria: ");
        scanf("%f", &val_merc[i]);

        total = total + val_merc[i];

        printf("Mais mercadorias (1-s/2-n)?\n");
        scanf("%d", &op);

        if (op == 2){
            media = total/i;
            printf("O valor total das mercadorias foi: R$ %.2f\n", total);
            printf("Media do valor das mercadorias: R$ %.2f\n", media);
        } else if (op < 1 || op > 2){
            printf("Opcao invalida!\n");
            break;
        }
        
    } while (op != 2);

    system("pause");
}