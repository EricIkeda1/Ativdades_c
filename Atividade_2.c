#include <stdio.h>

int main() {
    float num1, num2, num3, soma;

    // Solicita os três números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    // Soma os três números
    soma = num1 + num2 + num3;

    // Exibe a soma sem formatação específica
    printf("A soma dos tres numeros e %f\n", soma);

    return 0;
}
