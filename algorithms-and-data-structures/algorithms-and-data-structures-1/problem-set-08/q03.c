	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	typedef struct{
		int codigo,nHoras;
		char email[255],pagina;
	}Struct;
	float calc(Struct cliente){
		float preco=35.0;
		if(cliente.nHoras>20){
			preco+=(cliente.nHoras-20)*2.5;
		}
		if(cliente.pagina=='S'){
			preco+=40;	
		}
		return preco;	
	}
	void readline(char* string,int tam){
		fgets(string,tam,stdin);
		string[strlen(string)-1]='\0';
	}
	int main(){
		int n;
		scanf("%d",&n);
		if(n<=500){
			Struct* vet=malloc(n*sizeof(Struct));
			for(int i=0;i<n;i++){
				scanf("%d",&vet[i].codigo);
				getchar();
				readline(vet[i].email,255);
				scanf("%d",&vet[i].nHoras);
				getchar();
				scanf("%c",&vet[i].pagina);
				getchar();
			}			
			for(int i=0;i<n;i++){
				printf("Valor a pagar pelo cliente %d: %.2f\n",i+1,calc(vet[i]));
			}
			free(vet);
		}
	}
