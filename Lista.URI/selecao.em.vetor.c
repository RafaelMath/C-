#include<stdio.h>
int main()
{
    double x[100], aux;
    int i;
    for(i = 0; i<100;i++)
    {
        scanf("%lf",&aux);
        x[i] = aux;
    }
   for(i = 0; i<100;i++)
    if(x[i]<=10)
        printf("A[%d] = %.1lf\n",i,x[i]);
return 0;
}
