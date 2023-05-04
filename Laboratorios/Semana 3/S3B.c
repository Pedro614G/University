#include <stdio.h>
#include <stdlib.h>

/*7 8 9
  4 5 6
  1 2 3
  
  if (pos - 1 == 3 || pos - 1 == 6 || pos - 1 == 0)
  if (pos + 1 == 4 || pos + 1 == 7 || pos + 1 == 10)
  if (pos + 3 < 9)
  if (pos - 3 > 1)*/


int main (){
    int N, num = 5;
    int x = 0, y = 0;
    if (scanf ("%d", &N) != 1) return 1;

    int pass [N];

    for (int i = 0; i < N ; i++){
        char cod [20];
        for (int cl = 0; cl < 20; cl++){
            cod [cl] = ' ';
        }
        if (scanf ("%s", cod) > 20) return 1;
        for (int j = 0; j < 20; j++){
            if (cod [j] == 'C' && y < 1){
                num += 3;
                y++;
            }
            else if (cod [j] == 'B' && y > -1){
                num -= 3;
                y--;
            }
            else if (cod [j] == 'E' && x > -1){
                num --;
                x--;
            }
            else if (cod [j] == 'D' && x < 1){
                num ++;
                x++;
            }
        }
        pass [i] = num;
    }

    for (int i = 0; i < N; i++){
        printf ("%d", pass [i]);
    }
    printf ("\n");
    return 0;
}
