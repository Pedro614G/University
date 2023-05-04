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

int altura (ABin a) {
    int r = 0;
    int maior = 0;
    if (a != NULL){
        if (altura (a->esq) > altura (a->dir)){
            maior = altura (a->esq);
        }
        else{
            maior = altura (a->dir);
        }
        r = 1 + maior;
    }
    return r;
}

int nFolhas (ABin a){
    int f = 0;
    if(a == NULL){
        return f;
    }
    if(a->esq == NULL && a->dir == NULL){
        f++;
    }
    else{
        f += (nFolhas(a->esq) + nFolhas(a->dir));
    }
    return f;
}

ABin maisEsquerda (ABin a) {
    ABin arv;
    if(a == NULL){
        arv = NULL;
    }
    if(a->esq != NULL){
        maisEsquerda(a->esq);
    }
    else{
        arv = a;
    }
    return arv;
}

void imprimeNivel (ABin a, int l){
    if(l != 0 && a != NULL){
        imprimeNivel(a->dir, l-1);
        imprimeNivel(a->esq, l-1);
    }
    else if (l == 0 && a != NULL){
        printf ("%d", a->valor);
    }
}

int procuraE (ABin a, int x) {
    if(a == NULL){
        return 1;
    }
    else{
        if(a==x){
            return 0;
        }
        else{
            procuraE(a->dir, x);
            procuraE(a->esq, x);
        }
    }
}