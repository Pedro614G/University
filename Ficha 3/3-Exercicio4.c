#include <stdio.h>
#include <stdlib.h>

int soma (int v[], int N){
    int res = 0;
    for (int i = 0; i < N; i++){
        res += v[i];
    }
    return res;
}

int main () {
    int a = 4;
    int x [] = {1,2,3,4,5,6};

    int b = soma (x, a);
    printf("%d", b);
    return 0;
}