// Função Logarítmica

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float logKX(float base, float logaritmando) {
  return log(logaritmando) / log(base);
};

int main() {

  float valorK, valorX;

  printf("Digite o valor de K (Base): \n");
  while (scanf("%f", &valorK) != 1 || valorK == 1 || valorK <= 0) {
    printf("Entrada inválida, digite um número real maior que zero e diferente de 1: \n");
    while (getchar() != '\n')
      ;
  }

  printf("Digite o valor de X (Logaritmando): \n");
  while (scanf("%f", &valorX) != 1 || valorX <= 0) {
    printf("Entrada inválida, digite um número real maior que zero e diferente de 1: \n");
    while (getchar() != '\n')
      ;
  }
  if (valorX == 1) {
    printf("\nA função é constante");
  }else if (valorK > 1) {
    printf("\nA curva eh: Crescente");
  } else {
    printf("\nA curva eh: Decrescente");
  }

  printf("\nf(X): %.4f", logKX(valorK, valorX));

  return 0;
}
