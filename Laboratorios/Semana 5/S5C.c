#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int lines;
    char lista_nomes [40] [20];
    memset(lista_nomes, '\0',(40 * 20 * sizeof(char)));
    int n_aparencias [40];
    memset(n_aparencias, 0, (40 * sizeof(int)));

    if (scanf("%d\n", &lines) != 1) return 1;
    for (int i = 0; i < lines; i++){
        
        char linha [1000];
        char nome [20];
        memset (nome, '\0', 20 * sizeof(char));
        int x = 0;
        if (fgets (linha, 1000, stdin) == NULL) return 1;
        int comp_linha = strlen(linha);

        for (int j = 0; j < comp_linha; j++){
            if (linha [j] != ' ' && linha [j] != '\n'){
                nome [x] = linha [j];
                x++;
            }
            else{
                char comparar_nome [20];
                for (int k = 0; k < 40; k++){
                    for (int l = 0; l < 20; l++){
                        comparar_nome [l] = lista_nomes [k] [l];
                    }
                    if (comparar_nome [0] == '\0'){
                        for (int l = 0; l < 20; l++){
                            lista_nomes [k] [l] = nome [l];
                        }
                        n_aparencias [k] ++;
                        break;
                    }
                    else if (strcmp (comparar_nome, nome) == 0){
                        n_aparencias [k] ++;
                        break;
                    }
                }
                memset (nome, '\0', 20 * sizeof(char));
                x = 0;
            }
        }

    }
    int menor = 0;
    for (int i = 1; i < 40; i++){
        if (n_aparencias [i] < n_aparencias [menor] && n_aparencias [i] != 0){
            menor = i;
        }
    }
    for (int j = 0; j < 20; j++){
        if(lista_nomes [menor] [j] == '\0'){
            break;
        }
        printf("%c", lista_nomes [menor] [j]);
    }
    putchar ('\n');
    // create a list that makes correspondance of a name with a number
    // create an array that contains number of times a name has appeared (first name = column 0 etc.)
    // function that checks the list for a name and if it isnt in the list add it to that list
    // function that checks the smallest number in the list
}