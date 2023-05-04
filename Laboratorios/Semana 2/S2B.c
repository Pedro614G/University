#include <stdio.h>
#include <stdlib.h>

int main (){
    int A, C, N;
    int aux;

    if (scanf("%d \n%d \n%d", &C, &A, &N) != 3) return 1;

    int com [N];

    if (C < 0 || C > A) abort();

    for (int i = 0; i < N; i++){
        if (scanf ("%d", &aux)){
            if (aux != 1 && aux != -1) abort();
            com [i] = aux;
        }
    }
    for (int i = 0; i < N; i++){
        if (com[i] == 1 && C < A){
            C++;
        }
        if (com[i] == -1 && C > 0){
            C--;
        }
    }
    printf ("%d\n", C);

    return 0;
}