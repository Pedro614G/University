#ifndef GAME_H
#define GAME_H

#include "play.c"
//#include "map.c"
#include <ncurses.h>

// Map* mapa;

void game () {
    int y,x,tx,floor,c;
    floor = 0;
    initscr ();
    start_color ();
    init_pair(1,COLOR_WHITE,COLOR_WHITE);
    init_pair(2,COLOR_WHITE,COLOR_BLACK);
    noecho ();
    curs_set(0);
    getmaxyx (stdscr,y,x);
    tx = x;
    x-=(x/10);
    while (floor < 3) {
        erase ();
        mapa = createmap (x,y);
        for (int i = 0;i < y;i++) {
            for (int j = 0;j < x;j++) {
                if (mapa[i][j].ch == '#'){
                    attrset (COLOR_PAIR(1));
                    mvprintw(i,j,"%c",mapa[i][j].ch);
                }
                else {
                    attrset (COLOR_PAIR(2));
                    mvprintw(i,j,"%c",mapa[i][j].ch); 
                }
            }
        }
        refresh ();
        c = play (mapa,x,y);
        if (c == 1) {
            floor++;
        }
        else {
            if (c == 0) {
                erase ();
                mvprintw (y/2,(tx/2)-4,"%s","You Died");
                mvprintw ((y/2)+1,(tx/2)-4,"%s","Press any key to leave");
                refresh();
            }
            if (c == 2) {
                erase();
                mvprintw (y/2,(tx/2)-4,"%s","You ragequitted?");
                mvprintw ((y/2)+1,(tx/2)-18,"%s","Press any key to be stupid somewhere else...");
                refresh();

            }
            break;
        }
    }
    getchar ();
    endwin ();
}

#endif