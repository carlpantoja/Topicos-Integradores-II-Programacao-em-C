#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho = 0;
    float sal_bruto[tamanho];
    float sal_liq[tamanho];
    
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &tamanho);
    printf("\n");

    for (int i = 0; i < tamanho; i++){
        printf("Informe o salario do funcionario %d: ", i+1);
        scanf("%f", &sal_bruto[i]);
    }

    for (int i = 0; i < tamanho; i++){
        sal_liq[i] = sal_bruto[i] - (sal_bruto[i] * 0.1);
        printf("\n");
        printf("O funcionario %d, tem um salario bruto de: R$ %.2f\ne um salario liquido de: R$ %.2f\n", i+1, sal_bruto[i], sal_liq[i]);
    }   

    system("pause");
}