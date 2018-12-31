
struct Matriz
{
    int num;
    int **vetor1;
    char **vetor2;
    int incidencia [81][2];
    int numeros [15];
    int c2;
    int c3;
    int c4;
    int c5;

};
struct global
{
    int posicao;
    int n;
};

void chute(Matriz *p);
void carrega_matriz(char *f,Matriz *p);
void aloca(FILE *f, Matriz *p);
void conta_incidencia(Matriz *p);
int procura_numero(int n, Matriz *p);
