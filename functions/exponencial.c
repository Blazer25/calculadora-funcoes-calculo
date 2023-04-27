#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*Função exponencial*/
float exponencial(float valorK, float valorX) { return pow(valorK, valorX); }

int main() {
  float valorK, valorX;
  /*Entradas*/
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
