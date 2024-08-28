#include <stdio.h>

int main() { 

  int matricula = 2422082032;
  int idade = 99; 
  float altura = 9.90f;
  float peso = 999.0f;
    char sexo = 'M';

  printf("Matricula: %li\n", matricula); // 'li' significa long int, usado para inteiro longos
  printf("Idade: %02i\n", idade);
  printf("Altura: %1.2f m\n", altura);
  printf("Peso: %3.1f kg\n", peso);
  printf("Sexo: %c\n", sexo);

return 0; 
}