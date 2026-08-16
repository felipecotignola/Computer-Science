	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	struct Autor{
		char nome[255];	
	}typedef Autor;
	
	struct Livro{
		char titulo[255];
		int ano;
		Autor* ponteiro;	
	}typedef Livro;
	
	void readline(char* str,int tam){
		fgets(str,tam,stdin);
		str[strlen(str)-1]='\0';
	}
	
	void set(Livro* livro){
		char titulo[255],autor[255];
		int ano;
		readline(autor,255);
		readline(titulo,255);
		scanf("%d",&ano);
		(*livro).ponteiro=malloc(sizeof(Autor));
		strcpy((*((*livro).ponteiro)).nome,autor);
		strcpy((*livro).titulo,titulo);
		(*livro).ano=ano;	
		
	}
	
	void print(Livro* livro){
		printf("%s\n",(*((*livro).ponteiro)).nome);
		printf("%s\n",(*livro).titulo);
		printf("%d\n",(*livro).ano);
	}	
	
	int main(){
		Livro livro;
		set(&livro);
		print(&livro);
		
	}
