	#include<stdio.h>
	float procedimento(int n){
		int aprovados=0;
		float nota,somaAprovados=0;
		for(int i=0;i<n;i++){
			scanf("%f",&nota);
			if(nota>=6){
				aprovados++;
				somaAprovados+=nota;
			}
		}
		float media=somaAprovados/(float)aprovados;	
		return media;
	}
	int main(){
		int alunos;
		scanf("%d",&alunos);
		printf("%.2f",procedimento(alunos));	
	}
		

