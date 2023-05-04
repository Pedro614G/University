#include <stdio.h>

int fib2 (int n){
    int a = 1, b = 0, res;
    while (n > 1){
        if (a > b){
            res = a + b;
            b = res;
        }
        else{
            res = a + b;
            a = res;
        }
        n--;
    }
}

int fib1 (int n){
    int res;

    if (n <= 2){
        res = 1;
    }
    else{
        res = fib1 (n-1) + fib1 (n-2);
    }

    return res;
}

int main (){
    int r1, r2, n;
    scanf("%d", &n);
    r1 = fib1 (n);
    r2 = fib2 (n);

    printf ("%d \n", r1);
    printf ("%d", r2);
}