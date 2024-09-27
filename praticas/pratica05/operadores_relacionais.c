#include <stdio.h>

int main() {

int numero1;
  int numero2;

  printf("Digite um número inteiro: ");
  int deu_certo = scanf("%i", &numero1);
  printf("Entre com outro número inteiro: ");
  scanf("%i", &numero2);

  printf("%i é igual %i? %i\n", numero1, numero2, numero1 == numero2);
  printf("%i é diferente de %i? %i\n", numero1, numero2, numero1 != numero2);
  printf("%i é menor que %i? %i\n", numero1, numero2, numero1 < numero2);
  printf("%i é menor ou igual a %i? %i\n", numero1, numero2, numero1 <= numero2);
  printf("%i é maior que %i? %i\n", numero1, numero2, numero1 >= numero2);
printf("Congrats for the Work! You´re doing Great Mate!\n");
  
  
  
  
  return 0;
}