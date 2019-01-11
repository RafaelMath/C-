#include<stdio.h>
int main()
{  float valor,taxa;
    scanf("%f",&valor);
    if(valor>0 && valor<=400)
    {
          taxa = 0.15;
          printf("Novo salario: %.2f\n",valor+(valor*taxa));
          printf("Reajuste ganho: %.2f\n",valor*taxa);
          printf("Em percentual: %.0f %\n",taxa*100);
    }
    else if(valor>400 && valor<=800)
    {
          taxa=0.12;
          printf("Novo salario: %.2f\n",valor+(valor*taxa));
          printf("Reajuste ganho: %.2f\n",valor*taxa);
          printf("Em percentual: %.0f %\n",taxa*100);
    }
    else if(valor>800 && valor<=1200)
    {
          taxa=0.10;
          printf("Novo salario: %.2f\n",valor+(valor*taxa));
          printf("Reajuste ganho: %.2f\n",valor*taxa);
          printf("Em percentual: %.0f %\n",taxa*100);
    }
    else if(valor> 1200 && valor<=2000)
    {
          taxa=0.07;
          printf("Novo salario: %.2f\n",valor+(valor*taxa));
          printf("Reajuste ganho: %.2f\n",valor*taxa);
          printf("Em percentual: %.0f %\n",taxa*100);
    }
    else
    {
          taxa=0.04;
          printf("Novo salario: %.2f\n",valor+(valor*taxa));
          printf("Reajuste ganho: %.2f\n",valor*taxa);
          printf("Em percentual: %.0f %\n",taxa*100);
    }
return 0;
}
