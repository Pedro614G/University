#include <stdio.h>

int main ()
{
    int x1, y1;
    x1 = 3; y1 = 5;
    if (x1 > y1)
    y1 = 6;
    printf ("%d %d\n", x1, y1);

    int x2, y2;
    x2 = y2 = 0;
    while (x2 != 11)
    {
        x2 = x2+1; y2 += x2;
    }
    printf ("%d %d\n", x2, y2);

    int i;
    for (i=0; (i<20) ; i++)
    {
    if (i%2 == 0) putchar ('_');
    else putchar ('#');
    }

    int i2;
    for (i2=0;(i2<16);i2++)
    f (i2);
    return 0;
}

void f (int n)
{
    while (n>0) 
    {
        if (n%2 == 0) putchar ('0');
        else putchar ('1');
        n = n/2;
    }
    putchar ('\n');
}