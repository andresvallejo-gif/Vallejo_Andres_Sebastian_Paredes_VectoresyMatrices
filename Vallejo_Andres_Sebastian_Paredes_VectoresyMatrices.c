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
         printf("Ingrese la nota %d del estudiante %d(de 0 a 10): ", j + 1, i + 1);
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
 for (j = 0; j < 3; j++)
 {
    float max = notas[0][j];
    float menor = notas[0][j];
    int aprobados = 0;
    int reprobados = 0;
    for (i = 0; i < 5; i++)
    {
        if (notas[i][j] > max)
        {
            max = notas[i][j];
        }
        if (notas[i][j] < menor)
        {
            menor = notas[i][j];
        }
        if (notas[i][j] >= 6)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }
    printf("Materia %d:\n", j + 1);
    printf("Nota max: %.2f\n", max);
    printf("Nota menor: %.2f\n", menor);
    printf("Promedio: %.2f\n", promedioM[j]);
    printf("Aprobados: %d\n", aprobados);
    printf("Reprobados: %d\n", reprobados);

 }
 printf("Promedio de cada estudiante:\n");
 for (i = 0; i < 5; i++)
    {
        printf("Estudiante %d: %.2f\n", i + 1, promedio[i]);
    }
    printf("Promedio de cada materia:\n");
 for (j = 0; j < 3; j++)
    {
        printf("Materia %d: %.2f\n", j + 1, promedioM[j]);
    }
 
 
    return 0;
}
