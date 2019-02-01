/*
Autor: Hector A. V. Cosgalla
Entrada:
Salida:
Procedimiento:
*/
#include "stdio.h"
#include "conio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  int Primo1, Primo2, Primo3, Primo5, n, resultado, Cont2, Cont3, Cont5;
  Primo1 = 1;
  Primo2 = 2;
  Primo3 = 3;
  Primo5 = 5;
  Cont2 = 0;
  Cont3 = 0;
  Cont5 = 0;
  n = 0;
  resultado = 0;
  printf("Escribe un numero entero:\n");
  scanf("%d", &n);
  while (n>1) {
    if (n%Primo2 == 0) {
      n = n/Primo2;
      Cont2 = Cont2 + 1;
    } else
      {
        if (n%Primo3 == 0) {
          n = n/Primo3;
          Cont3 = Cont3 + 1;
        } else
          {
            if (n%Primo5 == 0) {
              n = n/Primo5;
              Cont5 = Cont5 + 1;
            } else
              {
                break;
              }
          }
      }
  }
  if (n == 1) {
    resultado = (Primo5*Cont5)+(Primo3*Cont3)+(Primo2*Cont2)+n;
  }
  else {
    resultado = Primo1+n;
  }
  printf("El resultado de la suma de sus primos es %d\n",resultado);
  getch(); return 0;
}
