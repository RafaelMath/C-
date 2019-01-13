#include<stdio.h>
int main(){
    int A,B,total = 0;
    scanf("%d %d",&A,&B);
    if(A>B)
    {   int aux = A;
        A = B;
        B = aux;
    }
    while(A<=B)
    {
        if((A%13)!=0)
        {
            total += A;
            A++;
        }else
            A++;
    }
    printf("%d\n",total);
return 0;}

//Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, inclusive ambos se for o caso.
