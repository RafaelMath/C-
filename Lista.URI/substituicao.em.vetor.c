#include<stdio.h>
int main()
{
    int x[10], k,i, aux;
   for(i = 0; i<10;i++)
   {
        scanf("%d",&aux);
        if(aux<=0)
            x[i] = 1;
        else
            x[i] = aux;
   }
   for(i = 0; i<10;i++)
        printf("X[%d] = %d\n",i+1,x[i]);
return 0;
}
