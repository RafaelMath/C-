#include<stdio.h>
int main()
{
    int x[10], i, aux;
    scanf("%d",&aux);
        x[0] = aux;
   for(i = 1; i<10;i++)
   {
        aux = aux*2;
        x[i] = aux;
   }
   for(i = 0; i<10;i++)
        printf("N[%d] = %d\n",i,x[i]);
return 0;
}
