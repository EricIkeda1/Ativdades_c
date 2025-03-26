#include<stdio.h>
    int main(){
        float num1, num2, num3, soma;
        printf("Digite o primeiro numero:");
        scanf("%f", &num1);


        printf("Digite o segundo numero:");
        scanf("%f", &num2);

        printf("Digite o terceiro numero:");
        scanf("%f", &num3);

        soma = num1+num2+num3;

        printf("A soma dos tres numeros e %2f\n", soma);

        return 0;

}
