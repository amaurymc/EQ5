#include "stdio.h"

int main() {
  int n, i, m;
  printf("Ingresa un numero:\n");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    for (m = 0; m < n; m++)
    {
      if ( i <= m ) {
        printf("%d%d  ", i, m );
      }
      else{
        printf("    " );
      }
    }
    printf("\n");
  }
  return 0;
}
