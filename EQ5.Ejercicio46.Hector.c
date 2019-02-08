#include <stdio.h>

int main(){
float Desc1 = .05, Desc2 = .11, Desc3 = .18, Desc4 = .25, TotalN, Descuento1 = 0, Descuento2 = 0, Descuento3 = 0, Descuento4 = 0;
float PrecDesc1 = 0, PrecDesc2 = 0, PrecDesc3 = 0, PrecDesc4 = 0, TotalDesc = 0, TotalCaja = 0, TotalPago = 0, PrecioN = 0;
int n, Articulos, Cliente = 0;
char Decs = 'S';
  do {
    int n = 0;
    int TotalN = 0;
    printf("Ingrese la cantidad de articulos\n");
    scanf("%d",&Articulos);
    while (n<Articulos) {
      n = n + 1;
      printf("Ingrese el precio del articulo %d\n", n);
      scanf("%f", &PrecioN);
      TotalN = TotalN + PrecioN;
    }
    if (TotalN < 500) {
      printf("El total de compra es %f\n", TotalN );
  		printf("No obtuvo descuento\n" );
  		TotalPago = TotalN;
    }
    else {
      if (TotalN >= 500 && TotalN <1000) {
        PrecDesc1 = TotalN * Desc1;
				TotalPago = TotalN - PrecDesc1;
        printf("El total de compra es %f\n", TotalN );
    		printf("Tiene un descuento de %f\n", PrecDesc1);
    		Descuento1 = Descuento1 + PrecDesc1;
      }
      else {
        if (TotalN >= 1000 && TotalN < 7000) {
          PrecDesc2 = TotalN * Desc2;
  				TotalPago = TotalN - PrecDesc2;
          printf("El total de compra es %f\n", TotalN );
      		printf("Tiene un descuento de %f\n", PrecDesc2);
      		Descuento2 = Descuento2 + PrecDesc2;
        }
        else {
          if (TotalN >=7000 && TotalN <15000) {
            PrecDesc3 = TotalN * Desc3;
    				TotalPago = TotalN - PrecDesc3;
            printf("El total de compra es %f\n", TotalN );
        		printf("Tiene un descuento de %f\n", PrecDesc3);
        		Descuento3 = Descuento3 + PrecDesc3;
          }
          else
          {
            if (TotalN >= 15000) {
              PrecDesc4 = TotalN * Desc4;
      				TotalPago = TotalN - PrecDesc4;
              printf("El total de compra es %f\n", TotalN );
          		printf("Tiene un descuento de %f\n", PrecDesc4);
          		Descuento4 = Descuento4 + PrecDesc4;
            }
          }
        }
      }
    }
    Cliente = Cliente + 1;
    TotalCaja = TotalCaja + TotalPago;
    TotalDesc = Descuento1 + Descuento2 + Descuento3 + Descuento4;
    printf("Desea capturar otro cliente? S/N \n" );
    scanf("%s", Decs);
  } while(Decs == 'N' || Decs == 'n');
  printf("Se atendio a %d Clientes \n", Cliente );
  printf("El total de venta fue de: %f\n", TotalCaja );
  printf("Se desconto un total de: %f\n", TotalDesc);
  return 0;
}
