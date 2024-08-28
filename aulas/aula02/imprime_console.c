#include <stdio.h> //biblioteca entrada e saída

int main() { 
  //imprime um texto
printf("um texto sempre entre aspas duplas\n\n");
  //imprime um número inteiro
  printf("%i\n", 10);
  printf("%i %i\n", 11, 22);
  printf("%5i\n", 110);
  printf("05i\n", 1);

  //imprime um número decimal
  printf("%f\n", 10.51234);
  printf("%10.2f\n", 10.51234);
  printf("%.100f\n", 2.2);

  //imprime um caractere aspas simples
  printf("%c\n", 'A');
  printf("%c\n", 68);

  //imrpime um string
  printf("%s\n", "Bom dia!");
  printf("%30s\n", "Quero Café!");
  printf("%-30s\n", "Quero Café!");

  return 0; //retorno 0
}