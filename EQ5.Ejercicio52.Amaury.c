/*
Autor: AMAURY MORALES CERECEDO

Entrada: El valor a invertir, numero de periodos, y la taza de interes.

Salida: El valor futuro.

Procedimiento general: Se utiliza la formula para calcular el valor a futuro con la funcion pow.

Notas: La tasa de interes se pasa automaticamente al 100%.
Ejemplo: Si queremos el 25% de interes, solo hace falta escribir 25.

En interes, si queremos calcular meses, se tendra que convertir los meses a años.
Si queremos 5 años con 3 meses, tenemos que hacer 3/12 para poder escribir en el programa ''5.25'' lo cual es equivalente.

Se pueden usar numeros negativos para calcular perdidas. Los fraccionarios se deben pasar a flotantes.

*/

//PREMISA//
/*

El  valor  futuro  de  cierta  cantidad  P  sometida  a  un  interés  i  durante  n períodos se calcula con la fórmula:
F = P ( 1 + i / 100 ) n
Escribe el programa que permita obtener el valor futuro de la inversión.
Para terminar se debe escribir un valor 0.

*/

#include <stdio.h>
#include <math.h>

//DECLARACIONES//
float P; //Valor invertido
float i; //Tasa de interes.
float n; //Numero de periodos
float VF; //Respuesta. Valor Futuro.

int main()
{
 //ENTRADAS//
 printf("Por favor, introduzca el monto a invertir: ");
 scanf("%f", &P);
 printf("Por favor, introduzca el total de periodos: ");
 scanf("%f", &n);
 printf("Por favor, introduzca el interes: ");
 scanf("%f", &i);
 i = i/100;
 ////////////

 //PROCEDIMIENTO//
 VF = P*(pow(1+i, n));
 /////////////////

 //SALIDA//
 printf("El valor futuro es: %f\n", VF);
 /////////

 scanf("%f", &i); //GetChar no me funciono aqui, asi que solo reescribo una variable.

 return 0; //Creo que esto se refiere al ''valor 0''.
}
