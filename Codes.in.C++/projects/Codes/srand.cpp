#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// Random values
int main(int argc, char *argv[]){

    puts("Generation random values.\n");
    srand(time(NULL));
    for(int i = 1;i <=10;i++)
    {
      for(int j = 1; j<= 10;j++)
       printf("%d ",rand()%100);
      printf("\n");

    }

return 0;}
