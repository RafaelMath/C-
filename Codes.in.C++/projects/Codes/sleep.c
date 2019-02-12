#include <stdio.h>
#include <stdlib.h>


int main(){
   int i;
   system("cls"); // Limpar a tela
   printf("Loading"); // Exibir a Palavra Loading na tela em branco

   for(i=0;i < 10; i++){ // abrir um laço de repetição com for
   
   usleep(500000); //espera por 500.000 microsegundos (meio segundo)
  // sleep(1); // segundo inteiro
   printf("."); // escrever 1 "." na tela
   //fflush(stdout); // atualizar a tela
	
   }
}
