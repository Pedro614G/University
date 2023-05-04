#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare (int nome [], int anagrama []){
    int r = 1;
    for (int i = 0; i < 26; i++){
        if (nome [i] != anagrama [i]){
            r = 0;
            break;
        }
    }
    return r;
}

typedef struct
{
    char anag_nome [100];
    int anag_letras [26];
    int yes;
}Nome_a;


typedef struct
{
    char nome [100];
    int letras [26];
    int counter;
}Nome_o;


int main () {
    int casos;
    if (scanf("%d", &casos) != 1) return 1;
    Nome_o n [casos];

    for (int i = 0; i < casos; i++){
        int anag;
        if(scanf("%d\n", &anag) != 1) return 1;
        Nome_a an [anag];
        memset(n[i].nome, '\0', 100 * sizeof(char));
        memset(n[i].letras, 0, 26 * sizeof(int));
        if(fgets(n[i].nome, 100, stdin) == NULL) return 1;
        for (int j = 0; j < 100; j++){
            if(n[i].nome[j] == '\0' || n[i].nome[j] == '\n'){
                break;
            }
            if (n[i].nome [j] != ' '){
                n[i].letras[(n[i].nome[j]) - 65] ++;
            }
        }

        for(int j = 0; j < anag; j++){
            memset(an[j].anag_nome, '\0', 100 * sizeof(char));
            memset(an[j].anag_letras, 0, 26 * sizeof(int));
            if(fgets(an[j].anag_nome, 100, stdin) == NULL) return 1;
            for (int k = 0; k < 100; k++){
                if(an[j].anag_nome[k] == '\0' || an[j].anag_nome[k] == '\n'){
                    break;
                }
                if(an[j].anag_nome[k] != ' '){
                    an[j].anag_letras[(an[j].anag_nome[k]) - 65] ++;
                }
            }
            an[j].yes = compare (n[i].letras, an[j].anag_letras);
        }
        n[i].counter = 0;
        for (int j = 0; j < anag; j++){
            if(an[j].yes == 1){
                if(n[i].counter == 0){
                    printf ("%d", j+1);
                    n[i].counter ++;
                }
                else{
                    printf (" %d", j+1);
                    n[i].counter ++;
                }
            }
        }
        if (n[i].counter == 0){
            printf("%d", -1);
        }
        putchar('\n');
    }
}