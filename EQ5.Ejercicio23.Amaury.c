/*
Autor: AMAURY MORALES CERECEDO

Entrada: Cualquier numero, puede ser flotante y negativo.

Salida: e^x.

Procedimiento general: Utilizando X se hace una serie que toma el valor anterior y lo eleva a X, despues lo divide por la posicion.
Tomando en cuenta de que X! = (X-1)!*X , obviamente.

Notas: Para utilizar numeros fraccionarios, utilizar su equivalente flotante. Puede que numeros muy grandes la respuesta sea equivalente
a infinito.

*/

//PREMISA//
/*
Determinar lo siguiente:
e^x= 1 + x + x^2/2! + x^3/3! + ... + x^n/n!
*/

#include <stdio.h>

//DECLARACIONES//
float elevacion; //El numero por el cual e se encuentra elevado.
int iter = 30; //Utilizado para limitar el ciclo.
float uso = 1; //Uso temporal.
float res = 1; //Respuesta.

int i; //Para el ciclo.


int main()
{
 //ENTRADAS//
 printf("Por favor, introduzca x: ");
 scanf("%f", &elevacion);
 ////////////

 //PROCEDIMIENTO//
 for (i = 1; i<=iter; i++)
 {
  uso = (uso*elevacion)/i;
  res = res + uso;
 }
 /////////////////

 //SALIDA//
 printf("Respuesta: %f\n", res);
 /////////

 scanf("%f", &uso); //GetChar no me funciono aqui, asi que solo reescribo una variable.

 return 0;
}
