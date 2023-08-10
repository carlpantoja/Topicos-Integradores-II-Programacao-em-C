#include <stdio.h>
#include <stdlib.h>

int main(){
    float flex, premium, gold, total;

    printf("Informe quantas racoes flex serao compradas: ");
    scanf("%f", &flex);
    printf("Informe quantas racoes premium serao compradas: ");
    scanf("%f", &premium);
    printf("Informe quantas racoes gold serao compradas: ");
    scanf("%f", &gold);

    printf("Racao flex %.2f.\n", flex);
    printf("Racao premium %.2f.\n", premium);
    printf("Racao gold %.2f.\n", gold);

    if (flex == 0) {        
        premium = (premium + 10.00) - ((10.00 * 20)/100);        
        gold = (gold + 15.00) - ((15.00 * 30)/100);
        total = premium + gold;
    } else if (premium == 0) {        
        flex = (flex + 5.00) - ((5.00 * 10)/100);        
        gold = (gold + 15.00) - ((15.00 * 30)/100);
        total = flex + gold;
    } else {
        if (gold == 0) {            
            flex = (flex + 5.00) - ((5.00 * 10)/100);            
            premium = (premium + 10.00) - ((10.00 * 20)/100);
            total = flex + premium;
        } else {            
            flex = (flex + 5.00) - ((5.00 * 10)/100);            
            premium = (premium + 10.00) - ((10.00 * 20)/100);            
            gold = (gold + 15.00) - ((15.00 * 30)/100);
            total = flex + premium + gold;
        }    
    }
    
    printf("O total a ser pago e: R$ %.2f\n", total);

    system("PAUSE");
}