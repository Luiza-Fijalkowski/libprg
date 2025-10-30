//
// Created by aluno on 30/10/2025.
//
#include "libprg/libprg.h"

int fatorial_interativo(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long fatorial_recursivo(long n) {
    if (n <= 1) return 1;
    return n * fatorial_recursivo(n - 1);
}

