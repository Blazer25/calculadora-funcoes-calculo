#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*Função exponencial*/
float exponencial(float valorK, float valorX) { return pow(valorK, valorX); }

int main() {
  float valorK, valorX;
    /*Entradas*/
    do {
      printf("Digite o valor de k:\n");
      scanf("%f", &valorK);
      if (valorK <= 0 || valorK == 1) printf("Dígito inválido, tente novamente\n");
    } while (valorK <= 0 || valorK == 1);
    do {
      printf("Digite o valor de x:\n");
      scanf("%f", &valorX);
      if (valorX == 1 || valorX == 0) printf("Dígito inválido, tente novamente\n");
    } while (valorX == 1 || valorX==0);

    /*Saidas*/
    if (valorK > 1) {
      printf("A curva é crescente.\n");
    } else {
      printf("A curva é decrescente.\n");
    }
    printf("f(x) eh: %.4f\n", exponencial(valorK, valorX));

  return 0;
}
