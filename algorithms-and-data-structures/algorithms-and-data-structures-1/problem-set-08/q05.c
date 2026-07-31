	#include<stdio.h>
	#include<string.h>
	typedef struct{
		char nome[255],endereco[255],telefone[255];
	}Cliente;
	void readline(char* str, int tam){
		fgets(str,tam,stdin);
		int len=strlen(str);
		if(len>0 && str[len-1]=='\n'){	
			str[len-1]='\0';
		}
	}
	void print(Cliente* strct){
		printf("%s %s %s\n",strct->nome,strct->endereco,strct->telefone);	
	}
	int main(){
		Cliente vet[2];
		for(int i=0;i<2;i++){
			readline(vet[i].nome,255);
			readline(vet[i].endereco,255);
			readline(vet[i].telefone,255);
		}
		for(int i=0;i<2;i++){
			print(&vet[i]);
		}
	}
