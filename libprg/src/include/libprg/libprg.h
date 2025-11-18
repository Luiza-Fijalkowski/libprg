#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

#include <stdbool.h>

    //----pilha----
typedef struct pilha pilha_t;

 pilha_t* cria_pilha(int qnt);
void empilhar( pilha_t* pilha, int valor);
int desempilhar(pilha_t* pilha);
int topo_pilha(pilha_t* pilha);
int tamanho_pilha(pilha_t* pilha);
void imprime_pilha(pilha_t* pilha);
void destruir_pilha(pilha_t *pilha);

    //----fila----

 typedef struct fila fila_t;
 fila_t* criar_fila(int capacidade);
 void enfileirar(fila_t* fila, int valor);
 bool cheia(fila_t fila);
 void desenfileirar(fila_t* fila);


    //----lista-----

 typedef struct lista lista_t;
 bool vazia(lista_t* lista);
 static bool cheia(lista_t* lista);
 void inserir_nao_ordenada(lista_t *lista, int valor);
 void inserir_ordenada(lista_t *lista, int valor);
 int busca_linear(lista_t* lista, int valor);
 int busca_binaria(lista_t* lista, int valor);
 lista_t* criar_lista(int capacidade, bool ordenar);
 void inserir_lista(lista_t* lista, int valor);
 int buscar_lista(lista_t* lista, int valor);
 void remover_item_lista(lista_t* lista, int valor);
 void destruir_lista(lista_t* lista);
 void listar_primeiro_elemento_e_tamanho(lista_t* lista);
 void listar(lista_t* lista);


    //----lista_encadeada-----

typedef struct no no_t;
no_t* criar_lista_encadeada(int valor);
void adicionar(no_t** inicio, int valor);
no_t* buscar_lista_encadeada(no_t** inicio, int valor);
void remover(no_t** inicio, int valor);


    //----lista_encadeada_circular----
void adicionar_circular(no_t** inicio, int valor);
void destruir_lista_encadeada_circular(no_t** inicio);

    //----lista encadeada dupla----
typedef struct no_duplo no_duplo_t;
no_duplo_t** criar_lista_encadeada_dupla(int valor);
void adicionar_lista_encadeada_dupla(no_duplo_t** inicio, int valor);
no_duplo_t* buscar_lista_encadeada_dupla(no_duplo_t** inicio, int valor);
void remover_lista_encadeada_dupla(no_duplo_t** inicio, int valor);
void destruir_lista_encadeada_dupla(no_duplo_t** inicio);

    //----arvore----
typedef struct no no_t;
no_t *criar_no(int valor);
void destruir_no(no_t *no);


#endif

