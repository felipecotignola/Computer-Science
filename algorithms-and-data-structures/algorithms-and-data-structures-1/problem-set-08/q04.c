	#include<stdio.h>
	#include<string.h>
	typedef struct{
		int codCat,area;
		char doacao,nomeObra[255],nomeAutor[255],editora[255];
	}Livro;
	void readline(char* str,int tam){
		fgets(str,tam,stdin);
		int len=strlen(str);
		if(len>0 && str[len-1]=='\n'){
			str[len-1]='\0';
		}
	}
	void setLivro(Livro* livro,int area){
		scanf("%d",&livro->codCat);
		getchar();
		scanf("%c",&livro->doacao);
		getchar();
		readline(livro->nomeObra,255);
		readline(livro->nomeAutor,255);
		readline(livro->editora,255);
		livro->area=area;	
	}
	int main(){
		Livro vet1[1500],vet2[1500],vet3[1500];
		int q1=0,q2=0,q3=0;
		int area; 
		scanf("%d",&area);
			while(area!=-1){	
			if(area==1){
				setLivro(&vet1[q1],area);
				q1++;
			}
			else if(area==2){
				setLivro(&vet2[q2],area);
				q2++;
			}
			else if(area==3){
				setLivro(&vet3[q3],area);
				q3++;
			}
			scanf("%d",&area);
		}
		int codigo;
		scanf("%d",&codigo);
		int encontrou=0;
		while(codigo!=-1){
			for(int i=0;i<q1;i++){
				if(vet1[i].codCat==codigo){
					printf("EXATAS\n");
					encontrou=1;
					i=q1;
				}
			}
			if(!encontrou){
				for(int i=0;i<q2;i++){  						
					if(vet2[i].codCat==codigo){
						printf("HUMANAS\n");
						encontrou=1;
						i=q2;
					}
				}
			}
			if(!encontrou){
				for(int i=0;i<q3;i++){
					if(vet3[i].codCat==codigo){
						printf("BIOLOGICAS\n");
						encontrou=1;
						i=q3;
					}
				}

			}	
			encontrou=0;
			scanf("%d",&codigo);
		}
	}
