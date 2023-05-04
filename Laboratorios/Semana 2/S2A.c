#include <stdio.h>
#include <stdlib.h>

int main (){
    int num;
    int aux;
    int x = 0,y = 0;

    if (scanf("%d\n", &num) != 1) return 1;

    int cartas [num];

    for (int i = 0; i < num; i++){
        if (scanf("%d", &aux)){
            if (aux < 1 || aux > 78) abort();
            cartas [i] = aux;
        }
    }

    for (int i = 0; i < num; i++){
        if(cartas[i] % 4 == 0){
            x++;
        }
        if(cartas[i] % 4 == 1){
            y--;
        }
        if(cartas[i] % 4 == 2){
            y++;
        }
        if(cartas[i] % 4 == 3){
            x--;
        }
    }
    printf("%d %d\n", x, y);
    
    return 0;
}