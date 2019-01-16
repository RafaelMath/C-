#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"
#include<conio.h>

using namespace std;

int main()
{   void print(Matriz *p);
        char *f = "lotizi.txt";
        char *arquivo = "try.txt";
        Matriz p;

          carrega_matriz(arquivo,f,&p);
          conta_incidencia(&p);
          order(&p);
          print(&p);
          printNumKick(&p);
          chute(&p);

return 0;
}



  /*void chute(Matriz *p);
    void order(Matriz *p);
    void carrega_matriz(char *arquivo,char *f,Matriz *p);
    void conta_incidencia(Matriz *p);
    int procura_numero(int n, Matriz *p);
    void printNumKick(Matriz *p);*/
