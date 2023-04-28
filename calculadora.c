// ATIVIDADE 2 - Cálculo - ADS - Noturno - 2o Período

/*
 * REPOSITÓRIO NO GITHUB:
 * https://github.com/Blazer25/calculadora-funcoes-calculo
 */

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
#include <math.h>

int opcaoEscolha = 0;
int escolhaSubMenu = 0;
int quantidadeZeros = 0;

float valorX = 0, valorK = 0;
float valorA = 0, valorB = 0, valorC = 0;
float retaCruzaEixoY = 0;
float valorZeroDaFuncao = 0;
float resultadoFuncao = 0;
float zero1 = 0, zero2 = 0;
float delta = 0;
float verticeX = 0, verticeY = 0;

char sentidoReta[20];
char sentidoParabola[20];
char resultadoVertice[50];

/*
 * Funções de suporte: são responsáveis por auxiliar o funcionamento das funções dentro do main.
 *
 * Exponencial: Calcula o exponencial de determinado número
 * Log: Realiza o logaritmo entre uma base e um logaritmando
 * sinGraus: Transforma o valor de seno para graus
 * sinRadianos: Transforma o valor de seno para radianos
 * cosGraus: Transforma o valor de cosseno para graus
 * cosRadianos: Transforma o valor de cosseno para radianos
 * tanGraus: Transforma o valor de tangente para graus
 * tanRadianos: Transforma o valor de tangente para radianos
 *
 */

float exponencial(float valorK, float valorX) { return pow(valorK, valorX); }

float logKX(float base, float logaritmando) { return log(logaritmando) / log(base); }

float sinGraus(float valorX) { return sin(valorX * M_PI / 180); }
float sinRadianos(float valorX) { return sin(valorX); }

float cosGraus(float valorX) { return cos(valorX * M_PI / 180); }
float cosRadianos(float valorX) { return cos(valorX); }

float tanGraus(float valorX) { return tan(valorX * M_PI / 180); }
float tanRadianos(float valorX) { return tan(valorX); }
/* FIM DAS FUNÇÕES DE SUPORTE */

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
    printf("O valor da função f(x) = %.4f eh: \n", valorK);
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
    printf("A reta da função eh: %s \n", sentidoReta);
    printf("Ela intercepta o eixo Y no ponto: %.4f \n", valorB);
    printf("O zero da função eh: %.4f \n", valorZeroDaFuncao);

    printf("\n");
    printf("O resultado da função f(x) = %.4f*%.4f + %.4f eh: \n", valorA, valorX, valorB);
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
    
    verticeX = (-(1) * valorB) / (2 * valorA);
    verticeY = (-(1) * delta) / (4 * valorA);
    sprintf(resultadoVertice, "Os vertices são: (%.4f , %.4f)", verticeX, verticeY);
    
    // Determinando o resultado da função
    resultadoFuncao = (valorA * pow(valorX, 2)) + (valorB * valorX) + valorC;

    printf("\n");
    printf("O sentido da função eh: %s \n", sentidoParabola);
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
    printf("O resultado da função f(x) = %.4f*%.4f^2 + %.4f*%.4f + %.4f eh: \n", valorA, valorX, valorB, valorX, valorC);
    printf("f(%.4f) = %.4f \n", valorX, resultadoFuncao);
}

int funcaoExponencial()
{
    printf("\n");
    printf("Você escolheu a opção de Função Exponencial -> f(x) = k^x");
    printf("\n");
    do
    {
        printf("Digite o valor de k:\n");
        while (scanf("%f", &valorK) != 1)
        {
            printf("Entrada inválida, digite um número real: \n");
            while (getchar() != '\n');
        }
        if (valorK <= 0 || valorK == 1)
            printf("Dígito inválido, tente novamente: \n");
    } while (valorK <= 0 || valorK == 1);

    printf("Digite o valor de x: \n");
    while (scanf("%f", &valorX) != 1)
    {
        printf("Entrada inválida, digite um número real: \n");
        while (getchar() != '\n');
    }

    /*Saidas*/
    if (valorK > 1)
    {
        printf("A curva eh crescente.\n");
    }
    else
    {
        printf("A curva eh decrescente.\n");
    }
    printf("f(x) eh: %.4f\n", exponencial(valorK, valorX));
}

