#include <stdio.h>
#include <stdlib.h>

void swap (int v[], int i, int j){
    int aux;
    aux = v[i];
    v[i] = v [j];
    v [j] = aux; 
}

void inverteArray (int v[], int N){
    for (int i = 0; i < N; i++)
    {
        swap (v, i, (N-1));
        N--;
    }
}

int main () {
    int v [] = {1,2,3,4,5,6};
    int N = 6;
    inverteArray(v, N);
    for (int i = 0; i < N; i++){
        printf("%d ", v[i]);
    }

    return 0;
}