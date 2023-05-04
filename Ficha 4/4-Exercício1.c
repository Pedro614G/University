#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

int nota (Aluno a){
    float nota_final = 0;
    float nota_teste = 0; 
    float nota_mini = 0;
    nota_teste = a.teste * 0.8;

    for (int i = 0; i < 6; i++){
        nota_mini += a.miniT [i];
    }
    nota_mini /= 6;

    if (nota_mini < 0.5){
        return 0;
    }

    nota_mini *= 2;

    nota_final = nota_teste + nota_mini;

    if (nota_final < 9.5){
        return 0;
    }
    return nota_final;
}

int procuraNum (int num, Aluno t[], int N){
    // int found = -1;
    // int i = 0;
    // while (i < N && found != -1) {
    //     if(num == t[i].numero) {
    //         found = i;
    //     }
    //     i++;
    // }

    // return found;
    int i;
    for ( i = 0; i < N; i++){
        if(num == t[i].numero) return i;
    }
    return -1;
}

void swap (Aluno *a, Aluno *b){
    Aluno aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void ordenaPorNum (Aluno t [], int N){
    for (int i = 0; i < N; i++){
        if (t[i].numero > t[i+1].numero){
            swap (&t[i], &t [i+1]);
        }
    }
}

int main (){
    Aluno a [4] = {{4444, "André", {2,1,0,2,2,2}, 10.5}
    ,{2222, "Joana", {2,2,2,1,0,0}, 14.5}
    ,{7777, "Maria", {2,2,2,2,2,1}, 18.5}
    ,{3333, "Paulo", {0,0,2,2,2,1}, 8.7}
    };
}