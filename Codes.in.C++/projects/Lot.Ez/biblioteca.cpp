#include <stdio.h>
#include <stdlib.h>
#include"biblioteca.h"
void carrega_matriz(char *data,char *f,Matriz *p)
{
   void aloca(FILE *data,FILE *f, Matriz *p);
    	FILE *file = fopen(f,"r");
        FILE *arquivo = fopen(data,"r");
        if(arquivo == NULL)
        {
			printf("Arquivo nao pode ser aberto\n");
			system("pause");
			return ;
		}
		else if(file == NULL)
        {
			printf("Arquivo nao pode ser aberto\n");
			system("pause");
			return ;
		}
		else
            int num; //numero dimensao da matriz
            fscanf(file,"%i",&p->num);
            printf("%i\n\n",p->num);
            fscanf(arquivo,"%i",&p->tamanhoKick);
            printf("%i\n\n",p->tamanhoKick);
            fscanf(arquivo,"%i",&p->tamanhoKick2);
            printf("%i\n\n",p->tamanhoKick2);
            aloca(arquivo,file, p);
fclose(arquivo);
fclose(file);
}
//***************************************************
void aloca(FILE *data,FILE *f, Matriz *p)
{
     p->vetor1 = (int**) malloc(p->num* sizeof(int*));
     p->vetor2 = (char**) malloc(p->num* sizeof(char*));

        //segunda dimensão
    for(int i = 0; i < p->num; i++)
    {
        p->vetor1[i]= (int*) malloc(p->num*sizeof(int));
        p->vetor2[i]= (char*) malloc(p->num*sizeof(char));

        fscanf(f,"%d %s %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&p->vetor1[i][0],&p->vetor2[i][i]
                ,&p->vetor1[i][1],&p->vetor1[i][2],&p->vetor1[i][3],&p->vetor1[i][4],&p->vetor1[i][5]
                ,&p->vetor1[i][6],&p->vetor1[i][7],&p->vetor1[i][8],&p->vetor1[i][9],&p->vetor1[i][10]
                ,&p->vetor1[i][11],&p->vetor1[i][12],&p->vetor1[i][13],&p->vetor1[i][14],&p->vetor1[i][15]);
    }
    p->vetorKick = (int**) malloc(p->tamanhoKick* sizeof(int*));
    for (int x = 0; x< p->tamanhoKick; x++)
    {   p->vetorKick[x] = (int*) malloc(p->tamanhoKick2* sizeof(int));
        for(int y = 0; y< p->tamanhoKick2; y++)
        {
            fscanf(data," %d ",&p->vetorKick[x][y]);
        }
    }
fclose(f);
fclose(data);
}
//******************************************************

void imprime(Matriz *p)
{       //print vector
                //LINHA
    for(int i = 0; i<=p->num;i++)
    {           //COLUNA
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
{
    int contador = 0;
    for(int i = 0; i< p->num;i++) //1753 linhas
        for(int j = 1; j<=15; j++) //colunas 15
         {
            if(p->vetor1[i][j] == n)
            {
                contador = contador + 1;
            }
         }
 return contador;
}
//**************************************************************
void chute(Matriz *p)
{
        int retorno = 0;
         //save all into the struct
        //change name this method for scan
    for(int i = 0; i < p->num; i++) //linhas 1753
	{
	    for(int x = 0; x<p->tamanhoKick;x++)    //tamanho try 2
           {
            for(int j = 0; j< p->tamanhoKick2;j++)  //tamanho try 15
            {
                retorno = retorno + scan(p,i,p->vetorKick[0][j]);
            }


   /* int cont = 0;
		for(int j = 1; j <= 15; j++) //coluna 15
		{
			if(p->vetor1[i][j] == p->vetorKick[1][j-1])
			{
				cont++;
			}
			else
				continue;
        }*/
            if(retorno>11)
                printf("%d ",retorno);
            retorno = 0;
        }
	}
}
 //getchar();
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
void order(Matriz *p) //ordena os numeros por maior incidência
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
void printNumKick(Matriz *p)
{
    for(int i = 0; i < p->tamanhoKick;i++)
    {
        for(int j = 0; j < p->tamanhoKick2;j++)
        {
            printf("%d ",p->vetorKick[i][j]);
        }printf("\n");
    }printf("\n");
}
//*****************************************************************
//procura o numero no array p->vetor1
int scan(Matriz *p,int i,int numero)
{
    for(int j = 1; j<=15;j++)
    {
         if(p->vetor1[i][j]==numero)
            return 1;
         else
            continue;

    }
return 0;}

/*
    Criar função para receber numeros de arquivos txt sem limite de tamanho << done
    função para pesquisar números no vetor passar numero por argumentos na função << done
    função vai retornar um numero inteiro referente aos acertos << done

      int n = input();
        char *array = malloc(n * sizeof(int));

        array [0]= 12;
        array[n-1] = 234;

        free(array);
*/
