#include <stdio.h>

int main(){

  int numero;
int incremento = numero; 
  int decremento = numero;

  printf("Digite um número inteiro: ");
  scanf("%d", &numero);
  
  printf("O pré-incremento do número %i é %i\n", numero, ++incremento);
  printf("O pré-decremento do número %i é %i\n", numero, --decremento);
printf("O pós-incremento do número %i é %i\n", numero, incremento++);
printf("O pós-decremento do número %i é %i\n", numero, decremento--);

  return 0;
}