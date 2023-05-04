#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cycle (int res [], int num_b){
    int r = num_b;
    for (int i = 0; i < num_b; i++){
        for (int j = (i+1); j < num_b; j++){
            if (res [i] == res [j]){
                r = j;
                break;
            }
        }
        if (r != num_b){
            break;
        }
    }
    return r;
}

int main (){
    int casos;
    int num_b;
    int b_ini, aux = 0;
    int res [1000];
    memset(res, 0, 1000 * (sizeof(int)));

    if(scanf("%d", &casos) != 1) return 1;
    int size [casos];

    for (int i = 0; i < casos; i++){
        if (scanf("%d", &num_b) != 1) return 1;
        size [i] = num_b + 1;
        if (scanf("%d", &b_ini) != 1) return 1;

        int ident [num_b];
        memset(ident, 0, num_b * (sizeof(int)));

        res [aux] = b_ini;
        if (scanf("%d", &ident [0]) != 1) return 1;
        for (int j = 1; j < num_b; j++){
            if (scanf (" %d", &ident [j]) != 1) return 1;
        }
        int aux2 = aux + 1;
        for (int j = aux2; j < num_b + aux2; j++){
            int x = res [j-1];
            if (ident [(x-1)] == 0){
                aux ++;
                break;
            }
            res[j] = ident [(x-1)];
            aux ++;
        }
        aux ++;
    
    }
    int y = 0;
    int counter = 0;
    for (int i = 0; i < casos; i++){
        int counter2 = 0;
        int ciclo [(size [i])];
        memset(ciclo, 0, size [i] * sizeof(int));
        for (int j = 0; j < size [i]; j++){
            ciclo [j] = res [y];
            y++;
            counter2++;
            if (ciclo [j] == 0){
                break;
            }
        }
        counter += counter2;
        int aux3 = y - counter2;
        int z = cycle (ciclo, size [i]);
        if (z < size [i] && res [y-1] != 0){
            for (int j = aux3; j < z + aux3; j++){
                printf("%d ", res [j]);
            }
            printf("CICLO INFERNAL");
        }
        else {
            if (res [aux3] != 0){
                printf("%d", res [aux3]);
            }
            for (int j = aux3+1; j < y; j++){
                if (res [j] != 0){
                    printf(" %d", res [j]);
                }
            }
        }
        putchar('\n');
        y = counter;
    }
}