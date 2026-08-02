	#include<stdio.h>
	#include<stdlib.h>
	int main(){
		int n;
		scanf("%d",&n);
		int* vet=malloc(n*sizeof(int));
		int soma=0;
		for(int i=0;i<n;i++){
			scanf("%d",&vet[i]);
			soma+=*(vet+i);
		}
		printf("%d",soma);
	}
