#include <stdio.h>
int main() {
  int Numero, Divisor = 2;
  printf("Dame un numero:\n" );
  scanf("%d", &Numero);
  while (Numero>=Divisor)
  {
    while (Numero%Divisor == 0)
    {
      printf("%d x ", Divisor);
      Numero = Numero/Divisor;
    }
    Divisor = Divisor+1;
  }
  printf("%d", Numero);
  return 0;
}
