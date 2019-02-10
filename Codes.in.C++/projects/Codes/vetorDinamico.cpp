#include<stdio.h>
#include<stdlib.h>

int main(){

	int **p;
	int aux = 10;
	int valor = 0;

        p=(int**)malloc(aux*sizeof(int*));
        for(int k = 0; k< aux; k++)
        {
            p[k]=(int*)malloc(aux*sizeof(int));
        }


    for(int j = 0;j<=9;j++)
        for(int i = 0;i<=9;i++)
        {
            p[j][i]=valor;
            valor++;
        }
	for(int i = 0;i<=9;++i)
	{for(int j = 0; j<=9;j++)
        printf("%d ",p[i][j]);
        printf("\n");
	}

return 0;
}

