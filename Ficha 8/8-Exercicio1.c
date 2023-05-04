#include <stdio.h>
#include <stdlib.h>

typedef struct slist {
    int valor;
    struct slist * prox;
} * LInt;

LInt newLInt (int x, LInt xs) {
    LInt r = malloc (sizeof(struct slist));
    if (r!=NULL) {
        r->valor = x; r->prox = xs;
    }
    return r;
}

typedef LInt Stack;

void initStack (Stack *s){
    *s = NULL;
}

int SisEmpty (Stack s){
    if(s->valor == NULL) return 0;
    return 1;
}

int Spush (Stack *s, int x){
    if (newLInt(x, *s) != NULL){
        s = newLInt (x, *s);
        return 0;
    }
    return 1;
}

int Spop (Stack *s, int *x){
    if(SisEmpty (*s)){
        return 1;
    }
    *x = (*s) -> valor;
    LInt tmp = *s;
    (*s) = (*s) -> prox;
    free (tmp);
    return 0; 
}

int Stop (Stack s, int *x){
    if(SisEmpty (s)){
        return 1;
    }
    *x = s -> valor;
    return 0;
}

int main () {
    
}