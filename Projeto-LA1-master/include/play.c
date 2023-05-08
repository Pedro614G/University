#include "map.c"
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
typedef struct player {
    Position p;
    char character;
    int health;
} Player;

void reload_map(int y,int x, Map *m){
    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            mvprintw(i,j,"%c",m[i][j].ch);
        }
    }
}

int movement (Player j,Map *m) {
    int x,y;
    getmaxyx(stdscr,y,x);
    x*=0.9;
    int tx,ty,t;
    t = 0;
    char s = '1';
    while (s != 'q') {
        if (t != time(0)) {
            for (int i = 0;i < 57;i++) {
                mvprintw (0,i,"%s"," ");
            }
        }
        t = time(0);
        s = (char) getchar ();
        tx = j.p.x;
        ty = j.p.y;
        switch (s)
        {
        case 'w':
            j.p.y--;
            if (m[j.p.y][j.p.x].walkable == false) {
                j.p.y++;
                mvprintw (0,0,"%s","Wall here");
            }
            else {
                reload_map (y, x, m);
                mvprintw (j.p.y,j.p.x,"%c",j.character);
                }
            break;
        case 's':
            j.p.y++;
            if (m[j.p.y][j.p.x].walkable == false) {
                j.p.y--;
                mvprintw (0,0,"%s","Wall here");
            }
            else {
                reload_map (y, x, m);
                mvprintw (j.p.y,j.p.x,"%c",j.character);
                }
            break;
        case 'a':
            j.p.x--;
            if (m[j.p.y][j.p.x].walkable == false) {
                j.p.x++;
                mvprintw (0,0,"%s","Wall here");
            }
            else {
                reload_map (y, x, m);
                mvprintw (j.p.y,j.p.x,"%c",j.character);
                }
            break;
        case 'd':
            j.p.x++;
            if (m[j.p.y][j.p.x].walkable == false) {
                j.p.x--;
                mvprintw (0,0,"%s","Wall here");
            }
            else {
                reload_map (y, x, m);
                mvprintw (j.p.y,j.p.x,"%c",j.character);
                }
            break;
        case 'k':
            j.health = 0;
            break;     
        default:
            break;
        }
        refresh ();
        if (m[j.p.y][j.p.x].ch == 's') {
            mvprintw (0,0,"%s","Once you go down you can't go back up are you sure: Y / N");
            refresh();
            s = (char) getchar ();
            switch (s)
            {
            case 'y':
                return 1;
            case 'n':
                break;            
            default:
                break;
            }
        }
        if (j.health == 0) {
            return 0;
        }
    }    
    return 2;
}

int play (Map * m,int x,int y) {
    srand(clock());
    int myx,myy;
    myx = myy = -1;
    while (myx == -1 || myy == -1){       
        myy = (rand () % y);
        myx = (rand () % x);
        if (m[myy][myx].walkable == false) {
            myx = -1;
            myy = -1;
        }
    }
    Player me = {{myy,myx},'@',100};
    mvprintw (me.p.y,me.p.x,"%c",me.character);
    refresh ();
    int r = movement(me,m);
    return r;
}
