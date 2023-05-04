#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int lines;

    if (scanf("%d", &lines) != 1) return 1;
    int res [lines];

    for (int i = 0; i < lines; i++){
        int counter = 0, maior = 0;
        int nan = 0;

        if (scanf("\n%d", &nan) != 1) return 1;

        for (int j = 0; j < nan; j++){
            int x = 0;
            if (scanf(" %d", &x) != 1) return 1;

            if (x > maior){
                counter++;
                maior = x;
            }
        }
        res [i] = counter;
    }
    for (int i = 0; i < lines; i++)
    {
        printf ("%d\n", res [i]);
    }
}