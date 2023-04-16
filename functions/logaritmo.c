// Função Logarítmica

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float logkx(float base, float logaritmando) {
  return log(logaritmando) / log(base);
};

int main() {
  float k, x;

  do {
    printf("Informe o valor de K (Base): \n");
    scanf("%f", &k);
    if (k == 1 || k <= 0) printf("O valor de K não pode ser: %f\n", k);
  } while (k == 1 || k <= 0);

  do {
    printf("Informe o valor de X (Logaritmando): \n");
    scanf("%f", &x);
    if (x <= 0) printf ("O valor de X não pode ser: %f\n", x);
  } while (x <= 0);

  if (k > 1) {
    printf("\nA curva eh: Crescente");
  } else {
    printf("\nA curva eh: Decrescente");
  }

  printf("\nf(x): %.4f", logkx(k, x));

  return 0;
}