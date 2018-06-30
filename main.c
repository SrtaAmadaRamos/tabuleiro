#include <stdio.h> 
#define COMP 4
#include "functions.c"


int main(){
    
    char matriz[COMP][COMP];
    int posicao[2];
    
    
    for(int i = 0; i < COMP; i++){
        for(int j = 0; j < COMP; j++){
            matriz[i][j] = ' ';
        }
    }    
    
    matriz[2][2] = '*';
    
    paraCimahey(matriz, posicao); // Teste de funcionamento da função

    for(int i = 0; i < COMP; i++){ //colunas
        printf("|");
        for(int j = 0; j < COMP; j++){               //barrinha no inicio e
            printf(" %c ", matriz[i][j]);           //fim de cada linha
        }
        printf("|\n");
    }    
    
    return 1;
    
}


