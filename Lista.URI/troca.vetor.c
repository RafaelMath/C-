#include<stdio.h>
int main()
{
    int n[20];
    int aux,i;
    for(i = 0; i<20;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        aux = n[19-i];
        n[19-i] = n[i];
        n[i] = aux;
    }
    for(i = 0; i<20;i++)
    printf("N[%d] = %d\n",i,n[i]);
return 0;
}
