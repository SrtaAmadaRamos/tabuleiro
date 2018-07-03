#include <stdio.h> 
#define COMP 4
#include "functions.c"


int main(){
    
    char matriz[COMP][COMP];
    int posicao[2];
    char op;
    
    inicializarMatriz(matriz);
    limparTela();
    int a = 1;
    while(a){\
        imprimiMatriz(matriz);
        op = getch();
        switch(op){
            case 'w':
            case 'W': 
              paraCimahey(matriz,posicao);
              limparTela();
              break;
            case 's':
            case 'S':
              paraBaixohey(matriz,posicao);
              limparTela();
              break;
            case 'a':
            case 'A': 
              paraEsquerdahey(matriz,posicao);
              limparTela();
              break;
            case 'd':
            case 'D': 
              paraDireitahey(matriz,posicao);
              limparTela();
              break;
            case 'q':
            case 'Q': 
               a = 0;
              break;
            default:
                limparTela();
                printf("Tecla inválida\n");
                printf("(Tecla W) Para cima\n");
                printf("(Tecla A) Para esquerda\n");
                printf("(Tecla S) Para baixo\n");
                printf("(Tecla D) Para direita\n\n");
       }
       
   } 
  

}
