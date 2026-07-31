	#include<stdio.h>
	#include<string.h>
	typedef struct{
		char nome[255],telefone[255];
		float preco;
	}Registro;
	void readline(char* nome,int tam,FILE* input){
		fgets(nome,tam,input);
		nome[strlen(nome)-1]='\0';
	}
	int main(){
		Registro vet[15];
		for(int i=0;i<15;i++){
			readline(vet[i].nome,255,stdin);
			readline(vet[i].telefone,255,stdin);
			scanf("%f",&vet[i].preco);
			getchar();	
		}
		float soma=0.0;
		for(int i=0;i<15;i++){
		soma+=vet[i].preco;	
		}
		float media=soma/15.0;
		printf("%.2f\n",media);
		for(int i=0;i<15;i++){
			if(vet[i].preco<media){
				printf("%s %s\n",vet[i].nome,vet[i].telefone);
			}
		}
		
	}
	
