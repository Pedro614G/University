#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
    char teste [] = "YVNHQEBGOTJYLUDTRJZZSNMZOKXSTSCVHRXDWKFABOUBMWWQXKLVWXICHGDAHVVMUYOPJDNTXWSXOXQZUNKVVVLDERXYLWKHTYKDZNFXTYPZOXKTMPZWWCMVQASM";
    char ordem [8];
    char mens [1000];
    int comp_ord, comp_mens, bloco;

    if (scanf("%s", ordem) != 1) return 1;
    if (scanf("%s", mens) != 1) return 1;

    comp_ord = strlen(ordem);
    comp_mens = strlen(mens);
    char res [comp_mens];
    bloco = (comp_mens / comp_ord) + 1;

    char code [comp_ord] [bloco];
    char decode [comp_ord] [bloco];

    for (int i = 0; i < comp_ord; i++){
        int pos = 0;
        for (int j = i; j < comp_mens; j+=comp_ord){
            if (mens [j] != '\0'){
                code [i] [pos] = mens [j];
                printf("%c|", code [i] [pos]);
                pos++;
            }
        }
        putchar('\n');
    }
    putchar('\n');
    for (int i = 0; i < comp_ord; i++){
        for (int j = 0; j < bloco; j++){
            int aux = ((ordem [i]) - 48) - 1;
            decode [i] [j] = code [aux] [j];
            printf("%c|", decode [i] [j]);
        }
        putchar('\n');
    }
    putchar('\n');
    int aux2 = 0;
    for (int i = 0; i < comp_ord; i++){
        for (int j = 0; j < bloco; j++){
            if (decode [i] [j] >= 65 && decode [i] [j] <= 90){
                res [aux2] = decode [i] [j];
                printf("%c|", res [aux2]);
                aux2++;
            }
        }
        putchar('\n');
    }
    res[aux2] = '\0';
    printf("%s\n", res);
    printf("%d", strcmp (teste,res));
    return 0;

    // 71234865
    // TVQMXKYZRHXUKHVUJRKYTTNNZXLOMYHKZDVPPKQVSWWJZDEVNKXDWZBVMFINWNGLZACTCFODOBHXMXTEKOGWVTJRXUDSQYYXSBAXAPLYTMHOSZULSWVXMODWCWVQ
}