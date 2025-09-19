#include "pilha.h"

int main () {
    pilha p = constroi_pilha(5);
    int i = 2;
    while (push(i, &p)) {
        i += 2;
        printf ("%s", string_pilha(&p));
    }
    return 0;
}