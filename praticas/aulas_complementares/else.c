#include <stdio.h>
#include <string.h>

int main() {

int numero;
printf("Tente descobrir o número correto!\n");
printf("Digite um número entre 0 a 10: ");
scanf("%d", &numero);

  if(numero<5) printf("O numero cadastrado é maior!\n");
  if(numero>5) printf("O numero cadastrado é menor!\n");
  if(numero==5) printf("Você acertou!\n");

  return 0;
} 

