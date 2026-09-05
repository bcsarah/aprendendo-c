#include <stdio.h>

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
int main() {
  int x, y;

  /* Calculadora */
  printf("===== [ CALCULADORA ] =====\n\n");

  /* Scan */
  printf("Digite o 1° número: ");
  scanf("%u", &x);

  printf("Digite o 2° número: ");
  scanf("%u", &y);

  /* Mostrar resultados */
  printf("\n%u + %u = %u", x, y, somar(x, y));
  printf("\n%u - %u = %u", x, y, diminuir(x, y));
  printf("\n%u * %u = %u", x, y, multiplicar(x, y));
  printf("\n%u / %u = %u", x, y, dividir(x, y));

  printf("\n%u ^ %u = %u", x, x, aoquadrado(x));
  printf("\n%u ^ %u = %u", y, y, aoquadrado(y));
  printf("\n%u %% %u = %u", x, y, resto(x, y));
  printf("\n%u %% %u = %u", y, x, resto(y, y));
}