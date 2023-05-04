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

typedef struct dlist {
    int valor;
    struct dlist *ant, *prox;
} *DList;

typedef struct {
    DList back, front;
} Deque;

DList newDList (int x, DList xs){
    DList r = malloc (sizeof(struct dlist));
    if (r!=NULL) {
        r->valor = x; r->prox = xs; r->ant = NULL;
    }
    return r;
}

void initDeque (Deque *q){
    q->back = NULL;
    q->front = NULL;
}

int DisEmpty (Deque q){
    if (q.back == NULL) return 0;
    else return 1;
}

int pushBack (Deque *q, int x){
    if(DisEmpty(*q)){
        return 1;
    }
    DList c = newDList(x,NULL);
    q->back->prox = c;
    c->ant = q->back;
    return 0;
}


