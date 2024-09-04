#include <stdio.h>

int main() {

  int matricula = 0;
  float a1 = 0.0f;
  float a2 = 0.0f;
  float media = 0.0f;

  printf("Matricula: ");
  scanf("%i", &matricula);
  getchar();

  printf("A1: ");
  scanf("%f", &a1);
  getchar();

  printf("A2: ");
  scanf("%f", &a2);
  getchar();

  media = (a1+a2)/2;
  
  printf("A sua media é %.2f\n", media);
  

  

  
  return 0;
}