#include <stdio.h>

int main ()
{
    /*
    int x1,x2;
    printf ("Indique a dimensao do quadrado: ");
    scanf ("%d", &x1);
    x2 = x1;
    while (x1>0)
    {
        for(int i=0;i < x2;i++)
        {
            putchar ('#');
        }
        putchar ('\n');
        x1 = x1 - 1;
    }

    putchar ( '\n');

    int y1,y2;
    printf ("Indique a dimensao do tabuleiro: ");
    scanf ("%d", &y1);
    y2 = y1;
    while (y1>0)
    {
        if(y1%2 != 0)
        {
            for(int i=0;i < x2;i++)
            {
                if(i%2 == 0)
                putchar ('#');
                else
                putchar ('_');
            }
        }
        else
        {
            for(int i=0;i < y2;i++)
            {
                if(i%2 == 0)
                putchar ('_');
                else
                putchar ('#');
            }
        }
        putchar ('\n');
        y1 = y1 - 1;
    }

    putchar ( '\n');

    int z1,z2,z3;
    printf ("Indique a dimensao do triangulo (horizontal): ");
    scanf ("%d", &z1);
    z3 = z1;
    z2 = 1;
    while (z1>0)
    {
        for(int i=0;i < z2;i++)
        {
            putchar ('#');
        }
        putchar ('\n');
        z2++;
        z1 = z1 - 1;
    }

    while (z3>0)
    {
        z2--;
        for(int i=1;i < z2;i++)
        {
            putchar ('#');
        }
        putchar ('\n');
        z3 = z3 - 1;
    }

    putchar ( '\n');
    

    int w1,w2,w3;
    printf ("Indique a dimensao do triangulo (vertical): ");
    scanf ("%d" ,&w1);
    w2 = w1;
    w3 = 1;
    while (w2 > 0)
    {
        for (int i = 0; i < w2; i++)
        {
            putchar (' ');
        }
        for (int j = 0; j < w3; j++)
        {
            putchar ('#');
        }
        w1++;
        w2--;
        w3+=2;
        putchar ('\n');

    }

    putchar ('\n');
    */
   
   int r1,r2,d1,d2;
   printf ("Indique o raio do circulo pertendido : ");
   scanf ("%d", &r1);
   r2 = r1;
   d1 = r1 * 2;
   int aux1, aux2;
   aux1 = aux2 = 1;

   while (r1 > 0)
    {   
        for (int i = 0; i < r1; i++)
        {
            putchar (' ');
        }

        for (int j = 0; j < aux1 ; j++)
        {
            putchar ('#');
        }
        
        r1-=1;
        aux1+=2;
        putchar ('\n');
    }
    d2 = d1 + 1;
    while (d2 > 0)
    {
        putchar ('#');
        d2--;
    }
    
    putchar ('\n');

    while (r2 > 0)
    {   
        for (int i = 0; i < aux2; i++)
        {
            putchar (' ');
        }

        for (int j = 1; j < (r2*2); j++)
        {
            putchar ('#');
        }
        r2 -= 1;
        aux2 += 1;
        putchar ('\n');
    }
}