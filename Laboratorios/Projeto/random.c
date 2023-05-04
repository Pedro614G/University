#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int x, y;

    srand(time(0));

    for(int i = 0; i < 25; i++){
        x = rand() % 100;
        y = rand() % 35;

        printf("%d %d \n", x, y);
    }
}