#include <stdio.h>

int main (){
    int a,b,c,d,e;
    int pos = -1,max = 0;

    if (scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) == 5){

        if (a > max){
        pos = 1;
        max = a;
        }
        if (b > max){
        pos = 2;
        max = b;
        }
        if (c > max){
        pos = 3;
        max = c;
        }
        if (d > max){
        pos = 4;
        max = d;
        }
        if (e > max){
        pos = 5;
        }

        printf ("%d\n",pos);

    }
    return 0;
}