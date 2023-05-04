#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int n;
    char dif;
    int preco;
} Pedidos;

int main () {
    int num;
    if (scanf("%d", &num) != 1) return 1;
    Pedidos o [num];
    int ordem [num];

    for (int i = 0; i < num; i++){
        if (scanf("%d", &o[i].n) != 1) return 1;
        if (scanf(" %c", &o[i].dif) != 1) return 1;
        if (scanf(" %d", &o[i].preco) != 1) return 1;
    }

    for (int i = 0; i < num; i++)
    {
        int aux = 0;
        for (int j = 0; j < num; j++)
        {
            if(o[i].preco < o[j].preco){
                aux++;
            }
            else if(o[i].preco == o[j].preco && o[i].dif > o[j].dif){
                aux++;
            }
            else if(o[i].preco == o[j].preco && o[i].dif == o[j].dif && o[i].n > o[j].n){
                aux++;
            }
        }
        ordem [i] = aux;
    }
    int aux2 = 0;
    while (aux2 != num){
        for (int i = 0; i < num; i++){
            int x = ordem [i];
            if (aux2 == x){
                printf("%d", o[i].n);
                printf(" %c", o[i].dif);
                printf(" %d", o[i].preco);
                putchar('\n');
                break;
            }
        }
        aux2++;
    }
    
}