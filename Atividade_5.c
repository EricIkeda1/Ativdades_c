//5.Receba o salário-base de um funcionário. Calcule e imprima o salário a receber,
//sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base.
//Além disso, ele paga 7% de imposto sobre o salário-base.

#include <stdio.h>

int main() {
    float salario_base, salario_final, gratificacao, imposto;

    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_final = salario_base + gratificacao - imposto;

    printf("Salario a receber: %f", salario_final);

    return 0;
}
