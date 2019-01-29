#include<stdio.h>
#include<math.h>
int main(){
    int answer, LarguraD, ComprimentoD, LarguraV, ComprimentoV,pot;
    scanf("%d %d %d %d",&LarguraD, &ComprimentoD, &LarguraV, &ComprimentoV);
    int AreaTotal = (LarguraD + LarguraV) * (ComprimentoD + ComprimentoV);
    while(!(((answer<=(LarguraD + LarguraV)) && (answer<=(ComprimentoV + ComprimentoD)))    &&  (pot == AreaTotal)))
    {
        --AreaTotal;
        answer = sqrt(AreaTotal);
        pot = pow(answer,2);
    }
    printf("%d\n",AreaTotal);
return 0;}
