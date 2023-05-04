#include <stdio.h>

int mdc3 (int a, int b){
    int res;
    while (a != b){
        if (a % b == 0 && a < b){
          b = a;
          res = a;
        }
        if (a % b == 0 && a > b){
          a = b;
          res = b;
        }
        if (a > b){
            a = a % b;
        }
        if (b > a){
            b = b % a;
        }
    }
    return res;
}

int main (){
    int a, b, res;
    
    scanf("%d", &a);
    scanf("%d", &b);

    res = mdc3 (a,b);

    printf ("%d", res);
}