#include <stdio.h>

float multInt1 (int n, float m){
    float r = 0;

    while (n > 0){
        r+=m;
        n--;
    }
    return r;
}

float main () {
    
    int a; float b, res;
    scanf("%d", &a);
    putchar('\n');
    scanf("%f", &b);
    res = multInt1(a,b);
    
    printf("Resultado: %f", res);

    return 0;
}

