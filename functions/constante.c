//Função constante

#include <stdio.h>
#include <stdlib.h>

float valorX = 0, valorK = 0;

int main()
{
    printf("Digite o valor de X: \n");
    while (scanf("%f", &valorX) != 1)
    {
        printf("Entrada inválida, digite um número real\n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o valor de K: \n");
    while (scanf("%f", &valorK) != 1)
    {
        printf("Entrada inválida, digite um número real\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");
    printf("O valor da função f(x) = %.4f é: \n", valorK);
    printf("f(%.4f) = %.4f", valorX, valorK);
    return 0;
}
