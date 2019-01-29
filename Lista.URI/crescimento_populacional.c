#include<stdio.h>
int main(){
    int testes,i,time = 0;
    scanf("%d",&testes);
    int PopA, PopB;
    float g1, g2;
    for(i=1;i<=testes;i++)
    {
        scanf("%d %d %f %f",&PopA, &PopB, &g1, &g2);
        do
        {
            PopA = PopA + (PopA * (g1/100));
            PopB = PopB + (PopB * (g2/100));
            time++;
            if(time>100)
                break;
        }while(PopA <= PopB);
        if(time>100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n",time);
        time = 0;
    }
return 0;}
