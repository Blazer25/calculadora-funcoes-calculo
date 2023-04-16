#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*Função coseno graus*/
float cosGraus(float valorX) { return cos(valorX * M_PI / 180); }
/*Função conseno radianos*/
float cosRadianos(float valorX) { return cos(valorX * M_PI); }

int main() {
  float valorX;
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
        scanf("%f", &valorX);
        if (valorX < 0) printf("Dígito inválido, tente novamente\n");
      } while (valorX < 0);
      printf("O valor de cos(%.4f graus) eh %.4f\n", valorX, cosGraus(valorX));
      break;

    /*Radianos*/
    case 2:
      do {
        printf("Digite o valor de x para calcular:\n");
        scanf("%f", &valorX);
        if (valorX < 0) printf("Dígito inválido, tente novamente\n");
      } while (valorX < 0);
      printf("O valor de cos(%.4f radianos) eh %.4f\n", valorX, cosRadianos(valorX));
      break;
    }
    
  return 0;
}
