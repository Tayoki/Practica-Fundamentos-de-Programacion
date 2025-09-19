Algoritmo Buscar_arreglo
	
	Definir n, i Como Entero
	Definir x Como Real
	Definir encontrado Como Logico
	
	Escribir "Ingrese la cantidad de números:"
	Leer n
	
	Dimension A[n]
	
	Para i <- 1 Hasta n Hacer
		Escribir "Ingrese el número ", i, ":"
		Leer A[i]
	FinPara
	
	Escribir "Ingrese el número a buscar:"
	Leer x
	
	encontrado <- Falso
	
	Para i <- 1 Hasta n Hacer
		Si A[i] = x Entonces
			encontrado <- Verdadero
			Escribir "El número ", x, " está en el índice: ", i
		FinSi
	FinPara
	
	Si encontrado = Falso Entonces
		Escribir "El número ", x, " No existe en el arreglo."
	FinSi
FinAlgoritmo
