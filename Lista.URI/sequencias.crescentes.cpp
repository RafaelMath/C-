#include<stdio.h>
int main(){
    int numero,i=1;
    scanf("%d",&numero);
    do{
        for(i;i<=numero;i++)
        {
            if(i!=numero)
                printf("%d ",i);
            else
                printf("%d\n",numero);
        }i=1;
        scanf("%d",&numero);
       }while(numero!=0);
return 0;}
