#include <stdio.h>

int main() 
{
 float notas [5][3];
 float promedio [5];
 float promedioM[3];
 int i, j;
 float suma;
 for (i = 0; i < 5; i++)
 {
    for (j = 0; j < 3; j++)
    {
        do
        {
         coprintf("Ingrese la nota %d del estudiante %d(de 0 a 10): ", j + 1, i + 1);
         scanf("%f", &notas[i][j]);
        } while (notas[i][j] < 0 || notas[i][j] > 10);

        
      
    }
 }
 for ( i = 0; i < 5; i++)
 {
    suma = 0;
    for (j = 0; j < 3; j++)
    {
        suma += notas[i][j];
    }
    promedio[i] = suma / 3;
 }
 for ( j = 0; j < 3; j++)
 {
    suma = 0;
    for (i = 0; i < 5; i++)
    {
        suma += notas[i][j];
    }
    promedioM[j] = suma / 5;
 }
 
 
    return 0;
}
