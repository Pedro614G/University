#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int lines;
    if (scanf ("%d", &lines) != 1) return 1;
    int res [lines];

    for (int i = 0; i < lines; i++){
        res [i] = -1;
    }

    for (int i = 0; i < lines; i++){
        int size;
        char word [1000];

        if (scanf("%d ", &size) != 1) return 1;
        if (scanf("%s", word) != 1) return 1;
        int s_word = strlen(word);
        char func [size];

        for (int j = 0; j < s_word - size + 1; j++){
            int x = 0;
            for (int k = j; k < j + size; k++){
                func [x] = word [k];
                x++;
            }
            int z = 1;
            for (int a = 0; a < size; a++){
                for (int b = (a+1); b < size; b++){
                    if (func [a] == func [b]){
                    z = 0;
                    }
                }
            }
    
            if (z == 1){
                res [i] = j;
                break;
            }
        }
    }
    for (int i = 0; i < lines; i++){
        printf("%d\n", res [i]);
    }
}