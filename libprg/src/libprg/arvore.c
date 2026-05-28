//
// Created by aluno on 19/05/2026.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no* esquerda;
    struct no* direita;
} noa_t;

noa_t* criar_noa(int dado) {
    noa_t* no = malloc(sizeof(noa_t));

    if (no == NULL) {
        return NULL;
    }

    no->dado = dado;
    no->esquerda = NULL;
    no->direita = NULL;

    return no;
}

noa_t* adicionar_noa(noa_t* raiz, int dado) {

    // Se a árvore/subárvore estiver vazia
    if (raiz == NULL) {
        return criar_noa(dado);
    }

    // Inserção na direita
    if (dado > raiz->dado) {
        raiz->direita = adicionar_noa(raiz->direita, dado);
    }

    // Inserção na esquerda
    else {
        raiz->esquerda = adicionar_noa(raiz->esquerda, dado);
    }

    return raiz;
}

//travesia_pre ordem
void imprimir_em_ordem(noa_t* raiz) {
    if (raiz != NULL) {
        imprimir_em_ordem(raiz->esquerda);
        printf("%d ", raiz->dado);
        imprimir_em_ordem(raiz->direita);
    }
}

void travesia_pos_ordem(noa_t* raiz) {
    if (raiz == NULL) {

    }
}

// remover
noa_t* remover_noa(noa_t* raiz, int dado) {
    if (dado < raiz->dado) {
        raiz -> esquerda = remover_noa(raiz->esquerda, dado);
    }else if (dado > raiz->dado) {
        raiz -> direita = remover_noa(raiz->direita, dado);
    }else {
        if (raiz->direita == NULL || raiz->esquerda == NULL||NULL) {
            noa_t* temp = raiz -> esquerda ? raiz -> esquerda : raiz -> direita;
            if (temp == NULL) { // 0 filhos
                free(raiz);
                return NULL;
            }
            free(raiz); //1 filho
            return temp;
        }else { // 2 filhos
            //encontra o menor valor da subarvore da direita
            noa_t* retorno = raiz -> direita;
            while (temp && temp -> esquerda !=NULL) {
                tempe = temp -> esquerda;
            }
            raiz -> dado = temp->dado;
            raiz -> direita = remover_noa(raiz->direita, temp -> dado);

        }
    }
    return raiz;
}
// destruir
