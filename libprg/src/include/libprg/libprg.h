#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

#include <stdbool.h>

typedef struct fila fila_t;
fila_t* criar_fila(int capacidade);
void enfileirar(fila_t* f, int valor);
bool cheia(fila_t fila);
#endif


