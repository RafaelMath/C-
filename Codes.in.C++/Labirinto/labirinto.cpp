#include <stdio.h>
#include <stdlib.h>
#include "labirinto.h"
#include "teclado.h"

void aloca_labirinto(Labirinto *l, int n)
{
    l->n = n;

    l->tabuleiro = new int*[l->n];

    for(int i = 0; i < l->n; ++i)
        l->tabuleiro[i] = new int[l->n];
}

void carrega_arquivo_labirinto(char *fileName, Labirinto *l)
{
    FILE *f = fopen(fileName, "r");
    int n;

    //leno o tamanho do labirinto
    fscanf(f, "%d", &n);
    aloca_labirinto(l, n);

    //Lendo a matriz do labirinto
    for(int i = 0; i < l->n; ++i)
    {
        for(int j = 0; j < l->n; ++j)
        {
            fscanf(f, "%d", &l->tabuleiro[i][j]);
            if(l->tabuleiro[i][j] == JOGADOR)
            {
                l->linhaJogador = i;
                l->colunaJogador = j;
            }
        }
    }
    fclose(f);
    //Avisa que o jogo comecou
    l->jogoAcabou = 0;
}

//Imprime o labirinto na tela
void imprime_labirinto(Labirinto *l)
{
    system("cls");
    for(int i = 0; i < l->n; ++i)
    {
        for(int j = 0; j < l->n; ++j)
        {
            switch(l->tabuleiro[i][j])
            {
                case CORREDOR:
                    printf("   ");
                break;

                case PAREDE:
                    printf(" X ");
                break;

                case JOGADOR:
                    printf(" O ");
                break;

                case PREMIO:
                    printf(" T ");
                break;
            }
        }
        printf("\n");
    }
}

void atualiza_labirinto(Labirinto *l, int comando)
{
    int auxLinha = l->linhaJogador;
    int auxColuna = l->colunaJogador;

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
        case DESCONHECIDO:
            break;
    }

    //Valida a nova posicao do jogador
    if((auxLinha < 0) || (auxLinha >= l->n)
        || (auxColuna < 0) || (auxColuna >= l->n))
    {
        return;
    }

    //Atualiza a nova posicao do jogador
    switch(l->tabuleiro[auxLinha][auxColuna])
    {
        case CORREDOR:
            l->tabuleiro[auxLinha][auxColuna] = JOGADOR;
            l->tabuleiro[l->linhaJogador][l->colunaJogador] = CORREDOR;
            l->linhaJogador = auxLinha;
            l->colunaJogador = auxColuna;
            break;

        case PAREDE:
            break;

        case PREMIO:
            l->tabuleiro[auxLinha][auxColuna] = JOGADOR;
            l->tabuleiro[l->linhaJogador][l->colunaJogador] = CORREDOR;
            l->jogoAcabou = 1;
            break;
    }
    imprime_labirinto(l);
}
