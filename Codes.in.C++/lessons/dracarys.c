#include<stdio.h>
#include<math.h>
int main(){
    int answer, LarguraD, ComprimentoD, LarguraV, ComprimentoV,AreaD,AreaV;
    scanf("%d %d %d %d",&LarguraD, &ComprimentoD, &LarguraV, &ComprimentoV);
    AreaD = LarguraD * ComprimentoD;
    AreaV = LarguraV * ComprimentoV;
    int AreaTotal = AreaD + AreaV;
    while(pow(sqrt(AreaTotal),2)!= AreaTotal)
        AreaTotal--;
    printf("%d\n",AreaTotal);
return 0;}
