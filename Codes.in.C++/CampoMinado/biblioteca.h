

#define CORREDOR 0
#define PAREDE 1
#define JOGADOR 2
#define PREMIO 3


struct Jogador {
	int **tabuleiro2;
	int **tabuleiro;
	int n;
	int linhaJogador;
    int colunaJogador;
    int jogoAcabou;
    int pos;
    int i;
    int j;
};
//carrega a matriz
void carregar(char *file,Jogador *p);
void imprime(Jogador *p);
void atualiza(Jogador *p, int comando);
