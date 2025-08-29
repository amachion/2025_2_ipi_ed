#include "vetor.h"
int main () {
    t_vetor vetor;
    int capacidade;
    printf ("qual o tamanho do vetor? ");
    scanf ("%d", &capacidade);
    while (capacidade > 0) {
        inicializa_vetor(&vetor, capacidade);
        preenche_vetor(&vetor);
        //exibe_vetor(&vetor);
        long int ini = time(0);
        selection_sort(&vetor);
        long int fim = time(0);
        printf ("tamanho: %d, tempo: %d\n", capacidade, fim-ini);
        //exibe_vetor(&vetor);
        libera_memoria(&vetor);
        printf ("\nqual o novo tamanho do vetor? ");
        scanf ("%d", &capacidade);
    }
    return 0;
}