#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"

using namespace std;

int main()
{   void chute(Matriz *p);
    void carrega_matriz(char *f,Matriz *p);
    void conta_incidencia(Matriz *p);
    int procura_numero(int n, Matriz *p);

        char *f = "lotizi.txt";
        int aux,aux2;
            Matriz p;

            carrega_matriz(f,&p);
            conta_incidencia(&p);

            for(int n = 1;n<=25;n++)
            {
                p.incidencia[n][0] = procura_numero(n,&p);
                p.incidencia[n][1] = n;
            }
            /*
            for(int i = 1; i<=25;i++)
            {
                printf("numero %d: %d\n",i,p.incidencia[i][0]);
            }
            */
            for(int i = 1; i<=25; i++)
                {
                    for(int j = i+1; j<=25; j++)
					{
					    if(p.incidencia[i][0]>p.incidencia[j][0])
                        {
                            aux = p.incidencia[i][0];
                            aux2 = p.incidencia[i][1];

                            p.incidencia[i][0] = p.incidencia[j][0];
                            p.incidencia[i][1] = p.incidencia[j][1];

                            p.incidencia[j][0] = aux;
                            p.incidencia[j][1] = aux2;
                        }
					}
                }
printf("\n");
            for(int i = 1; i<=25;i++)
                {printf("numero %d: %d\t",p.incidencia[i][1],p.incidencia[i][0]);}


    return 0;
}
