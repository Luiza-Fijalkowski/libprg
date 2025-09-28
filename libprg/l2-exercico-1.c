//
// Created by luiza on 05/09/2025.
//
#ifndef LIBPRG_H
#define LIBPRG_H

#include <stdbool.h> // para usar bool

// Definição da estrutura da pilha
typedef struct {
    int *dados;     // vetor que armazena os elementos
    int topo;
    int capacidade;
} Pilha;
