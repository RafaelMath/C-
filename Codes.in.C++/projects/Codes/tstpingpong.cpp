#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define d 20

struct Player{
	
	char vetor[d][d];
	int direcao;
	int linha;
	int coluna;
};

void print(int num){
	
	switch(num)
	{
		case 0:
			printf(" ");
		break;
		case 1:
			printf("*");
		break;
		default:
			printf("error default print()");
		break;
	}
	
}
void movimento(Player *ball)
{
	switch(ball->direcao)
	{
		case 1:
			ball->vetor[ball->linha][ball->coluna] = 0;
			ball->linha--;
			ball->coluna++;
			ball->vetor[ball->linha][ball->coluna] = 1;
		break;
		case 2:
			ball->vetor[ball->linha][ball->coluna] = 0;
			ball->linha++;
			ball->coluna++;
			ball->vetor[ball->linha][ball->coluna] = 1;
		break;
		case 3:
			ball->vetor[ball->linha][ball->coluna] = 0;
			ball->linha--;
			ball->coluna++;
			ball->vetor[ball->linha][ball->coluna] = 1;
		break;
		case 4:
			ball->vetor[ball->linha][ball->coluna] = 0;
			ball->linha--;
			ball->coluna--;
			ball->vetor[ball->linha][ball->coluna] = 1;
		break;
		
	}
	
}
void render(Player *ball)
{	/*
	if(ball->direcao==2)
	{
		if(ball->linha+1 < d && ball->coluna+1 < d)
		{
			ball->direcao = 2;
		}
		else if(ball->linha+1 == d && ball->coluna+1 < d)
		{
			ball->direcao = 1;
		}
		else if(ball->linha+1 < d && ball->coluna+1 == d)
		{
			ball->direcao = 3;
		}
		else
			ball->direcao = 4;
	}
	else if(ball->direcao == 1)
	{
		if(ball->linha-1 >= 0  && ball->coluna+1 < d)
		{
			ball->direcao =  1;
		}
		else if(ball->linha-1 >= 0  && ball->coluna+1 == d)
		{
			ball->direcao =  4;
		}
		else if(ball->linha-1 < 0  && ball->coluna+1 <d)
		{
			ball->direcao =  2;
		}
		else
			ball->direcao = 3;
	}
	else if(ball->direcao == 3)
	{
		if(ball->linha +1 <=d  && ball->coluna-1 >=0  )
		{
			ball->direcao = 3 ;
		}
		else if(ball->linha +1 > d  && ball->coluna-1 >= 0 )
		{
			ball->direcao =  4;
		}
		else if(ball->linha +1 <= d  && ball->coluna-1 < 0 )
		{
			ball->direcao =  2;
		}
		else 
			ball->direcao = 1;
	}
	else if(ball->direcao == 4)
	{
		if(ball->linha -1 >=0  && ball->coluna -1 >=0 )
		{
			ball->direcao = 4 ;
		}
		else if(ball->linha -1 < 0  && ball->coluna-1 >= 0 )
		{
			ball->direcao =  3;
		}
		else if(ball->linha -1 >= 0 && ball->coluna-1 <0 )
		{
			ball->direcao = 1;
		}
		else 
			ball->direcao = 2;
	}	*/
	   	
			if((ball->linha+1)!=(d-1)&&(ball->coluna+1)!=(d-1))
				ball->direcao = 2;
			else if((ball->linha-1)>=(0)&&(ball->coluna+1)<=(d-1))
				ball->direcao = 1;
			else if((ball->linha-1)>=(0)&&(ball->coluna-1)>=(0))
				ball->direcao = 4;
			else if((ball->linha+1)<=(d-1)&&(ball->coluna-1)>=(0))
				ball->direcao = 3;
			
			
	movimento(ball);
}
int main(){
	struct Player bolinha;
	bolinha.direcao = 2;
	bolinha.linha = 1;
	bolinha.coluna = 1;
	for(int i = 0; i<=d;i++){
		for(int j = 0; j<=d;j++){
			bolinha.vetor[i][j] = 0;
		}
	}
	bolinha.vetor [1][1] = 1;
	while(1)
	{
		system("cls");
			
		render(&bolinha);
		printf(" ");
		for(int k = 0; k<=d+1;k++)	
		{
			printf("-");
		}puts("");
			for(int i = 0; i<d;i++)
			{
				for(int j = 0; j<d;j++)
				{	if(j==0)
						printf("| ");
					print(bolinha.vetor[i][j]);
					if(j==d-1)
						printf(" |");
				}puts("");	
			}printf(" ");
		for(int k = 0; k<=d+1;k++)	
		{
			printf("-");
		}
			
			Sleep(500);
		
	}
}





