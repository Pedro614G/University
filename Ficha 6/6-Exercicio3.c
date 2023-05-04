#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void DinitStack (DStack s){
    s->sp = 0;

    s->size = Max;

    s->values = malloc(sizeof(int) * s->size);
}

int DisEmpty(DStack s) { 
    return s->sp == 0;
}

int Dpush (DStack s, int x){

    if(s->sp == s->size) {
        s->values = realloc(s->values, sizeof(int) * s->size * 2);
        
        if(s->values == NULL){
            s->size = 0;
            s->sp = 0;
            return 1;
        }
        s->size *= 2;
    }

    s->values[s->sp ++] = x;

    return 0;
}

int Dpop (DStack s, int *x) {
    if(s->sp == 0) return 1;


    *x =s->values[--s->sp];

    return 0;
}

int Dtop (DStack s, int *x){
    if(s->sp == 0) return 1;

    *x = s->values[s->sp-1];

    return 0;
}