#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "biblioteca.h"
#include "teclado.h"
//#include "teclado.h"

int registro(int *a){
	printf("Numero a:\t %d",*a);
	*a=1299;

}
void carregar(char *file,Jogador *p){
    void alocaMatriz(FILE *f, Jogador *p1);
    struct Jogador;
    FILE *f = fopen(file,"r");

            if(f == NULL){
                printf("Arquivo nao pode ser aberto\n");
                system("pause");
                //return 0;
            }
		int num; //numero dimensao da matriz
		fscanf(f,"%d",&p->n);

		//alocaMatriz
		alocaMatriz(f,p);

		for(int i = 0; i < p->n; i++){
            for(int j = 0; j < p->n; j++){
                if(p->tabuleiro[i][j] == JOGADOR){
                    p->linhaJogador = i;
                    p->colunaJogador = j;
                }
            }
		}

}
//***********************************************
void alocaMatriz(FILE *f, Jogador *p){
    p->tabuleiro = (int**) malloc(p->n* sizeof(int*));
    p->tabuleiro2 = (int**) malloc(p->n* sizeof(int*));
    //segunda dimensão
    for(int i = 0; i < p->n; i++){
        p->tabuleiro[i]= (int*) malloc(p->n*sizeof(int));
         p->tabuleiro2[i]= (int*) malloc(p->n*sizeof(int));
            for(int j = 0; j < p->n; j++){
               // fscanf(f,"%d",&p->tabuleiro[i][j]);
                p->tabuleiro [i][j] = 1;
                fscanf(f,"%d",&p->tabuleiro2[i][j]);

            }
    }
    p->tabuleiro[1][1] = 2;
    fclose(f);
}

void imprime(Jogador *p){
    system("cls");

int numero(Jogador *p,int n);
    for(int i = 0; i < p->n; i++)
          {
            for(int j = 0; j < p->n; j++)
             {
                switch(p->tabuleiro[i][j])
                {
                case 1:
                    printf(" x ");
                break;
                case 0:
                    printf(" * ");
                break;

                case 2:
                    printf("[X]");
                break;
                case -1:
                    {

                    printf("   ");}

                break;

                case -2:
                    printf("[ ]");
                break;
                }
             } printf("\n\n");
          }

}

void atualiza(Jogador *p, int comando){

    int auxLinha = p->linhaJogador;
    int auxColuna = p->colunaJogador;

    switch(comando)
    {
        case CIMA:
            --auxLinha;

            break;
        case BAIXO:
            ++auxLinha;
            break;
        case DIREITA:
            ++auxColuna;
            break;
        case ESQUERDA:
            --auxColuna;
            break;
        case SPACE:
            if(p->tabuleiro2[auxLinha][auxColuna] == 0){
                 p->tabuleiro[auxLinha][auxColuna]= 3;
              p->pos = -2;
            }else if(p->tabuleiro2[auxLinha][auxColuna]== 1){
            p->tabuleiro[auxLinha][auxColuna]= 3;
                p->pos = 0;    }


            break;
            case DESCONHECIDO:
            break;
    }
     if((auxLinha < 0) || (auxLinha >= p->n)
        || (auxColuna < 0) || (auxColuna >= p->n))
    {
        return;
    }

        switch(p->tabuleiro[auxLinha][auxColuna])
        {
        case 1:
            int temp;
            //NOVA POSICAO
            p->tabuleiro[auxLinha][auxColuna] = 2;
            //ANTIGA POSICAO
            if(p->tabuleiro[p->linhaJogador][p->colunaJogador] == 2)
            p->tabuleiro[p->linhaJogador][p->colunaJogador] = 1;

            if(p->tabuleiro[p->linhaJogador][p->colunaJogador]==-2){
                p->tabuleiro[p->linhaJogador][p->colunaJogador] = -1;
            }

            else if(p->tabuleiro[p->linhaJogador][p->colunaJogador] == 0)
            p->tabuleiro[p->linhaJogador][p->colunaJogador] = 0;

            p->linhaJogador = auxLinha;
            p->colunaJogador = auxColuna;

            break;
        case 3:
            //NOVA POSICAO
           // p->tabuleiro[auxLinha][auxColuna] = -1;
            //ANTIGA POSICAO
            p->tabuleiro[auxLinha][auxColuna] = p->pos;

             p->linhaJogador = auxLinha;
            p->colunaJogador = auxColuna;

            break;

        }

imprime(p);
}


int numero(Jogador *p, int n)
{
        int linha = p->i;
        int coluna = p->j;
        linha--; coluna--;
        p->i++; p->j++;

	for(coluna;coluna<=p->j;coluna++){
		 if((linha < 0) || (linha >= p->n)
                                    || (coluna < 0) || (coluna >= p->n))
    {

        break;
    }else if (p->tabuleiro2[linha][coluna]!=0)
        n++;}
        linha++;
        for(coluna;coluna<=p->j;coluna++){
		 if((linha < 0) || (linha >= p->n)
                                    || (coluna < 0) || (coluna >= p->n))
    {

        break;
    }else if (p->tabuleiro2[linha][coluna]!=0)
        n++;}
return n;
}



