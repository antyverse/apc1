#include <stdio.h> 

int main() {
  char tecla = '\0'; // caractere nulo
  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar(); //limpa o \n
  printf("Você digitou: %c\n", tecla);

  printf("Digite outra tecla: ");
  deu_certo = scanf("%c", &tecla);
  getchar(); // limpa o \n
  printf("Você digitou: %c\n", tecla);

  char nome[31];
  printf("Entre com um nome: ");
  deu_certo = scanf("%[^\n]s", nome); // n tem & quando for usar %s
  printf("Você digitou: %s\n", nome);

  return 0;
}