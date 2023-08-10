#include <stdio.h>
#include <stdlib.h>

int main(){
    int op = 1;
    int codigo, cond;
    float desconto, val_total;

    do {
        printf("------------------Lojinha------------------\n");
        printf("\n");
        printf("Digite o codigo do produto que deseja escolher:\n");
        printf("Codigo          Produto             Preco\n");
        printf("100             Sofa                R$ 150,00\n");
        printf("101             Mesa                R$ 125,30\n");
        printf("102             Prateleira          R$ 316,75\n");
        printf("103             Cadeira             R$ 79,90\n");
        printf("104             Guarda Roupa        R$ 499,50\n");
        scanf("%d", &codigo);

        switch (codigo) {
        case 100:
            val_total = val_total + 150.0;
            break;
        case 101:
            val_total = val_total + 125.3;
            break;
        case 102:
            val_total = val_total + 316.75;
            break;
        case 103:
            val_total = val_total + 79.9;
            break;
        case 104:
            val_total = val_total + 499.5;
            break;
        default:
            printf("\n");
            printf("Codigo invalido!");
            break;
        }

        printf("\n");
        printf("Deseja adicionar mais um produto (1-sim/2-nao)?\n");
        scanf("%d", &op);
        if (op == 2) {
            printf("\n");
            printf("Escolha uma condicao de pagamento:\n");
            printf("1 - Venda a Vista - desconto de 10%%\n");
            printf("2 - Venda a Prazo 30 dias - desconto de 5%%\n");
            printf("3 - Venda a Prazo 60 dias - mesmo preco\n");
            printf("4 - Venda a Prazo 90 dias - acrescimo de 5%%\n");
            printf("5 - Venda com cartao de debito - desconto de 8%%\n");
            printf("6 - Venda com cartao de credito - desconto de 7%%\n");
            scanf("%d", &cond);
            switch (cond) {
            case 1:
                printf("\n");
                printf("Voce tem um desconto de 10%%\n");
                desconto = val_total * 0.1;
                val_total = val_total - desconto;
                break;
            case 2:
                printf("\n");
                printf("Voce tem um desconto de 5%%\n");
                desconto = val_total * 0.05;
                val_total = val_total - desconto;
                break;
            case 3:
                printf("\n");
                printf("Sem desconto\n");
                val_total = val_total;
                break;
            case 4:
                printf("\n");
                printf("Houve um acrescimo de 5%%\n");
                desconto = val_total * 0.05;
                val_total = val_total + desconto;
                break;
            case 5:
                printf("\n");
                printf("Voce tem um desconto de 8%%\n");
                desconto = val_total * 0.08;
                val_total = val_total - desconto;
                break;
            case 6:
                printf("\n");
                printf("Voce tem um desconto de 7%%\n");
                desconto = val_total * 0.07;
                val_total = val_total - desconto;
                break;
            default:
                printf("\n");
                printf("Opcao invalida!\n");
                break;
            }
            printf("\n");
            printf("O total a ser pago e: R$: %.2f\n", val_total);
            break;
        } else if (op < 1 || op > 2) {
            printf("\n");
            printf("Opcao invalida!\n");
            break;
        }
        
    } while (op == 1);
    
    system("pause");
}