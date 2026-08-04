//alocacao dinamica:
	int **matriz=malloc(linhas*sizeof(int));
	for(int i=0;i<linhas;i++){
		matriz[i]=malloc(colunas*sizeof(int));
	}
	//free
	for(int i=0;i<linhas;i++){
		free(matriz[i]);
	}
	free(matriz);

//sintaxe
	matriz[i]==*(matriz+i)--> matriz[i] aponta para a linha INTEIRA
	matriz[i][j]==*(matriz[i]+j)==*(*(matriz+i)+j);
	&matriz[i][j]==matriz[i]+j==*(matriz+i)+j
