Algoritmo Buscar_arreglo
	
	Definir n, i Como Entero
	Definir x Como Real
	Definir encontrado Como Logico
	
	Escribir "Ingrese la cantidad de n�meros:"
	Leer n
	
	Dimension A[n]
	
	Para i <- 1 Hasta n Hacer
		Escribir "Ingrese el n�mero ", i, ":"
		Leer A[i]
	FinPara
	
	Escribir "Ingrese el n�mero a buscar:"
	Leer x
	
	encontrado <- Falso
	
	Para i <- 1 Hasta n Hacer
		Si A[i] = x Entonces
			encontrado <- Verdadero
			Escribir "El n�mero ", x, " est� en el �ndice: ", i
		FinSi
	FinPara
	
	Si encontrado = Falso Entonces
		Escribir "El n�mero ", x, " No existe en el arreglo."
	FinSi
FinAlgoritmo
