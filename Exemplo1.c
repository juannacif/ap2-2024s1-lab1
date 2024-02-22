#include <stdio.h>

int main(void) {
  
  int var1;
  int var2;

  printf("Insira um número inteiro: ");
  scanf("%d", &var1);
  printf("Insira outro número inteiro: ");
  scanf("%d", &var2);
  printf("%d + %d = %d\n", var1, var2, var1 + var2);
  printf("%d - %d = %d\n", var1, var2, var1 - var2 );
  printf("%d * %d = %d\n", var1, var2, var1 * var2);
  printf("%d / %d = %.2f\n", var1, var2, (double) var1 / var2);


  
}
