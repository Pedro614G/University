#include <stdio.h>

int main () 
{
    int x1, y1;
    x1 = 3; y1 = x1+1;
    x1 = x1*y1; y1 = x1 + y1;
    printf("%d %d\n", x1, y1);
    
    int x2, y2;
    x2 = 0;
    printf ("%d %d\n", x2, y2);
    
    char a, b, c;
    a = 'A'; b = ' '; c = '0';
    printf ("%c %d\n", a, a);
    a = a+1; c = c+2;
    printf ("%c %d %c %d\n", a, a, c, c);
    c = a + b;
    printf ("%c %d\n", c, c);
    
    int x3, y3;
    x3 = 200; y3 = 100;
    x3 = x3+y3; y3 = x3-y3; x3 = x3-y3;
    printf ("%d %d\n", x3, y3);

    return 0;

}