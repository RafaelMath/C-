#include<stdio.h>

int main(){
    int tamanho,numeroMenor = 999999,i;
    int numero, indiceMenor;
        scanf("%d",&tamanho);

        for(i=0;i<tamanho;i++)
        {
            scanf("%d",&numero);
            if(numero<numeroMenor)
            {
                indiceMenor = i;
                numeroMenor = numero;
            }
        }

        printf("Menor valor: %d\n",numeroMenor);
        printf("Posiccao: %d\n",indiceMenor);

return 0;}
