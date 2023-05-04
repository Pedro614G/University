#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){
    int lines;
    char aux;
    if (scanf("%d\n", &lines) != 1) return 1;
    char res [lines];

    for (int i = 0; i < lines; i++){
        char word [1000];
        if(scanf("%s", word) != 1) return 1;
        int size_word = strlen(word);
        for (int j = 0; j < size_word; j++){
            int k = j+1;
            while (word [k] != '\0'){
                aux = word [k];
                if(word [j] == aux){
                    res [i] = aux;
                }
                k++;
            }
        }
    }

    for (int i = 0; i < lines; i++){
        printf("%c", res [i]);
    }
    printf("\n");
}