#include <stdio.h>

int main (){
    int a,b,c;

    if (scanf ("%d %d %d", &a, &b, &c) == 3){

        if (a==b && b==c){
            printf ("OK\n");
        }
        else if (a<=b && b<=c){
            printf ("OK\n");
        }
        else if (a>=b && b>=c){
            printf ("OK\n");
        }
        else{
            printf ("NAO\n");
        }
    }
    return 0;
}