#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*Função seno graus*/
float sinGraus(float valorX) { return sin(valorX * M_PI / 180); }
/*Função seno radianos*/
float sinRadianos(float valorX) { return sin(valorX); }

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
    while (scanf("%f", &valorX) != 1) {
      printf("Entrada inválida, digite um número real\n");
      while (getchar() != '\n');
    }
    printf("O valor de sin(%.4f graus) eh %.4f\n", valorX, sinGraus(valorX));
  break;

  /*Radianos*/
  case 2:
    printf("Digite o valor de x para calcular:\n");
    while (scanf("%f", &valorX) != 1) {
      printf("Entrada inválida, digite um número real\n");
      while (getchar() != '\n');
    }
    printf("O valor de sin(%.4f radianos) eh %.4f\n", valorX, sinRadianos(valorX));
  break;

  default:
    printf("Digite um número entre 1 e 2!!!");
    return 1;
  }
  
  return 0;
}
