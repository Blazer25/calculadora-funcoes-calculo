// Função Logarítmica

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float logvKX(float base, float logaritmando) {
  return log(logaritmando) / log(base);
};

int main() {

  float valorK, valorX;

  do {
    printf("Informe o valor de K (Base): \n");
    scanf("%f", &valorK);
    if (valorK == 1 || valorK <= 0)
      printf("O valor de K não pode ser: %f\n", valorK);
  } while (valorK == 1 || valorK <= 0);

  do {
    printf("Informe o valor de X (Logaritmando): \n");
    scanf("%f", &valorX);
    if (valorX <= 0) printf ("O valor de X não pode ser: %f\n", valorX);
  } while (valorX <= 0);

  if (valorK > 1) {
    printf("\nA curva eh: Crescente");
  } else {
    printf("\nA curva eh: Decrescente");
  }

  printf("\nf(vX): %.4f", logvKX(valorK, valorX));

  return 0;
}
