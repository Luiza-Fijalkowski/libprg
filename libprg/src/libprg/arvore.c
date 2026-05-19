//
// Created by aluno on 19/05/2026.
//

#include <stdlib.h>

typedef struct no {
    int dado;
    noa_t* esquerda;
    noa_t* direita;
}noa_t;

noa_t* criar_noa(int dado) {
    noa_t* no = malloc(sizeof(noa_t));
    no->dado = dado;
    no->esquerda = NULL;
    no->direita = NULL;

    return no;
}
int adcionar_noa(noa_t* raiz, int dado) {
    noa_t* novo_no = criar_noa(dado);

    if(raiz->dado < dado) {
        adcionar_noa(raiz->direita, dado);
    }else {adicionar_noa(raiz->esquerda, dado);}

    return 0;
}


// remover
// destruir