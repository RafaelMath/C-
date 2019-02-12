#include<stdio.h>
#include<stdlib.h>

int main(){
int i;
char palavras[25];
   
for ( i = 0; i < 3; i++ ) {
  printf( "Entre com mais de uma palavra (quaisquer): " );
  scanf( "%s", palavras );
  printf( "A primeira palavra que voce entrou foi %s\n", palavras );
  fflush ( stdin );
  //limpa o buffer do scanf
}
}
