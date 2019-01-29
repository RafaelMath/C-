#include <stdio.h>

  int main() {

    int contador = 1, exp = 1;
    double y, aux = 1, n = 1;

    do {
      y = (1 + (1 / n));

      while (exp <= contador) {
        aux = y * aux;
        exp++;
      }

      exp = 1;
      printf("\n      %.100lf \n\n\n ", aux);

      contador++;
      aux = 1;
      n++;

    } while (contador <= 1000000);

    return 0;
  }
