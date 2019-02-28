#include<stdio.h>
int main()
{
    int tamanho = 0, k,i;
    int p[2001];
    for(k = 0;k<=2000; k++)
        p[k]=0;

    scanf("%d", &tamanho);

    for(k = 0; k<tamanho;k++)
    {   int aux;
        scanf("%d", &aux);
            p[aux]++;
    }
    for( i = 0; i<=2000;i++)
        if(p[i]!= 0)
            printf("%d aparece %d vez(es)\n",i,p[i]);
return 0;
}
