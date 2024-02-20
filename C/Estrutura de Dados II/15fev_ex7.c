/* 7) Escreva um programa que leia o nome e o valor de determinada mercadoria de
uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor
total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor
total, o valor do desconto e o valor a ser pago à vista. */

#include <stdio.h>

int main() {
    char nomeMercadoria[100];
    float valorTotal, desconto, valorAVista;

    printf("Digite o nome da mercadoria: ");
    scanf("%s", nomeMercadoria);

    printf("Digite o valor total da mercadoria: ");
    scanf("%f", &valorTotal);

    desconto = 0.10 * valorTotal;
    valorAVista = valorTotal - desconto;

    printf("\nDetalhes da compra:\n");
    printf("Nome da mercadoria: %s\n", nomeMercadoria);
    printf("Valor total: %.2f\n", valorTotal);
    printf("Desconto (10%%): %.2f\n", desconto);
    printf("Valor a ser pago a vista: %.2f\n", valorAVista);

    return 0;
}
