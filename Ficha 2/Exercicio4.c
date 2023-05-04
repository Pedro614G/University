#include <stdio.h>

int mdc2 (int a, int b){
    int res, aux;
    if (a == b){
        res = a;
        return res;
    }
    else if (a > b){
        aux = a - b;
        mdc2 (aux, b);
    }
    else if (a < b){
        aux = b - a;
        mdc2 (a, aux);
    }
}

int main () {
    int res;

    res = mdc2 (126, 45);

    printf ("%d", res);
}
