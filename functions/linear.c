//Função Linear

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float valorX = 0, valorA = 0, valorB = 0;
float retaCruzaEixoY = 0;
float valorZeroDaFuncao = 0;
float resultadoFuncao = 0;
char sentidoReta[20];

int main()
{
    printf("Digite o valor de A: \n");

    while (scanf("%f", &valorA) != 1)
    {
        printf("Caiu dentro do while");
        printf("Entrada inválida, digite um número real e que seja diferente de zero\n");
        while (getchar() != '\n')
            ;
    }

    if (!valorA || valorA == 0)
    {
        printf("Não é possível digitar o valor zero para o termo A, pois assim, a função se tornará uma função Constante.");
        return;
    }

    // Checando o sentindo da reta da função
    if (valorA < 0)
    {
        strcpy(sentidoReta, "Decrescente");
    }
    else if (valorA > 0)
    {
        strcpy(sentidoReta, "Crescente");
    }

    printf("Digite o valor de B: \n");
    while (scanf("%f", &valorB) != 1)
    {
        printf("Entrada inválida, digite um número real\n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o valor de X: \n");
    while (scanf("%f", &valorX) != 1)
    {
        printf("Entrada inválida, digite um número real\n");
        while (getchar() != '\n')
            ;
    }

    // Determinando o zero da função
    valorZeroDaFuncao = -(valorB) / valorA;

    // Determinando o resultado da função
    resultadoFuncao = (valorA * valorX) + valorB;

    printf("\n");
    printf("A reta da função é: %s \n", sentidoReta);
    printf("Ela intercepta o eixo Y no ponto: %.4f \n", valorB);
    printf("O zero da função é: %.4f \n", valorZeroDaFuncao);

    printf("\n");
    printf("O resultado da função f(x) = %.4f*%.4f + %.4f é: \n", valorA, valorX, valorB);
    printf("f(%.4f) = %.4f \n", valorX, resultadoFuncao);
    return 0;
}
