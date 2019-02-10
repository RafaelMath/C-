#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define d 3
#define  MAX_VALUE 10

void aloca_matrix(int *matrix,int dim){

    matrix = (int *)malloc(dim*sizeof(int*));
    for(int k = 0; k<=dim;k++)
        matrix [k]=(int)malloc(dim*sizeof(int));

}

void randomize(int l, int matrix[][d]){
    for (int i=0; i < l;i++) {
        for(int j = 0; j < l; j++){
            int n = rand()%MAX_VALUE;
            matrix[i][j] = n;
        }
    }
}
void print_matrix(int l, int matrix[][d]) {
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}
void mul_matrix(matrix)
int main(int argc, char *argv[]){
    int matrix_a[d][d];
    int matrix_b[d][d];

    srand(time(NULL));


    randomize(d,matrix_a);
    print_matrix(d,matrix_a);
return 0;
}
