#include<stdio.h>
int main()
{   float valor,imposto;
    scanf("%f",&valor);
    if(valor>0 && valor<=2000)
    {
        printf("Isento\n");
    }
    else if(valor>2000 && valor<=3000)
    {
        valor = valor - 2000;
        imposto = 0.08;
        printf("R$ %.2f\n",valor*imposto);
    }
    else if(valor>3000 && valor<=4500)
    {
        valor = valor - 3000;
        imposto = 0.18;
        printf("R$ %.2f\n",(80)+(valor*imposto));
    }
    else if(valor>4500)
    {
        valor = valor - 4500;
        imposto = 0.28;
        printf("R$ %.2f\n",(350)+(valor*imposto));
    }
return 0;
}
