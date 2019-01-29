#include<stdio.h>
int main(){
int quantidade;
do{
    scanf("%d",&quantidade);
    int john = 0;
    int mary = 0;
    int count = 1;
    for(count;count<=quantidade;count++)
    {   int parOuImpar;
        scanf("%d",&parOuImpar);
        if(parOuImpar==1)
            john++;
        else if(parOuImpar==0)
            mary++;
    }
    if(quantidade!=0)
        printf("Mary won %d times and John won %d times\n",mary,john);
  }while(quantidade>0);
return 0;}
