#include<stdio.h>
int main(){
    int tipoCha,cont = 0;
    int num,i;
    scanf("%d",&tipoCha);
    for(i = 1;i<=5;i++)
    {
        scanf("%d",&num);
        if(num == tipoCha)
            cont++;
    }
    printf("%d\n",cont);
return 0;
}
