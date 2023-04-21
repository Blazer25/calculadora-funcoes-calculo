// ATIVIDADE 2 - Cálculo - ADS - Noturno - 2o Período

/*
 * INTEGRANTES DO GRUPO:
 * CRYSTIAN EDUARDO FERRAZ SCHLEMPER
 * GIOVANI MURAKAMI LINO RODRIGUES
 * JOÃO ANTONIO COIMBRA NOVAES DETORE
 * JOÃO VITOR DA SILVEIRA EUGÊNIO
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int opcaoEscolha = 0;

float valorX = 0, valorK = 0;
float valorA = 0, valorB = 0, valorC = 0;

float retaCruzaEixoY = 0;
float valorZeroDaFuncao = 0;
float resultadoFuncao = 0;
char sentidoReta[20];

float zero1 = 0, zero2 = 0;
float delta = 0;
float verticeX = 0, verticeY = 0;
char sentidoParabola[20];
char resultadoVertice[50];
int quantidadeZeros = 0;

int main()
{
    do
    {
        printf("\n\n");
        printf("==================================================================\n");
        printf("Seja bem-vindo(a) a calculadora de funções!\n");
        printf("Selecione as opções de 1 a 9\n");
        printf("==================================================================\n");
        printf("Opção 1 - Função Constante -> f(x) = k\n");
        printf("Opção 2 - Função Linear -> f(x) = ax + b\n");
        printf("Opção 3 - Função Quadrática -> f(x) = ax^2 + bx + c\n");
        printf("Opção 4 - Função Exponencial -> f(x) = k^x\n");
        printf("Opção 5 - Função Logaritmica -> f(x) = log_k(x)\n");
        printf("Opção 6 - Função Seno -> f(x) = sin(x)\n");
        printf("Opção 7 - Função Cosseno -> f(x) = cos(x)\n");
        printf("Opção 8 - Função Tangente -> f(x) = tan(x)\n");
        printf("Opção 9 - Sair da Calculadora\n");

        while (scanf("%d", &opcaoEscolha) != 1)
        {
            printf("Entrada inválida, digite um número inteiro!\n");
            while (getchar() != '\n')
                ;
        }

        printf("\n");

        switch (opcaoEscolha)
        {
        case 1:
            funcaoConstante();
            break;

        case 2:
            funcaoLinear();
            break;

        case 3:
            funcaoQuadratica();
            break;

        case 4:
            funcaoExponencial();
            break;

        case 5:
            funcaoLogaritmica();
            break;

        case 6:
            funcaoSeno();
            break;

        case 7:
            funcaoCosseno();
            break;

        case 8:
            funcaoTangente();
            break;

        case 9:
            sair();
            break;

        default:
            printf("Valor inválido, digite um número inteiro entre 1 e 9\n");
        }
    } while (opcaoEscolha != 9);
    return 0;
}

int funcaoConstante()
{
    printf("\n");
    printf("Você escolheu a opção de Função Constante -> f(x) = k");
    printf("\n");

    printf("Digite o valor de X: \n");
    while (scanf("%f", &valorX) != 1)
    {
        printf("Entrada inválida, digite um número real:\n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o valor de K: \n");
    while (scanf("%f", &valorK) != 1)
    {
        printf("Entrada inválida, digite um número real:\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");
    printf("O valor da função f(x) = %.4f é: \n", valorK);
    printf("f(%.4f) = %.4f", valorX, valorK);
}

int funcaoLinear()
{
    printf("\n");
    printf("Você escolheu a opção de Função Linear -> f(x) = ax + b");
    printf("\n");
    printf("Digite o valor de A: \n");

    while (scanf("%f", &valorA) != 1 || valorA == 0)
    {
        printf("Entrada inválida, digite um número real e que seja diferente de zero:\n");
        while (getchar() != '\n')
            ;
    }

    // Checando o sentindo da reta da função
    if (valorA < 0)
        strcpy(sentidoReta, "Decrescente");

    else if (valorA > 0)
        strcpy(sentidoReta, "Crescente");

    printf("Digite o valor de B: \n");
    while (scanf("%f", &valorB) != 1)
    {
        printf("Entrada inválida, digite um número real:\n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o valor de X: \n");
    while (scanf("%f", &valorX) != 1)
    {
        printf("Entrada inválida, digite um número real:\n");
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
}

int funcaoQuadratica()
{
    printf("\n");
    printf("Você escolheu a opção de Função Quadrática -> f(x) = ax^2 + bx + c");
    printf("\n");

    printf("Digite o valor de A: \n");
    while (scanf("%f", &valorA) != 1 || valorA == 0)
    {
        printf("Entrada inválida, digite um número real e que seja diferente de zero:\n");
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
        printf("Entrada inválida, digite um número real:\n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o valor de C: \n");
    while (scanf("%f", &valorC) != 1)
    {
        printf("Entrada inválida, digite um número real:\n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o valor de X: \n");
    while (scanf("%f", &valorX) != 1)
    {
        printf("Entrada inválida, digite um número real:\n");
        while (getchar() != '\n')
            ;
    }

    // Determinando os zeros da função
    delta = valorB * valorB - 4 * valorA * valorC;

    if (delta < 0)
    {
        quantidadeZeros = 0;
    }
    else if (delta == 0)
    {
        zero1 = ((-1) * valorB) / (2 * valorA);
        quantidadeZeros = 1;
    }
    else
    {
        zero1 = ((-1) * valorB + sqrt(delta)) / (2 * valorA);
        zero2 = ((-1) * valorB - sqrt(delta)) / (2 * valorA);
        quantidadeZeros = 2;
    }

    // Calculando o vertice da função
    if (delta < 0)
    {
        strcpy(resultadoVertice, "Não possui vertice real");
    }
    else
    {
        verticeX = (-(1) * valorB) / (2 * valorA);
        verticeY = (-(1) * delta) / (4 * valorA);
        sprintf(resultadoVertice, "Os vertices são: (%.4f , %.4f)", verticeX, verticeY);
    }

    // Determinando o resultado da função
    resultadoFuncao = (valorA * pow(valorX, 2)) + (valorB * valorX) + valorC;

    printf("\n");
    printf("O sentido da função é: %s \n", sentidoParabola);
    printf("Ela intercepta o eixo Y no ponto: %.4f \n", valorC);
    printf("A função possui %d raizes \n", quantidadeZeros);

    if (quantidadeZeros == 0)
        printf("Os zeros de f(x): Não possui \n");
    if (quantidadeZeros == 1)
        printf("Os zeros de f(x): Somente %.4f \n", zero1);
    if (quantidadeZeros == 2)
        printf("Os zeros de f(x): %.4f e %.4f \n", zero1, zero2);

    printf("%s \n", resultadoVertice);
    printf("\n");
    printf("O resultado da função f(x) = %.4f*%.4f^2 + %.4f*%.4f + %.4f é: \n", valorA, valorX, valorB, valorX, valorC);
    printf("f(%.4f) = %.4f \n", valorX, resultadoFuncao);
}

int funcaoExponencial()
{
    printf("Teste - Exponencial\n");
}

int funcaoLogaritmica()
{
    printf("Teste - Logaritmica\n");
}

int funcaoSeno()
{
    printf("Teste - Seno\n");
}

int funcaoCosseno()
{
    printf("Teste - Cosseno\n");
}

int funcaoTangente()
{
    printf("Teste - Tangente\n");
}

int sair()
{
    printf("\n");
    printf("Saindo do programa...\n");
    exit(0);
}