#include<stdio.h>
int main()
{
    char cobaia;
    float rato = 0;
    float sapo = 0;
    float coelho = 0;
    int i,quantia,numero,TOTAL = 0;

    scanf("%d",&numero);
    for(i = 1; i <= numero; i++)
    {
         scanf("%d %c", &quantia, &cobaia);
            TOTAL = quantia + TOTAL;
         if(cobaia == 'R')
            rato = rato + quantia;
         else if(cobaia == 'S')
            sapo = sapo + quantia;
         else if(cobaia == 'C')
            coelho = coelho + quantia;
    }
    printf("Total: %d cobaias\n",TOTAL);
    printf("Total de coelhos: %.0f\n",coelho);
    printf("Total de ratos: %.0f\n",rato);
    printf("Total de sapos: %.0f\n",sapo);
    printf("Percentual de coelhos: %.2f %\n",(coelho*100)/(rato+coelho+sapo));
    printf("Percentual de ratos: %.2f %\n",(rato*100)/(rato+coelho+sapo));
    printf("Percentual de sapos: %.2f %\n",(sapo*100)/(rato+coelho+sapo));
return 0;
}
