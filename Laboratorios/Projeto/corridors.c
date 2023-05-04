#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main () {
    int x1, x2, y1, y2;

    srand(time(0));

    x1 = rand() % 35;
    y1 = rand() % 10;
    x2 = rand() % 35;
    y2 = rand() % 10;

    printf("%d %d \n", x1, y1);
    printf("%d %d \n", x2, y2);

    int ymid;

    if (y1 > y2){
        ymid = y1 - ((y1-y2) / 2);
        for (int i = y1; i > ymid; i--){
            for (int j = 0; j < x1; j++){
                putchar(' ');
            }
            putchar('#');
            putchar('\n');
        }
        if(x1 > x2){
            for (int i = 0; i < x2; i++){
                putchar(' ');
            }
            for (int i = x2; i <= x1; i++){
                putchar('#');
            }
        }
        else{
            for (int i = 0; i < x1; i++){
                putchar(' ');
            }
            for (int i = x1; i <= x2; i++){
                putchar('#');
            }
        }
        putchar('\n');
        for (int i = ymid-1; i > y2; i--){
            for (int j = 0; j < x2; j++){
                putchar(' ');
            }
            putchar('#');
            putchar('\n');
        }
    }
    else{
        ymid = y2 - ((y2-y1) / 2);
        for (int i = y2; i > ymid; i--){
            for (int j = 0; j < x2; j++){
                putchar(' ');
            }
            putchar('#');
            putchar('\n');
        }
        if(x1 > x2){
            for (int i = 0; i < x2; i++){
                putchar(' ');
            }
            for (int i = x2; i <= x1; i++){
                putchar('#');
            }
        }
        else{
            for (int i = 0; i < x1; i++){
                putchar(' ');
            }
            for (int i = x1; i <= x2; i++){
                putchar('#');
            }
        }
        putchar('\n');
        for (int i = ymid-1; i > y1; i--){
            for (int j = 0; j < x1; j++){
                putchar(' ');
            }
            putchar('#');
            putchar('\n');
        }
    }
}