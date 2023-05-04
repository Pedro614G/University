#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int lines;
    char vogais [20] = "AEIOUY";
    char consoantes [20] = "BCDFGHJKLMNPQRSTVWXZ";

    if(scanf ("%d\n", &lines) != 1) return 1;
    int res [lines];

    for (int i = 0; i < lines; i++){
        res [i] = 0;

        char y [1001];
        if (fgets (y, 1001, stdin) == NULL) return 1;
        int vogais_counter = 0;
        int k = 0, aux2 = 0, aux3 = 0;
        while (y[k] != '\0'){
            for (int j = 0; j < 20; j++){
                if (y[k] == vogais [j]){
                    vogais_counter = 1;
                }
                if (y[k] == consoantes [j]){
                    vogais_counter = -1;
                }
            }
            if(y[k] == ' ' || y[k] == 10){
                if (aux3 == 0){
                    res [i] ++;
                }
                aux3 = 0;
                vogais_counter = 0;
            }
            if(vogais_counter == aux2){
                aux3 = 1;
            }
            aux2 = vogais_counter;
            k++;
        }
    }
    for (int i = 0; i < lines; i++){
        printf ("%d\n", res[i]);
    }
    return 0;
}