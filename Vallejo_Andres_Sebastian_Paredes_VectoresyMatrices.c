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
       printf("Ingrese la nota %d del estudiante %d: ", j + 1, i + 1);
       scanf("%f", &notas[i][j]);
    }
 }
 
    return 0;
}
