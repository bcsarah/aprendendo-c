#include <stdio.h>
#include <stdlib.h>

#define println(...) printf(__VA_ARGS__), putchar('\n')

// Funções Matemáticas
float somar(float x, float y) {
  return x + y;
};

float diminuir(float x, float y) {
  return x - y;
};

float multiplicar(float x, float y) {
  return x * y;
};

float dividir(float x, float y) {
  return x / y;
};

float aoquadrado(float x) {
  return x * x;
};

/* ===== MAIN ===== */
int main(int argc, char *argv[]) {

  // checa a quantidade de argumentos
  if (argc != 3) {
    println("ERROR: ccalc <x> <y>");
    return 1;
  }

  // atof converte string p/ float
  float x = atof(argv[1]);
  float y = atof(argv[2]);

  // output
  println("\n%.2f + %.2f = %.2f", x, y, somar(x, y));
  println("%.2f - %.2f = %.2f", x, y, diminuir(x, y));
  println("%.2f * %.2f = %.2f", x, y, multiplicar(x, y));
  println("%.2f / %.2f = %.2f", x, y, dividir(x, y));
  println("%.2f ^ 2 = %.2f", x, x, aoquadrado(x));
  println("%.2f ^ 2 = %.2f", y, y, aoquadrado(y));
}