#include <stdio.h>
#include <math.h> 
#include <stdlib.h>


// Estructuras 
typedef struct 
{
    double x, y;
    int  z;
}coordenadas;



////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                Funciones                                                   //

//Valor suma de X y Y
void Suma (coordenadas datos[], int n, double *suma0X, double *suma0Y, double *suma1X, double *suma1Y){
    
    for (int i = 0; i <= n; i++)
    {
        if (datos[i].z == 0){
            *suma0X += datos[i].x;
            *suma0Y += datos[i].y;
        } else{
            *suma1X += datos[i].x;
            *suma1Y += datos[i].y;
        } 
    }
}

//Valor suma de XY
void Multiplicacion (coordenadas datos[], int n, double *sumxy0, double *sumxy1){
        double xy0=0;
        double xy1=0;
    for (int i=0; i<=n; i++){
        if (datos[i].z == 0){
            xy0 = datos[i].x * datos[i].y;
            *sumxy0 += xy0;
        }else{
            xy1 = datos[i].x * datos[i].y;
            *sumxy1 += xy1;
        }
    }
}

//Valor Suma X^2 
void Xcuadrada (coordenadas datos[], int n, double *sum0X2, double *sum1X2){
    double x02=0;
    double x12=0;    
    for (int i=0; i<=n; i++){
        if (datos[i].z == 0){
            x02 = pow(datos[i].x, 2);
            *sum0X2 += x02;
        }else{
            x12 = pow (datos[i].x, 2);
            *sum1X2 += x12;
        }
    }
}

//Minimos cuadreados termino 
void MC0 (double *m, double *b, int n, double sumX, double sumY, double sumX2, double sumxy){
    *m = ((n*sumxy)-(sumX*sumY))/((n*sumX2) - pow(sumX,2));
    *b = ((sumY * sumX2)-(sumxy*sumX))/((n*sumX2) - pow(sumX,2));
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                             Principal                                       

int main () 
{
    // Variables 
    int a =0;
    int n0 = 0, n1 = 0;
    double sumx0 = 0;
    double sumy0 = 0;
    double sumx1 = 0;
    double sumy1 = 0;
    double sumxy0 = 0;
    double sumxy1 = 0;
    double sumX20 = 0;
    double sumX21 =0;
    double mc0 = 0;
    double mc1 = 0;
    double b0 = 0;
    double b1 = 0;


    coordenadas datos [100];
    FILE *f = fopen ("puntos_ambiguos_prueba.txt", "r");
    if (!f){
        printf ("Archivo no encontrado");
        return 1;
    }
    
    while ((fscanf (f, "%lf %lf %d", &datos[a].x, &datos[a].y, &datos[a].z ))==3){
        ++a;
    }
    int j = a - 1;

    for (int i = 0; i <= j; i++)
    {
        if (datos[i].z == 0){
            n0++;
        }else{
            n1++;
        }
    }
    
    Suma(datos, j, &sumx0, &sumy0, &sumx1, &sumy1);
    Multiplicacion(datos, j, &sumxy0, &sumxy1);   
    Xcuadrada (datos, j, &sumX20, &sumX21);
    MC0(&mc0, &b0, n0, sumx0, sumy0, sumX20, sumxy0);
    MC0(&mc1, &b1, n1, sumx1, sumy1, sumX21, sumxy1); 

    printf ("======================================================================================\n");
    printf ("                     MODELOS DE RECTA POR MÍNIMOS CUADRADOS\n");
    printf ("La ecuacion de la recta para C = 0 es : y = %.2lf * x + %.2lf \n", mc0, b0);
    printf ("La ecuacion de la recta para C = 1 es : y = %.2lf * x + %.2lf \n", mc1, b1);
    printf ("x=%.6f  y=%.6f  c=%d \n", datos[99].x, datos[99].y, datos[99].z);
    printf ("======================================================================================\n");

    FILE *f2 = fopen("puntos_nuevos.txt", "r");
    if (!f2) {
        printf("Archivo de prueba no encontrado\n");
        return 1;
    }

    coordenadas nuevos[100];
    int total_nuevos = 0;
    while ((fscanf(f2, "%lf %lf %d", &nuevos[total_nuevos].x, &nuevos[total_nuevos].y, &nuevos[total_nuevos].z)) == 3) {
        total_nuevos++;
    }
    fclose(f2);

    int correctas_nuevas = 0;
    for (int i = 0; i < total_nuevos; i++) {
        double x = nuevos[i].x;
        double y = nuevos[i].y;
        int z_real = nuevos[i].z;

        double distancia0 = (mc0 * x - y + b0) / sqrt(mc0 * mc0 + 1);
        double distancia1 = (mc1 * x - y + b1) / sqrt(mc1 * mc1 + 1);

        int prediccion = (distancia0 < distancia1) ? 0 : 1;

        printf("Punto (%.6lf, %.6lf) => Clase real: %d, Clase predicha: %d\n", x, y, z_real, prediccion);

        if (prediccion == z_real) {
            correctas_nuevas++;
        }
    }

    double accuracy_nuevos = ((double)correctas_nuevas / total_nuevos) * 100.0;
    printf("Accuracy con nuevos puntos: %.2f%%\n", accuracy_nuevos);
    printf ("======================================================================================\n");


    fclose(f); 
    return 0;
}


