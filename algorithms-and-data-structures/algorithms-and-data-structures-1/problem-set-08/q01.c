	#include<stdio.h> 
	#include<string.h>
	 typedef struct{
		char nome[255];
		int dia,mes;
	}Pessoa;
	void readline(char* nome,int tam,FILE* input){
		fgets(nome,tam,input);
		nome[strlen(nome)-1]='\0';	
	}
	int main(){
		Pessoa vet[40];
		for(int i=0;i<40;i++){
			readline(vet[i].nome,255,stdin);
			scanf("%d %d",&vet[i].dia,&vet[i].mes);
			getchar();
		}
		for(int i=1;i<=12;i++){
			printf("Aniversariantes do mes %d \n",i);
			for(int j=0;j<40;j++){
				if(vet[j].mes==i){
					printf("%s %d \n",vet[j].nome,vet[j].dia);	
				}
			}
		}	
	}
