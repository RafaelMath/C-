
#define CORREDOR 0
#define PAREDE 1
#define JOGADOR 2
#define PREMIO 3

//Estrutura que representa o Labirinto
struct Labirinto
{
    int **tabuleiro;
    int n;
    int linhaJogador;
    int colunaJogador;
    int jogoAcabou;
};

//aloca dinamicamnete a matriz de inteiros0
void aloca_labirinto(Labirinto *l, int n);

//Ler o labritinto de arquivo
void carrega_arquivo_labirinto(char *fileName, Labirinto *f);

//Imprime o labirinto na tela
void imprime_labirinto(Labirinto *l);

//Atualiza o jogador no labirinto
void atualiza_labirinto(Labirinto *l, int comando);
