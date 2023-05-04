#include <stdio.h>
#include <stdlib.h>

void swap (int v[], int i, int j){
    int aux;
    aux = v[i];
    v[i] = v [j];
    v [j] = aux; 
}

int main () {
    int a = 1;
    int b = 2;
    int x [] ={1,2,3,4};

    swap (x, a, b);
    for (int i = 0; i < 4; i++){
        printf("%d ", x[i]);
    }

    return 0;
}