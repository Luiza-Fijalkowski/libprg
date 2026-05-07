//
// Created by aluno on 07/05/2026.
//

int* bubble_sort(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] > vetor[j+1]) {
                int aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;

                return vetor;
            }
        }
    }
}