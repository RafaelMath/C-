#include<stdio.h>
int main(){
    int chute = 0, cont, i, pessoa;
    int temp = 99999;
    scanf("%d",&cont);
    for(i = 1; i <= cont; i++)
    {
        scanf("%d",&pessoa);
        if(temp > pessoa)
        {
            chute = i;
            temp = pessoa;
        }
    }
    printf("%d\n",chute);
return 0;}
