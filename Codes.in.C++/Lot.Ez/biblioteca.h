
struct Matriz
{
    int num;
    int **vetor1;
    char **vetor2;
    int incidencia [81][2];
    int numeros [16];
    int dim = 25;
    int aux,aux2;

};
<<<<<<< HEAD

=======
struct global
{
    int posicao;
    int n;
};
void print();
<<<<<<< HEAD
>>>>>>> 95963f698597b517b265a36227c25935e297baaf
=======
>>>>>>> 95963f698597b517b265a36227c25935e297baaf
void chute(Matriz *p);
void order(Matriz *p);
void getnum(Matriz *p);
void aloca(FILE *f, Matriz *p);
void conta_incidencia(Matriz *p);
int procura_numero(int n, Matriz *p);
void carrega_matriz(char *f,Matriz *p);



