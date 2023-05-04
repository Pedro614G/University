#include <stdio.h>
#include <stdlib.h>

int to_num (char p){
    int res;
    if (p == '@' || p == '*'){
        res = 0;
    }
    if (p == '|' || p == '-'){
        res = 1;
    }
    if (p == 'X' || p == '+'){
        res = 2;
    }
    return res;
}
/*p1 - p2 || @ - * = 0 emp, @ - - = -1 v2, @ - + = -2 v1
          || | - * = 1 v1, | - - = 0 emp, | - + = -1 v2,
          || X - * = 2 v2, X - - = 1 v1, X - + = 0 emp */

int main (){
    int N;
    int vp1 = 0, vp2 = 0, emp = 0;

    if(scanf("%d", &N) != 1) {
        return 1;
    } 

    char p1 [N]; 
    char p2 [N];

    for(int i = 0; i < N; i++){
        char aux1, aux2;
        if (scanf("\n%c", &aux1) != 1) return 1;
        if (scanf("%c", &aux2) != 1) return 1;
        p1 [i] = aux1; p2 [i] = aux2;

        if (p1[i] != '@' && p1[i] != '|' && p1[i] != 'X'){
            abort();
        }
        if (p2[i] != '*' && p2[i] != '-' && p2[i] != '+'){
            abort();
        }
    }
    for(int j = 0; j < N; j++){
        int a = to_num (p1[j]);
        int b = to_num (p2[j]);

        if (a - b == 0){
            emp++;
        }
        if (a - b == 1 || a - b == -2){
            vp1++;
        }
        if (a - b == -1 || a - b == 2){
            vp2++;
        }

    }
    printf ("%d %d %d\n", vp1, vp2, emp);

}