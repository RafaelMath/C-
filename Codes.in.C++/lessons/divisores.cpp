#include<stdio.h>
int main(){
    int numero,aux =1;
    scanf("%d",&numero);
    do{
        if(numero%aux==0)
        {
            printf("%d\n",aux);
            aux++;
        }else
            aux++;
    }while(aux<=numero);
return 0;}
