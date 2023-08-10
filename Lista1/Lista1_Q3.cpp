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