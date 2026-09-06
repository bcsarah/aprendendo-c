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
  if (x == 0)
    printf("ERROR: 0 division error");
    return 1;
  return x / y;
};

float potenciar(float x, float y) {
  if (y == 0)
    return 1;
  
  float sum = x;

  for (int i = 0; i < y - 1; i++)
    sum = sum * x;
  return sum;
};

/* ===== MAIN ===== */
int main(int argc, char *argv[]) {
  // checa a quantidade de argumentos
  if (argc != 4) { // 1 = sem argumentos, 4 = 3 argumentos
    println("ERROR: ccalc <x> <op> <y>");
    return 1;
  }

  // atof converte string p/ float
  float x = atof(argv[1]);
  char op = *argv[2];
  float y = atof(argv[3]);

  // output
  if (op == '+')
    println("%.2f + %.0f = %.2f", x, y, somar(x, y));
  else if (op == '-')
    println("%.2f - %.2f = %.2f", x, y, diminuir(x, y));
  else if (op == '*')
    println("%.2f * %.2f = %.2f", x, y, multiplicar(x, y));
  else if (op == '/')
    println("%.2f / %.2f = %.2f", x, y, dividir(x, y));
  else if (op == '^')
    println("%.2f ^ %.2f = %.2f", x, y, potenciar(x, y));
  else
    println("ERROR: operation not in operations (+, -, *, /, ^)");
}