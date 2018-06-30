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

void paraCimahey(char matriz[][COMP], int posicao[2]){

    procuraAst(matriz, posicao);

}
