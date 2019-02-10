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

int main()
{

 //DECLARACIONES//
 float elevacion, usoTemp, respuesta;
 int iteracion, cont;

 elevacion = 0; //El numero por el cual e se encuentra elevado.
 iteracion = 30; //Utilizado para limitar el ciclo.
 usoTemp = 1; //Uso temporal.
 respuesta = 1; //Respuesta.
 cont = 0; //Para el ciclo.

 //ENTRADAS//
 printf("Por favor, introduzca x: ");
 scanf("%f", &elevacion);
 ////////////

 //PROCEDIMIENTO//
 for (cont = 1; cont<=iteracion; cont++)
 {
  usoTemp = (usoTemp*elevacion)/cont;
  respuesta = respuesta + usoTemp;
 }
 /////////////////

 //SALIDA//
 printf("Respuesta: %f\n", respuesta);
 /////////

 scanf("%f", &usoTemp); //GetChar no me funciono aqui, asi que solo reescribo una variable.

 return 0;
}
