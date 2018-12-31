
struct Matriz
{
    int num;
    int **vetor1;
    char **vetor2;
    int incidencia [81][2];
    int numeros [15];
    int dim = 25;
    int aux,aux2;

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
void print();
void order(Matriz *p);
int procura_numero(int n, Matriz *p);

