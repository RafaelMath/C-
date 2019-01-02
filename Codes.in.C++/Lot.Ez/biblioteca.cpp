#include <stdio.h>
#include <stdlib.h>
#include"biblioteca.h"
void carrega_matriz(char *f,Matriz *p)
{void aloca(FILE *f, Matriz *p);
    	FILE *file = fopen(f,"r");

		if(file == NULL)
        {
			printf("Arquivo nao pode ser aberto\n");
			system("pause");
			return ;
		}else
            int num; //numero dimensao da matriz
            fscanf(file,"%i",&p->num);
            printf("%i\n\n",p->num);
            aloca(file, p);

fclose(file);
}
//***************************************************
void aloca(FILE *f, Matriz *p)
{
     p->vetor1 = (int**) malloc(p->num* sizeof(int*));
     p->vetor2 = (char**) malloc(p->num* sizeof(char*));
        //segunda dimensão
        for(int i = 0; i < p->num; i++){
          p->vetor1[i]= (int*) malloc(p->num*sizeof(int));
          p->vetor2[i]= (char*) malloc(p->num*sizeof(char));

                fscanf(f,"%d %s %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&p->vetor1[i][0],&p->vetor2[i][i]
                        ,&p->vetor1[i][1],&p->vetor1[i][2],&p->vetor1[i][3]
                        ,&p->vetor1[i][4],&p->vetor1[i][5],&p->vetor1[i][6],&p->vetor1[i][7],&p->vetor1[i][8]
                        ,&p->vetor1[i][9],&p->vetor1[i][10],&p->vetor1[i][11],&p->vetor1[i][12],&p->vetor1[i][13]
                        ,&p->vetor1[i][14],&p->vetor1[i][15]);
            }
fclose(f);
}
//******************************************************

void imprime(Matriz *p)
{       //print vector
                //LINHA
            	for(int i = 0; i<=p->num;i++)
                {//COLUNA
                for(int j = 1; j<=15;j++)
                {
                    printf("%d ",p->vetor1[i][j]);
                }
                    printf("\n");
                }
}
//*************************************************************
void conta_incidencia(Matriz *p)
{ //incidencia em que um numero se repete
    for(int n = 1;n<=25;n++)
     {
        p->incidencia[n][0] = procura_numero(n,p);
        // 0 get.number.repetition
        p->incidencia[n][1] = n;
     }  // 1.get.number.ball
}
//*************************************************************
int procura_numero(int n, Matriz *p)
{   int contador = 0;
    for(int i = 0; i<=p->num-1;i++)
        for(int j = 1; j<=15; j++)
         {
            if(p->vetor1[i][j] == n)
            {
                contador = contador + 1;
            }
         }
 return contador;
}

void chute(Matriz *p)
{       //save all into the struct

    for(int i = 0; i < p->num; i++)
	{   int cont = 0;
		for(int j = 1; j <= 15; j++)
		{
			if(p->vetor1[i][j] == p->numeros[j])
			{
				cont++;
			}
			else
				continue;
        }
        if(cont>10)
        printf("%d ",cont);

	}
 //getchar();

}
//******************************************************************
void print(Matriz *p)
{
     for(int i = 1; i<=p->dim;i++)
            {
                printf("numero %d: %d\t",p->incidencia[i][1],p->incidencia[i][0]);
            }
    printf("\n");
}
//******************************************************************
void order(Matriz *p)
{
 for(int i = 1; i<=25; i++)
  {
    for(int j = i+1; j<=25; j++)
     {
       if(p->incidencia[i][0]<p->incidencia[j][0])
        {
            p->aux = p->incidencia[i][0];
            p->aux2 = p->incidencia[i][1];

            p->incidencia[i][0] = p->incidencia[j][0];
            p->incidencia[i][1] = p->incidencia[j][1];

            p->incidencia[j][0] = p->aux;
            p->incidencia[j][1] = p->aux2;
        }
     }
  }
}
//*******************************************************************
void getnum(Matriz *p)
{
              scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &p->numeros[1],&p->numeros[2],&p->numeros[3],&p->numeros[4],&p->numeros[5],&p->numeros[6],&p->numeros[7],&p->numeros[8],&p->numeros[9],&p->numeros[10],&p->numeros[11],&p->numeros[12],&p->numeros[13],&p->numeros[14],&p->numeros[15]);

}


