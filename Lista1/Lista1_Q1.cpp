#include <stdio.h>
#include <stdlib.h>

int main(){
    float preco, desconto;

    printf("Informe o preco do produto: ");
    scanf("%f", &preco);
    if (preco < 90) {
        printf("Voce recebeu um desconto de 10%%\n");
        desconto = (preco * 10)/100;
        printf("O novo valor e: R$ %.2f\n", preco - desconto);
    } else {
        if (preco == 90 || preco <= 150) {
            printf("Voce recebeu um desconto de 15%%\n");
            desconto = (preco * 15)/100;
            printf("O novo valor e: R$ %.2f\n", preco - desconto);
        } else {
            printf("Voce recebeu um desconto de 25%%\n");
            desconto = (preco * 25)/100;
            printf("O novo valor e: R$ %.2f\n", preco - desconto);
        }
    }

    system("PAUSE");  
}