#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void SinitStack (SStack s){
    s->sp = 0;
}

int SisEmpty(SStack s) { 
    return s->sp == 0;
}

int Spush (SStack s, int x){
    if(s->sp == Max) return 1;

    s->values[s->sp++] = x;
    return 0;
}

int Spop (SStack s, int *x) {
    if(s->sp == 0) return 1;

    *x = s->values[--s->sp];

    return 0;
}

int Stop (SStack s, int *x){
    if(s->sp == 0) return 1;

    *x = s->values[s->sp-1];

    return 0;
}

int main (){

}