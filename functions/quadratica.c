//Função Quadratica

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float valorX = 0, valorA = 0, valorB = 0, valorC = 0;
float retaCruzaEixoY = 0;
float valorZeroDaFuncao = 0;
float resultadoFuncao = 0;
float zero1 = 0, zero2 = 0;
float delta = 0;
float verticeX = 0, verticeY = 0;
char sentidoParabola[18];
char resultVertice[50];
int qtdZeros = 0;

int main()
{
    printf("Digite o valor de A: \n");

    while (scanf("%f", &valorA) != 1 || valorA == 0)
    {
        printf("Entrada invalida, digite um numero real e que seja diferente de zero:\n");
        while (getchar() != '\n')
            ;
    }

    // Checando o sentindo da parabola

    if (valorA < 0)
        strcpy(sentidoParabola, "Voltado para baixo");

    else if (valorA > 0)
        strcpy(sentidoParabola, "Voltado para cima");

    printf("Digite o valor de B: \n");
    while (scanf("%f", &valorB) != 1)
    {
        printf("Entrada invalida, digite um numero real:\n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o valor de C: \n");
    while (scanf("%f", &valorC) != 1)
    {
        printf("Entrada invalida, digite um numero real:\n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o valor de X: \n");
    while (scanf("%f", &valorX) != 1)
    {
        printf("Entrada invalida, digite um numero real:\n");
        while (getchar() != '\n')
            ;
    }

    // Determinando os zeros da funcao

     delta = valorB * valorB - 4 * valorA * valorC;

    if (delta < 0) {
        qtdZeros = 0;
    } else if (delta == 0) {
        zero1 = ((-1)*valorB) / (2 * valorA);
        qtdZeros = 1;
    } else {
        zero1 = ((-1)*valorB + sqrt(delta)) / (2 * valorA);
        zero2 = ((-1)*valorB - sqrt(delta)) / (2 * valorA);
        qtdZeros = 2;
    }

    // Calculando o vertice da funcao

    if (delta < 0) {
        strcpy(resultVertice, "Não possui vertice real");
    } else {
        verticeX = (-(1)*valorB) / (2 * valorA);
        verticeY = (-(1)*delta) / (4 * valorA);
        sprintf(resultVertice, "Os vertices sao: (%.4f , %.4f)", verticeX,verticeY);
    }

    // Determinando o resultado da funcao
    
    resultadoFuncao = (valorA * pow(valorX,2)) + (valorB * valorX) + valorC;

    // Printando as respostas desejadas

    printf("\n");
    printf("O sentido da funcao é: %s \n", sentidoParabola);
    printf("Ela intercepta o eixo Y no ponto: %.4f \n", valorC);
    printf("A funcao possui %d raizes \n", qtdZeros);
    if (qtdZeros==0) printf("Os zeros de f(x): Nao possui \n");
    if (qtdZeros==1) printf("Os zeros de f(x): Somente %.4f \n",zero1);
    if (qtdZeros==2) printf("Os zeros de f(x): %.4f e %.4f \n",zero1 ,zero2);
    printf("%s \n",resultVertice);
    printf("\n");
    printf("O resultado da funcao f(x) = %.4f*%.4f^2 + %.4f*%.4f + %.4f é: \n", valorA, valorX, valorB, valorX, valorC);
    printf("f(%.4f) = %.4f \n", valorX, resultadoFuncao);
    return 0;
}
