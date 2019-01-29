#include<stdio.h>
//soma recursiva
int function(int n)
{   n--;
    if( n <= 0)
        return 0;
    else
       return (n + function( n ));
}
//fatorial recursivo
double factorial(double n)
{   --n;
    if( n <= 1)
        return 1;
    else
       return (n * factorial( n ));
}
int main(){
    int n = 10;
    printf("Resultado soma recursiva: %d\n",( n + function( n )));
    printf("Resultado Soma Gauss    : %d\n",((n *(n + 1))/2));
    printf("\nResultado Fatorial recursivo: %.0lf\n",(n * factorial( n )));
return 0;}

//Soma dos N primeiros naturais com programação recursiva
//e utilizando o algoritmo da Soma de Gauss
