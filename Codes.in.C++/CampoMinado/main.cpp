
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"biblioteca.h"
#include"teclado.h"

int main(){

	void carregar(char *file,Jogador *p);
    void imprime(Jogador *p);
    void atualiza(Jogador *p, int comando);
	printf("inicio\n");
	getch();

    char *fileName = "tabela.txt";
    Jogador p;
    carregar(fileName,&p);
    imprime(&p);
    while(1){
        int comando = pegar_comando_teclado();
        atualiza(&p,comando);
    }
	return 0;
}
