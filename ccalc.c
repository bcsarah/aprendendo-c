#include <stdio.h>
#include <stdlib.h>

#define println(...) printf(__VA_ARGS__), putchar('\n')

// Funções Matemáticas
int somar(int x, int y) {
  return x + y;
};

int diminuir(int x, int y) {
  return x - y;
};

int multiplicar(int x, int y) {
  return x * y;
};

int dividir(int x, int y) {
  return x / y;
};

int aoquadrado(int x) {
  return x * x;
};

int resto(int x, int y) {
  return x % y;
};

/* ===== MAIN ===== */
int main(int argc, char *argv[]) {

  // checa a quantidade de argumentos
  if (argc > 3 || argc == 1 || argc == 2) {
    println("ERROR: ccalc <x> <y>");
    return 1;
  }

  // atoi converte string p/ int
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);

  // output
  println("== calc results ==");

  println("\n%d + %d = %d", x, y, somar(x, y));
  println("%d - %d = %d", x, y, diminuir(x, y));
  println("%d * %d = %d", x, y, multiplicar(x, y));
  println("%d / %d = %d", x, y, dividir(x, y));

  println("\n%d ^ %d = %d", x, x, aoquadrado(x));
  println("%d ^ %d = %d", y, y, aoquadrado(y));
  println("%d %% %d = %d", x, y, resto(x, y));
  println("%d %% %d = %d", y, x, resto(y, x));
}