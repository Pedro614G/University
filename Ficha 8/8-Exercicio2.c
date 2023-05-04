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

typedef struct {
    LInt inicio,fim;
} Queue;

void initQueue (Queue *q){
    q-> inicio = NULL;
    q-> fim = NULL;
}

int QisEmpty (Queue q){
    return (q.inicio == NULL);
}

int enqueue (Queue *q, int x){
    if(QisEmpty(*q)){
        q->fim = newLInt(x,NULL);
        q->inicio = newLInt(x,NULL);
    }
    else{
        q->fim->prox = newLInt(x,NULL);
        q->fim = newLInt(x,NULL);
    }
    return 0;
}

int dequeue (Queue *q, int *x){
    if(QisEmpty (*q)){
        return 1;
    }
    *x = q->inicio;
    LInt tmp = q->inicio;
    q->inicio = q->inicio->prox;
    free(tmp);

    return 0;
}

int front (Queue q, int *x){
    if(QisEmpty (q)){
        return 1;
    }
    *x = q.inicio;

    return 0;
}

int main () {

}