#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cuadro[10][10];
    int i,j,a,b;
    printf("Este programa imprime las diagonales de una matriz de 10X10\n");
    system("pause");
    system ("color 2A");
    a=9;
    b=0;
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            
            if (i==j)
            {
            cuadro[i][j]=1;
            }
            else
            {
             cuadro[i][j]=0;
            }
            for (a=0,b=9 ;b>=0; b--,a++)
            {
             cuadro[b][a]=1;
            }
            /*if (i+j==9)
            {
                cuadro[i][j]=1;
            }*/
             printf("%d ",cuadro[i][j]);
        }
        printf("\n");
    }
    system ("pause");
}
