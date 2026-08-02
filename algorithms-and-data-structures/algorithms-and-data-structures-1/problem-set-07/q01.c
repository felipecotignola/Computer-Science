	#include<stdio.h>
	void preencher(int vet[]){
		for(int i=0;i<10;i++){
			scanf("%d",&vet[i]);
		}	
	}
	void calcMedia(int vet[]){
		float soma=0.0;
		int acimaMedia=0;
		for(int i=0;i<10;i++){
			soma+=vet[i];
			if(vet[i]>=6){
				acimaMedia++;
			}
		}
		float media=soma/10.0;
		printf("%d %.2f",acimaMedia,media);
	}
	int main(){
		int vet[10];
		preencher(vet);
		calcMedia(vet);
	}

