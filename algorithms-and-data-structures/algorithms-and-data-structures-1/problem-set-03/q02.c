	#include<stdio.h>
	void procedimento(){
		int habitantes=0,filhos;
		float salario,somaSalario=0;
		scanf("%f %d",&salario,&filhos);
		while(salario>0){
			habitantes++;
			somaSalario+=salario;
			scanf("%f %d",&salario,&filhos);
		}
		float media=somaSalario/(float)habitantes;
		printf("%.2f",media);
	}

	int main(){
		procedimento();
	}
