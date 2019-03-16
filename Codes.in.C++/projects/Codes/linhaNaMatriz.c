#include<stdio.h>
int main(){
    float matriz[12][12], aux;
    float resultado = 0;
    int L,i,j;
    char T;
    scanf("%d",&L);
    scanf("%c",&T);

        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                scanf("%f",&aux);
                matriz [i][j] = aux;

            }
        }

        if(T == 'S')
        {
            for(i=0;i<12;i++)
            {
                resultado = matriz[L][i] + resultado;
            }
            printf("%.1f\n",resultado);
        }
        if(T == 'M')
        {
            for(i=0;i<12;i++)
            {
                resultado = matriz[L][i] + resultado;
            }
            resultado = resultado / 2;
            printf("%.1f\n",resultado);
        }
    printf("%c",T);
return 0;}
