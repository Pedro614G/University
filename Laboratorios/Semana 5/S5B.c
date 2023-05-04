#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int agentes, lines;

    if (scanf("%d", &agentes) != 1) return 1;
    if (scanf("%d", &lines) != 1) return 1;
    int horas_agente [agentes] [24];
    memset (horas_agente, 0, (agentes * 24) * (sizeof(int)));

    for (int i = 0; i < lines; i++){
        int agnt, h_ini, h_fin;
        if (scanf("%d ", &agnt) != 1) return 1;
        if (scanf("%d ", &h_ini) != 1) return 1;
        if (scanf("%d", &h_fin) != 1) return 1;

        for (int j = h_ini; j <= h_fin; j++){
            horas_agente [agnt-1] [j] = 1;
        }
    }

    for (int i = 0; i < 24; i++){
        int counter = 0;
        for (int j = 0; j < agentes; j++){
            if (horas_agente [j] [i] == 1){
                counter ++;
            }
        }
        if (counter < 2){
            for (int j = 0; j < agentes; j++){
                horas_agente [j] [i] = 0;
            }
        }
    }

    for (int i = 0; i < 24; i++){
        int counter = 0;
        for (int j = 0; j < agentes; j++){
            if (horas_agente [j] [i] == 1){
                counter ++;
            }
        }
        if (counter >= 2){
            printf ("%d", i);
        }
        for (int j = 0; j < agentes; j++){
            if(horas_agente [j] [i] == 1){
                printf(" %d", (j+1));
            }
        }
        if (counter >=2){
            putchar('\n');
        }
    }
    //create another for cycle that looks in the array horas_agente, and prints the agent of that time
}