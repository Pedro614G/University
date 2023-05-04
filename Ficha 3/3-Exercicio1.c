#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b){
    int t = (*b);
    (*b) = (*a);
    (*a) = t;

}

int main () {
    int a = 42;
    int b = 27;

    swap (&a, &b);
    printf("a = %d\nb = %d",a ,b);

    return 0;
}