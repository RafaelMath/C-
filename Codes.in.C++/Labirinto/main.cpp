#include <stdio.h>
#include <conio.h>

#include "labirinto.h"
#include "teclado.h"

int main()
{
    printf("Aperte enter para iniciar o jogo!\n");
    getch();

    char *fileName = "lab1.txt";

    Labirinto l;
    carrega_arquivo_labirinto(fileName, &l);

    imprime_labirinto(&l);


    while(l.jogoAcabou == 0)
    {
        int comando = pegar_comando_teclado();
        atualiza_labirinto(&l, comando);
    }

    printf("\n\n  Jogador achou o premio!");

    return 0;
}
