#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"

using namespace std;

int main()
{   void print(Matriz *p);
    void chute(Matriz *p);
    void order(Matriz *p);
    void carrega_matriz(char *f,Matriz *p);
    void conta_incidencia(Matriz *p);
    int procura_numero(int n, Matriz *p);

        char *f = "lotizi.txt";
        Matriz p;

          carrega_matriz(f,&p);
          conta_incidencia(&p);
          order(&p);
          print(&p);

return 0;
}
