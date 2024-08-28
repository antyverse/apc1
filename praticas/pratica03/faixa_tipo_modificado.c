#include <limits.h>
#include <float.h>
#include <stdio.h>

int main() { 
  printf("o tipo 'unsigned char' aceita valores entre %i e %i\n.", 0, UCHAR_MAX);
printf("o tipo 'short int' aceita valores entre %i e %i\n.", SHRT_MIN, SHRT_MAX);
  printf("o tipo 'unsigned short int' aceita valores entre %i e %i.\n", 0, USHRT_MAX);
  printf("o tipo 'long int' aceita valores entre %li e %li\n.", LONG_MIN, LONG_MAX);
 printf("o tipo 'double' aceita valores entre %LE e %LE\n.", LDBL_MIN, LDBL_MAX);
  
  
  return 0; 
}