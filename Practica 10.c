Ejercicio 1
#include <stdio.h>

int main()
{
   int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
   int i,j;
   
   printf("Imprimir matriz\n");
   
   for(i = 0; i < 3; i++)
   {
       for(j = 0; j < 3; j++)
       {
           printf("%d | ", arr[i][j]);
       }
       printf("\n");
   }
    return 0;
} 
Ejercicio 2
#include <stdio.h>

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i = 0, j = 0;
   
    printf("Imprimir matriz\n");
    while(i < 3)
    {
        while (j < 3)
        {
            printf("%d | ", arr[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }
    return 0;
}
Ejercicio 3
#include <stdio.h>

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i = 0, j = 0;
   
    printf("Imprimir matriz\n");
    
    do
    {
        do
        {
            printf("%d | ", arr[i][j]);
            j++;
        }
        while(j < 3);
        printf("\n");
        j = 0;
        i++;
    }
    while(i < 3);
    return 0;
}
Ejercicio 4
#include <stdio.h>

int main()
{
    int arr[3][3];
    int val1, val2, val3 ,i, j;

    printf("Pedir valores\n");
    for(i=0; i<3; i++)
    {
        printf("Dar los valores del renglos separados por una coma(,)\n");
        scanf("%d,%d,%d", &val1, &val2, &val3);
        arr[i][0] = val1;
        arr[i][1] = val2;
        arr[i][2] = val3;
    }

    printf("\n\n");
    printf("Imprimir matriz\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d | ", arr[i][j]);
        }
        printf("\n");
    }
  return 0;
}
Ejercicio 5
#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3], res[3][3];
    int val1, val2, val3 ,i, j;

    printf("Pedir valores Matriz 1\n");
    for(i=0; i<3; i++)
    {
        printf("Dar los valores del renglos separados por una coma(,)\n");
        scanf("%d,%d,%d", &val1, &val2, &val3);
        arr1[i][0] = val1;
        arr1[i][1] = val2;
        arr1[i][2] = val3;
    }

    printf("Pedir valores Matriz 2\n");
    for(i=0; i<3; i++)
    {
        printf("Dar los valores del renglos separados por una coma(,)\n");
        scanf("%d,%d,%d", &val1, &val2, &val3);
        arr1[i][0] = val1;
        arr1[i][1] = val2;
        arr1[i][2] = val3;
    }

    //suma de matrices
    for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)
      {
        res[i][j] = arr1[i][j];
      }
    }
  
    printf("\n");
    printf("Imprimir matriz\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d | ", res[i][j]);
        }
        printf("\n");
    }
  return 0;
}
