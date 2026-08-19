	#include<stdio.h>
	int substring(char* str){
		int vet[256];
		for(int i=0;i<256;i++){
			vet[i]=-1;
		}
		int inicio=0,tam=0,maxTam=tam;
		for(int i=0;str[i]!='\0';i++){
			if(vet[str[i]]>=inicio){
				inicio=vet[str[i]]+1;
			}
			vet[str[i]]=i;
			tam=i-inicio+1;
			if(tam>maxTam){
				maxTam=tam;
			}	
		}
		return maxTam;
	}
	int strln(char* str){
		int cont=0;
		while(*str!='\0'){
			cont++;
			str++;
		}
		return cont;
	}
	void readline(char* str,int tam){
		fgets(str,255,stdin);
		str[strln(str)-1]='\0';
	}
	int main(){
		char str[255];
		readline(str,255);
		printf("%d",substring(str));	
	}
