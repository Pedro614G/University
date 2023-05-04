#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} * ABin;

ABin newABin (int r, ABin e, ABin d) {
    ABin a = malloc (sizeof(struct nodo));
    if (a!=NULL) {
        a->valor = r; a->esq = e; a->dir = d;
    }
    return a;
}

struct nodo *procura (ABin a, int x){
    struct nodo *r;
    if (a == NULL){
        r = NULL;
    }
    else{
        if (a->valor == x){
            r = a;
        }
        else if (a->valor < x){
            procura (a->dir, x);
        }
        else{
            procura (a->esq, x);
        }
    }
    return r;
}

int nivel (ABin a, int x) {
    if (a == NULL){
        return -1;
    }
    if (a->valor == x){
        return 0;
    }
    if (a->valor < x){
        return 1 + (nivel (a->dir, x));
    }
    else{
        return 1 + (nivel (a->esq, x));
    }
}

void imprimeAte (ABin a, int x){
    if (a != NULL){
        if (a->valor < x){
            imprimeAte(a->esq, x);
            printf("%d\n", a->valor);
            imprimeAte(a->dir, x);
        }
        else{
            imprimeAte(a->esq, x);
        }
    }
}

int main (){
    ABin a, b, c, d, e, f, g;
    a = newABin (1, NULL, NULL);
    b = newABin (3, NULL, NULL);
    c = newABin (5, NULL, NULL);
    d = newABin (7, NULL, NULL);
    e = newABin (2, a, b);
    f = newABin (6, c, d);
    g = newABin (4, e, f);

    imprimeAte (g, 8);
}