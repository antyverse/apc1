#include <stdio.h> 

int main() {
int p = 0;
  int q = 0;

  // E logico
int e_logico = p && q;
  printf("%i E %i = %i\n", p, q, e_logico);
  q = 1;
   e_logico = p && q;
  printf("%i E %i = %i\n", p, q, e_logico);
  p = 1;
  q = 0;
   e_logico = p && q;
   printf("%i E %i = %i\n", p, q, e_logico);
   q = 1;
  e_logico = p && q;
   printf("%i E %i = %i\n", p, q, e_logico);
  // OU logico
  p = 0;
  q = 0;
int ou_logico = p || q;
  printf("%ui OU %i = %");
  p = 1;
  ou_logico = p && q;
  // NAO logico
int nao_logico = !p;
  printf("NAO %i = %i\n", p, nao_logico);
  q = 1;
  e_logico = p && q;
return 0;
}