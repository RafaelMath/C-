#include<stdio.h>
#include<windows.h>
#include <conio.h>

#define DIMENSAO 10
#define CIMA 0
#define BAIXO 1
#define ESQUERDA 2
#define DIREITA 3
#define DESCONHECIDO 4

struct Vector{
	char vetor [DIMENSAO][DIMENSAO];
	int linhaJogador;
    int colunaJogador;
};

int primo(int numeroPrimo){
 
    int j = 2;
    for(j;j<=numeroPrimo;j++)
    {
        if(numeroPrimo%j==0)
        {
            if(numeroPrimo==j)
            {
                return 1;
            }else
                return 0;
        }
    }
}

int pegar_comando_teclado()
{
    int comando = getche();

    switch(comando)
    {
        case 72: return CIMA;
        case 80: return BAIXO;
        case 77: return DIREITA;
        case 75: return ESQUERDA;
        default: return DESCONHECIDO;
    }
}

void atual(Vector *p, int comando){

    int auxLinha = p->linhaJogador;
    int auxColuna = p->colunaJogador;
	p->vetor[auxLinha][auxColuna] = 0;
    switch(comando)
    {
        case CIMA:
            --auxLinha;
            p->vetor[auxLinha][auxColuna] = 1;

            break;
        case BAIXO:
            ++auxLinha;
            p->vetor[auxLinha][auxColuna] = 1;

            break;
        case DIREITA:
            ++auxColuna;
            p->vetor[auxLinha][auxColuna] = 1;

            break;
        case ESQUERDA:
            --auxColuna;
            p->vetor[auxLinha][auxColuna] = 1;

            break;
        case DESCONHECIDO:
            break;
    }

}


void imprime(Vetor *p)
{
	for(int i = 0; i<DIMENSAO; i++)
{
	for(int j = 0; j<DIMENSAO; j++)
	{
		printf("%d",p->vetor[i][j]);
	}puts("");	
}
}

int main()
{
	struct Vector p;

for(int i = 0; i<DIMENSAO; i++)
{
	for(int j = 0; j<DIMENSAO; j++)
	{
		p.vetor[i][j]=0;
	}	
}
p.vetor[0][0] = 1;
while(1){
	int numero = pegar_comando_teclado();
	atual(&p, numero);
	imprime(&p);
}

return 0;
}
















