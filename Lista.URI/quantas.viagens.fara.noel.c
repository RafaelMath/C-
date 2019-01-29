#include<stdio.h>
int main(){
int numTestes,indice;
scanf("%d",&numTestes);
for(indice = 1; indice <= numTestes;indice++)
{
    int quantPresentes, pesoMax, indice2, pesoTotal = 0, contViagem = 0;
    scanf("%d %d",&quantPresentes,&pesoMax);
    for(indice2 = 1; indice2 <= quantPresentes;indice2++)
    {   int pesoTemp;
        scanf("%d",&pesoTemp);

            if((pesoTotal + pesoTemp)> pesoMax)
            {
                contViagem++;
                pesoTotal = pesoTemp;
            }
            else if((pesoTotal + pesoTemp)== pesoMax)
            {
                contViagem++;
                pesoTotal = 0;
            }else
                pesoTotal += pesoTemp;
    }
    if(pesoTotal > 0)
    {
        contViagem++;
        printf("%d\n",contViagem);
    }
    else
        printf("%d\n",contViagem);
}
return 0;}
