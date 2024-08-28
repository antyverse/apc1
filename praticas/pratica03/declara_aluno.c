#include <stdio.h>

int main() { 

  int matricula = 0;
  int idade = 99; 
  float altura = 9.90f;
  float peso = 999.0f;
    char sexo = 'M';

  printf("Matricula: %08i\n", matricula);
  printf("Idade: %02i\n", idade);
  printf("Altura: %1.2f\n", altura);
  printf("Peso: %3.1f\n", peso);
  printf("Sexo: %c\n", sexo);

return 0; 
}