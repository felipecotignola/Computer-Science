	#include<stdio.h>
	#include<string.h>
	void swap(char* inicio,char* p){
		char temp=*inicio;
		*inicio=*p;
		*p=temp;
	}	
	void imprimir(char* vet){
		printf("%s ",vet);
	}
	void permutacao(char* vet,char* inicio,char* fim){
		if(inicio==fim){
			imprimir(vet);
			return;	
		}
		for(char* p=inicio;p<=fim;p++){
			swap(inicio,p);	
			permutacao(vet,inicio+1,fim);
			swap(inicio,p);
		}
	}
	int main(){
		char vet[255];
		scanf("%s",vet);
		permutacao(vet,vet,vet+(strlen(vet)-1));
	}
