void inicializarMatriz(char matriz[][COMP]){
    for(int i = 0; i < COMP; i++){
        for(int j = 0; j < COMP; j++){
            matriz[i][j] = ' ';
        }
    }    
    
    matriz[0][0] = '*';
}

void imprimiMatriz(char matriz[][COMP]){
  for(int i = 0; i < COMP; i++){ //colunas
        printf("|");
        for(int j = 0; j < COMP; j++){               //barrinha no inicio e
            printf(" %c ", matriz[i][j]);           //fim de cada linha
        }
        printf("|\n");
    }    
    printf("\n");
}

int procuraAst(char matriz[][COMP], int posicao[2]){
	int i, j;
	for(i=0 ; i < COMP; i++){
  		for(j=0 ; j < COMP; j++){
  			if(matriz[i][j] == '*'){
  				posicao[0] = i;
  				posicao[1] = j;     //return porque ele sai logo da funcao inteira
  				return 1;    //se fosse break ele continuaria do primeiro for só sairia do segundo
  			}
  		}
  	}
}

void paraCimahey(char matriz[][COMP], int p[2]){

    procuraAst(matriz, p);

    if ( p[0] != 0 ){
        matriz[ p[0] ][ p[1] ] = ' ';
        p[0]--;
        matriz[ p[0] ][ p[1] ] = '*';
    }

}

void paraEsquerdahey(char matriz[][COMP], int p[2]){

    procuraAst(matriz, p);

    if ( p[1] != 0 ){
        matriz[ p[0] ][ p[1] ] = ' ';
        p[1]--;
        matriz[ p[0] ][ p[1] ] = '*';
    }

}

void paraBaixohey(char matriz[][COMP], int p[2]){

    procuraAst(matriz, p);

    if ( p[0] != 3 ){
        matriz[ p[0] ][ p[1] ] = ' ';
        p[0]++;
        matriz[ p[0] ][ p[1] ] = '*';
    }

}

void paraDireitahey(char matriz[][COMP], int p[2]){

    procuraAst(matriz, p);

    if ( p[1] != 3 ){
        matriz[ p[0] ][ p[1] ] = ' ';
        p[1]++;
        matriz[ p[0] ][ p[1] ] = '*';
    }

}

void limparTela(){
   system("@cls||clear");
}
