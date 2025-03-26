//4.	Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
#include <stdio.h>

int main() {
    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    resultado = (3 * n + 1) + (2 * n - 1);

    printf("Resultado: %d\n", resultado);

    return 0;
}
