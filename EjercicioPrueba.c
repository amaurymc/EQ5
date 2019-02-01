/*
Autor: AMAURY MORALES CERECEDO

Entrada: Cualquier numero entero positivo que no sea mas grande que 1454. (n)

Salida: La suma de los factores primos. (sum)

Procedimiento general: Verifica todos los factores posibles de el numero n, dejando solo los que son primos y los almacena en una lista.
Despues, esta lista se encarga de calcular cuantas veces se repite cada factor en cada numero antes de que ya no se pueda seguir con ese
mismo factor, y se pasa al siguiente. Al finalizar, se calcula la suma de los factores primos de n y se le suma 1 porque el 1 tambien es
factor, aunque no sea primo.

Notas: El numero maximo admitido que puede tener n varia en la memoria del sistema y del compilador, en mi caso fue 1457, pero puede
ser aun menor en dispositivos/compiladores que sean de bajo rendimiento. No calculara los factores de numeros como 0 y negativos.
*/

//PREMISA//
//Dado cierto numero n, calcular suma de sus factores primos.

#include <stdio.h>
#include <math.h>

//DECLARACIONES//
float primo = 1; //En el ciclo, decide que numero primo poner en la tabla de factores.
int cont = 0; //El contador del ciclo que tambien sirve como posicionador en la tabla de factores.
int cont2 = 0; //El contador del ciclo anidado que determina si nuestro factor es primo.
int cont3 = 0; //El contador para sumar en la tabla de factores.

float comFact; //Para comprobar si nuestro numero es factor.
float comPrim; //Para comprobar si nuestro numero es primo.
float factDelta; //Para factorizar nuestro numero.
int rep; //Repeticion del factor primo.
float rest; //Lo que resta de nuestro numero por factorizar.
int ban; //Bandera para detener la factorizacion de un solo factor.
int sum; //La suma de los factores primos.

int factores[99999999]; //Agregar mas espacio a este array generara un error.

//ENTRADAS//
int n = 18;   //El numero a factorizar. Solo admite numeros positivos enteros que no son mas grandes que 1457 por limitaciones de memoria
///////////

int main(void)
{
 if (n <= 0)
 {
  printf("El numero introducido es invalido para el programa");
 }
 else
 {

  ///PROCEDIMIENTO///
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  for (cont = 0; primo < n+1; primo++)
 	{
   //printf("\n");
   //printf("Verificar si   %.0f   es primo\n", (primo));
 	 comFact = n/primo;
   //printf("Al dividir nuestro numero entre el supuesto primo, da  %.2f\n", (comFact));
 	 if(comFact==floor(comFact))
 	 {
    comPrim = 0;
    for (cont2 = 1; cont2 < primo+1; cont2++)
    {
     //printf(">>>  %d\n", (cont2));
     if (primo/cont2 == floor(primo/cont2))
     {
      comPrim = comPrim+1;
     }
    }
    if (comPrim == 2)
    {
     factores[cont] = primo;
     printf("\n");
     printf(">> EL   %.0f   SI ES UN FACTOR PRIMO DE NUESTRO NUMERO << \n", primo);
    }
    else
    {
     //printf("El   %.0f   si es un factor pero no es primo \n", primo);
    }
 	 }
   else
   {
    //printf("El   %.0f   no es un factor de nuestro numero \n", primo);
   }
 	 cont++;
 	}

  printf("\n");

  rest = n;
  for (cont3 = 1; cont3 < n+1; cont3++)
  {
   rep = 0;
   ban = 0;
   if (factores[cont3] != 0 && factores[cont3] != 1 && factores[cont3] != n && ban == 0)
   {
    //printf("Posicion actual %d primo %d \n", cont3,factores[cont3]);
    factDelta = rest/factores[cont3];
    do
    {
     if (factDelta==floor(factDelta) && ban == 0)
     {
      if ((rest/factores[cont3])==floor(rest/factores[cont3]) && ban == 0)
      {
       rep = rep+1;
       rest = rest/factores[cont3];
      }
      else
      {
       ban = 1;
       //printf("Ya no se puede multiplicar mas por este factor (%d) \n", factores[cont3]);
      }
     }
    }
    while (ban == 0);
    printf("El factor %d se repite %d veces \n", factores[cont3],rep);
    sum += factores[cont3]*rep;
   }
  }
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////

  //SALIDA//
  printf("La suma de los factores primos es %d\n", sum+1); //Aqui se le puede quitar el +1 si se desea ver solo los factores primos.
  /////////
  getchar();
  return 0;
 }
}

/*QA:
Entradas:
Salida: */
