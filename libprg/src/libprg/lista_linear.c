//
// Created by aluno on 02/04/2026.
//

#include <stdbool.h>
#include <stdlib.h>

#define CAPACIDADE_INICIAL 10

typedef struct lista_linear {
    int* elementos;
    int tamanho;
    int capacidade;
    bool ordenada;
}lista_linear_t;

lista_linear_t* criar_lista(bool ordenada) {

    lista_linear_t* lista = malloc(sizeof(lista_linear_t));
    lista->elementos = malloc(sizeof(int) * CAPACIDADE_INICIAL);
    lista->tamanho = 0;
    lista->capacidade = CAPACIDADE_INICIAL;
    lista->ordenada = ordenada;

    return lista;
}
int buscar_linear (lista_linear_t* lista) {}

int busca_binaria (lista_linear_t* lista) {}

//incerir
int remover(lista_linear_t* lista, int alvo) {

    int indice;

    if (lista->ordenada) {
        indice = busca_binario(lista, alvo);
    }else {
        indice = busca_linear(lista, alvo);
    }
}

//alternar
//combinar
int destruir_lista_linear(lista_linear_t* lista) {
    free(lista->elementos);
}
