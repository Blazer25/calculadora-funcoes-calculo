#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*Função tangente graus*/
float tanGraus(float valorX) { return tan(valorX * M_PI / 180); }
/*Função tangente radianos*/
float tanRadianos(float valorX) { return tan(valorX); }

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
    printf("Digite o valor de x para calcular:\n");
    while (scanf("%f", &valorX) != 1 || valorX == 90 || (int)valorX % 180 == 90 || valorX == -90 || (int)valorX % 180 == -90 ) {
      printf("Entrada inválida, digite um número real e diferente de 90 e 270 (e seus multiplos)\n");
      while (getchar() != '\n');
    }
    printf("O valor de tan(%.4f graus) eh %.4f\n", valorX, tanGraus(valorX));
  break;

  /*Radianos*/
  case 2:
    printf("Digite o valor de x para calcular:\n");
    while (scanf("%f", &valorX) != 1 ) {
      printf("Entrada inválida, digite um número real\n");
      while (getchar() != '\n');
    }
    printf("O valor de tan(%.4f radianos) eh %.4f\n", valorX, tanRadianos(valorX));
  break;

  default:
    printf("Digite um número entre 1 e 2!!!");
    return 1;
  }
  
  return 0;
}