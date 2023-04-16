#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*Função exponencial*/
float exponencial(float k, float x) { return pow(k, x); }

int main() {
  float k, x;
    /*Entradas*/
    do {
      printf("Digite o valor de k:\n");
      scanf("%f", &k);
      if (k <= 0 || k == 1) printf("Dígito inválido, tente novamente\n");
    } while (k <= 0 || k == 1);
    do {
      printf("Digite o valor de x:\n");
      scanf("%f", &x);
      if (x == 1 || x == 0) printf("Dígito inválido, tente novamente\n");
    } while (x == 1 || x==0);

    /*Saidas*/
    if (k > 1) {
      printf("A curva é crescente.\n");
    } else {
      printf("A curva é decrescente.\n");
    }
    printf("f(x) eh: %.4f\n", exponencial(k, x));

  return 0;
}
