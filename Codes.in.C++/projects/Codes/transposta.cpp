#include<stdio.h>
#include<stdlib.h>
//Matriz transposta

#define DIM 3

void print_matriz(int d, int matrix[]){
  for(int i = 0;i<=d; ++i)
    {
    for(int j = 0; j<=d; ++j)
      {
        printf("%d ",matrix[i]);
      }
    puts("");
    }
}
void aloca_matrix(int d, int **matrix){

    matrix = (int**)malloc(d*sizeof(int**));
    for(int k = 0; k <= d;k++)
        matrix[k] = (int*)malloc(d*sizeof(int));

}
int main(int argc, char** argv){
    int matr[DIM][DIM];
    int **matriz;
    int transposta[DIM][DIM];
    int cont = 0;

    aloca_matrix(DIM, matriz);

    for(int i = 0;i<=DIM; i++){
        for(int j = 0; j<=DIM; j++){
        matr[i][j]= cont;
        cont++;
        }
    }

    for(int i = 0;i<DIM; i++){
        for(int j = 0; j<DIM; j++){
        transposta[j][i] = matriz[i][j];
        }
    }
    for(int i = 0;i<DIM; i++){
        for(int j = 0; j<DIM; j++){
        printf("%d ",transposta[i][j]);
        }puts("");
    }



return 0;}
