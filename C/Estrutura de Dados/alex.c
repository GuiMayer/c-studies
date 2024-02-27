#include <stdio.h>

int main() {
    char tipoCombustivel;
    float litros, precoLitro, desconto, valorPago;

    printf("Digite o tipo de combustível (A-álcool, G-gasolina, D-diesel): ");
    scanf(" %c", &tipoCombustivel);

    printf("Digite a quantidade de litros vendidos: ");
    scanf("%f", &litros);

    if (tipoCombustivel == 'A' || tipoCombustivel == 'a') {
        precoLitro = 3.90;
    } else if (tipoCombustivel == 'G' || tipoCombustivel == 'g') {
        precoLitro = 6.20;
    } else if (tipoCombustivel == 'D' || tipoCombustivel == 'd') {
        precoLitro = 7.14;
    } else {
        printf("Tipo de combustível inválido.\n");
        return 1;
    }

    if (litros <= 20) {
        if (tipoCombustivel == 'A' || tipoCombustivel == 'a') {
            desconto = 0.03;
        } else if (tipoCombustivel == 'G' || tipoCombustivel == 'g') {
            desconto = 0.04;
        } else if (tipoCombustivel == 'D' || tipoCombustivel == 'd') {
            desconto = 0.05;
        }
    } else {
        if (tipoCombustivel == 'A' || tipoCombustivel == 'a') {
            desconto = 0.05;
        } else if (tipoCombustivel == 'G' || tipoCombustivel == 'g') {
            desconto = 0.06;
        } else if (tipoCombustivel == 'D' || tipoCombustivel == 'd') {
            desconto = 0.07;
        }
    }

    valorPago = litros * precoLitro * (1 - desconto);

    printf("Valor a ser pago: R$ %.2f\n", valorPago);

    return 0;
}
