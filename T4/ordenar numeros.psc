Algoritmo ordenar
	Definir n, c1, c2 Como Entero
    Definir temp Como Real
    
    Escribir "Ingrese la cantidad de números a ordenar:"
    Leer n
    
    Dimension A[n]
    
    Para c1 <- 1 Hasta n Hacer
        Escribir "Ingrese el número ", c1, ":"
        Leer A[c1]
    FinPara
    
    Para c1 <- 1 Hasta n-1 Hacer
        Para c2 <- 1 Hasta n-c1 Hacer
            Si A[c2] > A[c2+1] Entonces
                temp <- A[c2]
                A[c2] <- A[c2+1]
                A[c2+1] <- temp
            FinSi
        FinPara
    FinPara
    
    Escribir "Números ordenados:"
    Para c1 <- 1 Hasta n Hacer
        Escribir A[c1]
    FinPara
FinAlgoritmo