//10.	Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto.
//As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias. 
//Se a entrada for 576, a saída deve ser a seguinte (imprimir na tela de acordo com o exemplo abaixo):
//5 nota(s) de R$ 100,00
//1 nota(s) de R$ 50,00
//1 nota(s) de R$ 20,00
//0 nota(s) de R$ 10,00
//2 nota(s) de R$ 5,00
//0 nota(s) de R$ 2,00
//1 nota(s) de R$ 1,00
#include <stdio.h>

int main() {
    int valor, notas;

    printf("Informe o valor: ");
    scanf("%d", &valor);

    printf("%d\n", valor);  

    notas = valor / 100;
    printf("%d nota(s) de R$ 100,00\n", notas);
    valor = valor % 100;

    notas = valor / 50;
    printf("%d nota(s) de R$ 50,00\n", notas);
    valor = valor % 50;

    notas = valor / 20;
    printf("%d nota(s) de R$ 20,00\n", notas);
    valor = valor % 20;

    notas = valor / 10;
    printf("%d nota(s) de R$ 10,00\n", notas);
    valor = valor % 10;

    notas = valor / 5;
    printf("%d nota(s) de R$ 5,00\n", notas);
    valor = valor % 5;

    notas = valor / 2;
    printf("%d nota(s) de R$ 2,00\n", notas);
    valor = valor % 2;

    notas = valor / 1;
    printf("%d nota(s) de R$ 1,00\n", notas);

    return 0;
}
