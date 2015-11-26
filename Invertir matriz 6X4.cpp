#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int cuadrado[6][4],reves[6][4];
    int i,j,a,b,alea;
    printf("Este programa invierte los valores de una matriz  de 6X4\n");
    system("pause");
    system ("color 3A");
    a=5;
    b=3;
    srand(time (NULL));
    printf("Esta sera la matriz oroginal:\n");
    for (i=0;i<6;i++) //Lenado de la matriz
    {
        for (j=0;j<4;j++)
        {
            alea=rand()%11;
            cuadrado[i][j]=alea;
            printf("%d ",cuadrado[i][j]);
        }
        printf("\n");
    }
    system("pause");
    printf("Esta es la matriz invertida:\n");
    
    
    do {
     for (i=0;i<6;i++) //Invirtiendo la matriz
    {
         b=3;
        for (j=0;j<4;j++)
        {
           
            reves[i][j]=cuadrado[a][b];
            b--;
        }
        a--;
    printf("\n");
    
        
    }
}
while (a>=0 && b>=0);
    
      for (i=0;i<6;i++) // matriz invertida
    {
        for (j=0;j<4;j++)
        {
            printf("%d ",reves[i][j]);
        }
        printf("\n");
    }
    
    system ("pause");
}
