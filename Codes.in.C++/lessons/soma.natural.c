#include<stdio.h>
int main()
{ double soma,a,b;
    scanf("%lf %lf",&a, &b);
     soma = (a + b) * (b-a+1)/2;
     printf("%.0lf\n",soma);
return 0;}
