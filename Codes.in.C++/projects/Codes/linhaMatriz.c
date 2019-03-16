#include<stdio.h>
#include<stdlib.h>
int main(){
    double matriz[13][13];
    double resultado = 0, aux = 0;
    int L,i,j;
    char ch;
    scanf("%d",&L);
    scanf("%c",&ch);

        for(i = 0; i < 12; i++)
        {
            for(j = 0; j < 12; j++)
            {
                scanf("%lf",&aux);
                matriz[i][j] = aux;

            }
        }

        if(ch == 'S')
        {
            for(i=0;i<12;i++)
            {
                resultado = matriz[L][i] + resultado;
            }
            printf("%.1f\n",resultado);
        }
        if(ch == 'M')
        {
            for(i=0;i<12;i++)
            {
                resultado = matriz[L][i] + resultado;
            }
            resultado = resultado / 2;
            printf("%.1f\n",resultado);
        }
    printf("%c",ch);
return 0;}
