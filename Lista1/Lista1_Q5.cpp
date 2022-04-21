// Aluno: Carlos Pantoja
// Turma: Ciência da Computação

// Problema:Uma empresa produz três tipos de rações para cachorro: flex, premium e gold. Têm-se os preços unitários 
// de cada saco com 20 Kg e sabe-se que sobre estes preços incidem descontos de 10% para flex, 20% para premium e 
// 30% para gold. Escreva um programa que calcule o valor total da compra de um cliente. Deve ser mostrada a 
// quantidade de cada tipo de ração que ele comprou, o total de desconto e o total a pagar pela compra.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float flex, premium, gold, total;

    printf("Informe a quantidade de racao flex serao compradas: ");
    scanf("%f", &flex);
    printf("Informe a quantidade de racao premium serao compradas: ");
    scanf("%f", &premium);
    printf("Informe a quantidade de racao gold serao compradas: ");
    scanf("%f", &gold);

    printf("Racao flex %.2f.\n", flex);
    printf("Racao premium %.2f.\n", premium);
    printf("Racao gold %.2f.\n", gold);

    if(flex == 0) {        
        premium = (premium + 10.00) - ((10.00 * 20)/100);        
        gold = (gold + 15.00) - ((15.00 * 30)/100);
        total = premium + gold;
    }else if (premium == 0) {        
        flex = (flex + 5.00) - ((5.00 * 10)/100);        
        gold = (gold + 15.00) - ((15.00 * 30)/100);
        total = flex + gold;
    }else{
        if (gold == 0) {            
            flex = (flex + 5.00) - ((5.00 * 10)/100);            
            premium = (premium + 10.00) - ((10.00 * 20)/100);
            total = flex + premium;
        }else {            
            flex = (flex + 5.00) - ((5.00 * 10)/100);            
            premium = (premium + 10.00) - ((10.00 * 20)/100);            
            gold = (gold + 15.00) - ((15.00 * 30)/100);
            total = flex + premium + gold;
        }    
    }
    
    printf("O total a ser pago e: R$ %.2f\n", total);

    system("PAUSE");
}