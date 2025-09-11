Algoritmo Ejemplo2
	
	Definir Num1, Num2 como Real
	
	Imprimir ("Dame un valor que se encuentre entre los números Reales")
	Leer Num1
	Imprimir ("Dame un valor diferente al anterior, que se encuentre entre los números Reales ")
	Leer Num2
	
	Mientras (Num1 == Num2) Hacer
		Imprimir ("Por favor dame un valor diferente a 2 que se encuentre entre los números Reales")
		Leer Num2
	FinMientras
	
	Escribir  "+++++++++++++++++++++++++++++++++++ "
	
	Si (Num1 > Num2) Entonces
		Escribir  "El número ", Num1," es mayor que el número ", Num2
	Sino 
		Escribir  "El número ", Num2," es mayor que el número ", Num1
	FinSi
	
	Escribir  "----------------------------------- "
	
FinAlgoritmo
