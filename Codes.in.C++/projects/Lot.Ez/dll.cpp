#include <stdio.h>
#include <stdlib.h>
#include"biblioteca.h"

void palpite (Matriz *p)
{
    for(int i = 0; i < p->num; i++) //linhas 1753
	    for(int x = 0; x<p->tamanhoKick;x++)    //indice array try 2
        {
            for(int j = 0; j< p->tamanhoKick2;j++)  //indice numeros try 15
            {
                //retorno = retorno + scan(p,i,p->vetorKick[0][j]);
            }
        }
}

void repeat(Matriz *p){
    int temp = 0;
for(int i = 0; i < p->num; i++)
    {for(int j = 1;j< 15;j++)
    {
        if(p->vetor1[i][j]==3)
        {
            printf("*");
            temp = 1;
        }

    }
    if(temp == 0)
        printf("_");
    else
        temp = 0;}

}       //01 02 03 05 06 08 09 12 13 15 17 21 22 24 25

void preenche(Matriz *p, Number *numero)
{
    FILE *tabelateste;
    tabelateste = fopen("tabelateste.txt","w");

     for( int i = 1; i<=25 ;i++)
	{
        for(int j = 1; j<=25;j++)
        {
           numero->grafo[i][j] = 0;
        }
	}
    for(int m = 1;m<1000;++m)
        for(int i = 1; i <= 15; i++)
            for(int j = 1; j <= 15; j++)
            {
                int temp1 = p->vetor1[m][i];
                int temp2 = p->vetor1[m][j];
                if(temp1 == temp2)
                     numero->grafo[temp1][temp2] = 0;
                else
                     numero->grafo[temp1][temp2]++;

               /*if((p->vetor1[m][i] == i)&&(p->vetor1[m][i+1]==j))
                    numero->grafo[i][j]++;
               else if((p->vetor1[m][i]==j)&&(p->vetor1[m][i+1]==i))
                    numero->grafo[j][i]++;
                */
            }

    for( int i = 1; i<=25 ;i++)
	{
        for(int j = 1; j<=25;j++)
        {
            fprintf(tabelateste,"\t%d",numero->grafo[i][j]);
        }fprintf(tabelateste,"\n\n");
	}
	fclose(tabelateste);
}

//compara se são iguais e retorna 1 ou 0
int comparaUmOuZero(int a, int b)
{
    if(a==b)
        return 1;
    else
        return 0;
}
