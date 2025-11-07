#include "abb.h"
void inicia_arvore (t_abb *abb) {
    abb->raiz = NULL;
}

int esta_vazia (t_abb *abb) {
    return abb->raiz == NULL;
}

void insere (int i, t_abb *abb) {
    t_no *novo = constroi_no(i);
    if (esta_vazia(abb)) {
        abb->raiz = novo;
    }
    else {
        insere_rec (novo, abb->raiz);
    }
}
void insere_rec (t_no *novo, t_no *atual) {
    if (novo->info > atual->info) { //ir para direita
        if (atual->direita == NULL) 
            atual->direita = novo;
        else
            insere_rec (novo, atual->direita);
    }
    else { //ir para esquerda
        if (atual->esquerda == NULL)
            atual->esquerda = novo;
        else
            insere_rec (novo, atual->esquerda);
    }
}

void print_em_ordem (t_abb *abb) {
    if (esta_vazia(abb))
        prinf ("arvore vazia\n");
    else 
        print_em_ordem_rec (abb->raiz);
}
void print_em_ordem_rec (t_no * atual) {
    if (atual->esquerda != NULL) // navega para esquerda
        print_em_ordem_rec (atual->esquerda);
    printf ("%d ", atual->info); // faz o processamento da informação atual
    if (atual->direita != NULL)  // navega para direita
        print_em_ordem_rec (atual->direita);
}