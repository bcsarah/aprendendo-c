#include <stdio.h>

/* ===== MAIN ===== */
int main(int argc, char *argv[]) {
    printf("argc = %d\n", argc);

    // printa todos os argumentos no chamamento do app
    for (int i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    return 0;
}