//Ler numero inteiro e imprimir o seu antecessor e o seu sucessor
#include<stdio.h>
    int main(){
        int numero, antecessor, sucessor;

        printf("Digite um numero inteiro:");
        scanf("%d", &numero);

        antecessor = numero - 1;
        sucessor = numero + 1;

        printf("O antecessor de %d e %d\n", numero, antecessor);
        printf("O sucessor de %d e %d\n", numero, sucessor);

        return 0;
}
