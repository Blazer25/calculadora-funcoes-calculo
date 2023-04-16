#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*Função coseno graus*/
float cosGraus(float x) { return cos(x * M_PI / 180); }
/*Função conseno radianos*/
float cosRadianos(float x) { return cos(x * M_PI); }

int main() {
  float k, x;
  int escolha;
 
/*Menu inicial*/
    printf("Escolha o tipo do valor para utilizar:\n");
    printf("1 Entrada em Graus\n");
    printf("2 Entrada em radianos\n");
    scanf("%d", &escolha);

    switch (escolha) {
    /*Graus*/
    case 1:
      do {
        printf("Digite o valor de x para calcular:\n");
        scanf("%f", &x);
        if (x < 0) printf("Dígito inválido, tente novamente\n");
      } while (x < 0);
      printf("O valor de cos(%.4f graus) eh %.4f\n", x, cosGraus(x));
      break;

    /*Radianos*/
    case 2:
      do {
        printf("Digite o valor de x para calcular:\n");
        scanf("%f", &x);
        if (x < 0) printf("Dígito inválido, tente novamente\n");
      } while (x < 0);
      printf("O valor de cos(%.4f radianos) eh %.4f\n", x, cosRadianos(x));
      break;
    }
    
  return 0;
}
