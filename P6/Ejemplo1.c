#include <stdio.h>

int main()
{
int enteroNumero;
char caracterA = 65; // Convierte el entero a carácter ASCII.
double puntoFlotanteNumero;
// Asignar valor de teclado a una variable.
printf("Escriba un valor entero: ");
scanf("%i", &enteroNumero);
printf("Escriba un valor real: ");
scanf("%lf", &puntoFlotanteNumero);
// Imprimir valores con formato.
printf("\nImprimiendo las variables \a\n");
printf("\t Valor de Entero N%cmero = %i \a\n",163, enteroNumero);
printf("\t Valor de c%cracter = %c \a\n",160, caracterA);
printf("\t Valor de Punto Flotante N%cmero = %lf \a\n", 163, puntoFlotanteNumero);
printf("\t Valor de enteroNumero en base 16 = %x \a\n", enteroNumero);
printf("\t Valor de c%cracter en c%cdigo hexadecimal = %x\n", 160, 162, caracterA);
printf("\t Valor de Punto Flotante N%cmero\n", 163);
printf("\t En notaci%cn cient%cfica = %e\n",162, 161, puntoFlotanteNumero);

return 0;
}