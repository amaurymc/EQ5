=begin
Autor: AMAURY MORALES CERECEDO

Entrada: Cualquier numero, puede ser flotante y negativo.

Salida: e^x.

Procedimiento general: Utilizando X se hace una serie que toma el valor anterior y lo eleva a X, despues lo divide por la posicion.
Tomando en cuenta de que X! = (X-1)!*X , obviamente.

Notas: Para utilizar numeros fraccionarios, utilizar su equivalente flotante. Puede que numeros muy grandes la respuesta sea equivalente
a infinito.

=end

#//PREMISA//
=begin
Determinar lo siguiente:
e^x= 1 + x + x^2/2! + x^3/3! + ... + x^n/n!
=end

def main()
 #//DECLARACIONES//

 elevacion = 0; #//El numero por el cual e se encuentra elevado.
 iteracion = 30; #//Utilizado para limitar el ciclo.
 usoTemp = 1; #//Uso temporal.
 respuesta = 1; #//Respuesta.
 cont = 0; #//Para el ciclo.

 #//ENTRADAS//
 print "Por favor, introduzca x: "
 elevacion = gets.chomp.to_f
 #////////////

 #//PROCEDIMIENTO//
 for cont in 1..iteracion
  usoTemp = (usoTemp*elevacion)/cont
  respuesta = respuesta + usoTemp
 end
 #/////////////////

 #//SALIDA//
 print "Respuesta: #{respuesta}"
 #/////////

 gets
end

main()
