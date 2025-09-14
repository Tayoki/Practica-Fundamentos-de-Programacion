//Continuar
Funcion Respuesta <- Continuar ( Respuesta )
	Imprimir " "
	Imprimir "Desea realizar otro calculo"
	Escribir "1 para SI y 2 para NO"
	Leer Respuesta
Fin Funcion

//Suma
Funcion RS <- Suma ( Num1, Num2 )
	Limpiar Pantalla
	Imprimir "++++++++++++++++++ SUMA +++++++++++++++++++++"
	Escribir "Por favor ingrese los digitos que desee sumar"
	Definir Num1S, Num2S Como Real
	Leer Num1S
	Leer Num2S
	RS <- Num1S + Num2S
	Escribir "El resultado de la suma es: ", Num1S, " + ", Num2S, " = ", RS
Fin Funcion

//Resta
Funcion RR <- Resta ( Num1, Num2)
	Limpiar Pantalla
	Imprimir "------------------ RESTA --------------------- "
	Escribir "Por favor ingrese los digitos que desee restar"
	Leer Num1
	Leer Num2
	RR <- Num1 - Num2
	Escribir "El resultado de la resta ", Num1, " - ", Num2, " = ", RR
Fin Funcion

//Multiplicacion
Funcion RM <- Multiplicacion (  Num1, Num2 )
	Limpiar Pantalla
	Imprimir "**************** MULTIPLICACIÓN ******************* "
	Escribir "Por favor ingrese los digitos que desee multiplicar"
	Leer Num1
	Leer Num2
	RM <- Num1 * Num2
	Escribir "El resultado de la multiplicación ", Num1, " * ", Num2, " = ", RM
Fin Funcion

//Division
Funcion RD <- Division (  Num1, Num2 )
	Limpiar Pantalla
	Imprimir "///////////////// DIVISIÓN ////////////////////"
	Escribir "Por favor ingrese los digitos que desee dividir"
	Leer Num1
	Leer Num2
	Mientras Num2 == 0 Hacer
		Imprimir "Por favor recuerda que el segundo dígito no"
		Imprimir "puede ser 0, ingrese otra cantidad."
		Leer Num2
	FinMientras
	RD <- Num1/Num2
	Escribir "El resultado de la división ", Num1, " / ", Num2, " = ", RD
Fin Funcion

//Introduccion
Funcion a <- Introduccion ( a )
	Imprimir ("================== BIENVENIDO AL PROGRAMA CALCULADORA ==================")
	Imprimir ("Por favor escriba un número en función del cálculo que se desea realizar")
	Imprimir ("1 + para SUMA")
	Imprimir ("2 - para RESTA")
	Imprimir ("3 * para MULTIPLICACIÓN")
	Imprimir ("4 / para DIVISIÓN")
	Leer a
Fin Funcion



Algoritmo Calculadora
	
	
		Repetir
			a <- Introduccion (a)
			Segun a Hacer
			1:
				R <- Suma(Num1S, Num2S)
			2:
				R <- Resta (Num1, Num2)
			3:
				R <- Multiplicacion (Num1, Num2)
			4:
				R <- Division (Num1, Num2)
			De Otro Modo:
				Escribir " "
				Escribir ("Usted esta a punto de abandonar la calculadora")
		Fin Segun
		Respuesta <- Continuar (Respuesta)
		Limpiar Pantalla
	Mientras que (Respuesta == 1)
	
	
	
	
FinAlgoritmo
