//código dos Blobs
//Blobs comem 1/2 da comida por dia
#include <stdio.h>
int main(){
int contador, i = 1;
    scanf("%d",&contador);
    for(i; i <= contador; i++)
    {   int dias = 0;
        float comidaKg;
        scanf("%f",&comidaKg);
        for(dias;comidaKg>1;dias++)
            comidaKg = comidaKg/2;
        printf("%d dias\n",dias);
    }
return 0;}
