#include <stdio.h>
int main() {
//Declaración de variables
int entero;
float flotante;
double doble;
char caracter;
//Asignación de variables
entero = 14;
flotante = 3.5f;
doble = 6.8e10;
caracter ='A';
//Funciones de salida de datos en pantalla
printf("La variable entera tiene valor: %i \n", entero);
printf("La variable flotante tiene valor: %f \n", flotante);
printf("La variable doble tiene valor: %f \n", doble);
printf("La variable caracter tiene valor: %c \n", caracter);
printf("Entero como octal: %o \n Como Hexadecimal %X \n", entero, entero);
printf("Flotante con precisión: %5.2f \n", flotante);
printf("Doble con precisión: %5.2f \n", doble);
printf("Carácter como entero: %d \n", caracter);
return 0;
}