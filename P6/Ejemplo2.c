#include <stdio.h>

int main()
{
short ocho, cinco, cuatro, tres, dos, uno;
// 8 en binario: 0000 0000 0000 1000
ocho = 8;
// 5 en binario: 0000 0000 0000 0101
cinco = 5;
// 4 en binario: 0000 0000 0000 0100
cuatro = 4;
// 3 en binario: 0000 0000 0000 0011
tres = 3;
// 2 en binario: 0000 0000 0000 0010
dos = 2;
// 1 en binario: 0000 0000 0000 0001
uno = 1;
printf("Operadores aritm%cticos\n",130);
printf("5 modulo 2 = %d\n",cinco%dos);
printf("Operadores l%cgicos\n", 162);
printf("8 >> 2 = %d\n",ocho>>dos);
printf("8 << 1 = %d\n",ocho<<1);
printf("5 & 4 = %d\n",cinco&cuatro);
printf("3 | 2 = %d\n",tres|dos);
printf("\n");
return 0;
}

