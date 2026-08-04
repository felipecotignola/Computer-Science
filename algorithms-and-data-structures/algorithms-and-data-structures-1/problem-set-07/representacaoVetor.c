vet[3]={1,2,3};
vet==&vet[0]==&(*(vet+0))==vet+0==endereco da primeira posicao
vet[0]==*(vet+0)==*vet
vet[1]==*(vet+1)==1[vet]==*(1+vet)==2
vet==&vet[0] -> &vet==endereco de todo o vetor
	
//alocacao dinamica
	int* vet=malloc(n*sizeof(int));
	free(vet);
	