int funcaoLogaritmica()
{
    printf("\n");
    printf("Você escolheu a opção de Função Logaritmica -> f(x) = log_k(x)");
    printf("\n");

    printf("Digite o valor de K (Base): \n");
    while (scanf("%f", &valorK) != 1 || valorK == 1 || valorK <= 0)
    {
        printf("Entrada inválida, digite um número real maior que zero e diferente de 1: \n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o valor de X (Logaritmando): \n");
    while (scanf("%f", &valorX) != 1 || valorX <= 0)
    {
        printf("Entrada inválida, digite um número real maior que zero: \n");
        while (getchar() != '\n')
            ;
    }
    if (valorK == 1)
    {
        printf("\nA função eh Constante em y");
    }
    else if (valorK > 1)
    {
        printf("\nA curva eh: Crescente");
    }
    else
    {
        printf("\nA curva eh: Decrescente");
    }

    printf("\nf(X): %.4f", logKX(valorK, valorX));
}

int funcaoSeno()
{
    printf("\n");
    printf("Você escolheu a opção de Função Seno -> f(x) = sin(x)");
    printf("\n");

    printf("Escolha o tipo do valor para utilizar:\n");
    printf("1 Entrada em Graus\n");
    printf("2 Entrada em Radianos\n");
    scanf("%d", &escolhaSubMenu);

    switch (escolhaSubMenu)
    {
    /*Graus*/
    case 1:
        printf("Digite o valor de x para calcular:\n");
        while (scanf("%f", &valorX) != 1)
        {
            printf("Entrada inválida, digite um número real: \n");
            while (getchar() != '\n')
                ;
        }
        printf("O valor de sin(%.4f graus) eh %.4f\n", valorX, sinGraus(valorX));
        break;

    /*Radianos*/
    case 2:
        printf("Digite o valor de x para calcular:\n");
        while (scanf("%f", &valorX) != 1)
        {
            printf("Entrada inválida, digite um número real: \n");
            while (getchar() != '\n')
                ;
        }
        printf("O valor de sin(%.4f radianos) eh %.4f\n", valorX, sinRadianos(valorX));
        break;

    default:
        printf("Entrada inválida, digite 1 ou 2: ");
        return 1;
    }
}

int funcaoCosseno()
{

    printf("\n");
    printf("Você escolheu a opção de Função Cosseno -> f(x) = cos(x)");
    printf("\n");

    printf("Escolha o tipo do valor para utilizar:\n");
    printf("1 Entrada em Graus\n");
    printf("2 Entrada em Radianos\n");
    scanf("%d", &escolhaSubMenu);

    switch (escolhaSubMenu)
    {
    /*Graus*/
    case 1:
        printf("Digite o valor de x para calcular:\n");
        while (scanf("%f", &valorX) != 1)
        {
            printf("Entrada inválida, digite um número real: \n");
            while (getchar() != '\n')
                ;
        }
        printf("O valor de cos(%.4f graus) eh %.4f\n", valorX, cosGraus(valorX));
        break;

    /*Radianos*/
    case 2:
        printf("Digite o valor de x para calcular:\n");
        while (scanf("%f", &valorX) != 1)
        {
            printf("Entrada inválida, digite um número real: \n");
            while (getchar() != '\n')
                ;
        }
        printf("O valor de cos(%.4f radianos) eh %.4f\n", valorX, cosRadianos(valorX));
        break;

    default:
        printf("Entrada inválida, digite 1 ou 2: ");
        return 1;
    }
}

int funcaoTangente()
{

    printf("\n");
    printf("Você escolheu a opção de Função Tangente -> f(x) = tan(x)");
    printf("\n");

    printf("Escolha o tipo do valor para utilizar:\n");
    printf("1 Entrada em Graus\n");
    printf("2 Entrada em Radianos\n");
    scanf("%d", &escolhaSubMenu);

    switch (escolhaSubMenu)
    {
    /*Graus*/
    case 1:
        printf("Digite o valor de x para calcular:\n");
        while (scanf("%f", &valorX) != 1 || valorX == 90 || (int)valorX % 180 == 90 || valorX == -90 || (int)valorX % 180 == -90)
        {
            printf("Entrada inválida, digite um número real e diferente de 90 e 270 (e seus multiplos): \n");
            while (getchar() != '\n')
                ;
        }
        printf("O valor de tan(%.4f graus) eh: %.4f\n", valorX, tanGraus(valorX));
        break;

    /*Radianos*/
    case 2:
        printf("Digite o valor de x para calcular:\n");
        while (scanf("%f", &valorX) != 1)
        {
            printf("Entrada inválida, digite um número real e diferente de pi/2 e 3pi/2: \n");
            while (getchar() != '\n')
                ;
        }
        printf("O valor de tan(%.4f radianos) eh: %.4f\n", valorX, tanRadianos(valorX));
        break;

    default:
        printf("Entrada inválida, digite 1 ou 2: ");
        return 1;
    }
}

int sair()
{
    printf("\n");
    printf("Saindo do programa...\n");
    exit(0);
}