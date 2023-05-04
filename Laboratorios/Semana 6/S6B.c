#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome [20];
    int peso;
    int altura;
    int dif_peso;
} Chefes;

int abs (int x){
    if (x < 0){
        x = x * (-1);
    }
    return x;
}

int main () {
    int num;
    if (scanf("%d", &num) != 1) return 1;
    Chefes c [num];
    int ordem [num];

    for (int i = 0; i < num; i++){
        if (scanf("%s", c[i].nome) != 1) return 1;
        if (scanf(" %d", &c[i].peso) != 1) return 1;
        if (scanf(" %d", &c[i].altura) != 1) return 1;

        c[i].dif_peso = abs(90 - c[i].peso);
    }
    for (int i = 0; i < num; i++){
        int aux = 0;
        for (int j = 0; j < num; j++){
            if (c[i].dif_peso > c[j].dif_peso){
                aux++;
            }
            else if(c[i].dif_peso == c[j].dif_peso && c[i].altura < c[j].altura){
                aux++;
            }
            else if(c[i].dif_peso == c[j].dif_peso && c[i].altura == c[j].altura){
                if (strcmp(c[i].nome, c[j].nome) > 0){
                    aux++;
                }
            }
        }
        ordem [i] = aux;
    }
    int aux2 = 0;
    while (aux2 != num){
        for (int i = 0; i < num; i++){
            int x = ordem [i];
            if (aux2 == x){
                printf("%s", c[i].nome);
                printf(" %d", c[i].peso);
                printf(" %d", c[i].altura);
                putchar('\n');
            }
        }
        aux2++;
    }
}