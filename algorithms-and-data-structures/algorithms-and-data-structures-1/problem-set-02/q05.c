	#include<stdio.h>
	int main(){
		float salario,mediaFilhos,mediaSalario,somaSalario=0,maiorSalario;
		int nFilhos,totalFilhos=0,salario100=0,habitantes=1;
		scanf("%f",&salario);
		maiorSalario=salario;
		while(salario>0){
			somaSalario+=salario;
			scanf("%d",&nFilhos);
			totalFilhos+=nFilhos;
			if(salario<=100){
				salario100++;
			}
			scanf("%f",&salario);
			habitantes++;
			if(salario>maiorSalario){
				maiorSalario=salario;
			}
		}
		mediaSalario=somaSalario/(float)habitantes;
		mediaFilhos=(float)totalFilhos/(float)habitantes;
		float percentual=(float)((salario100/habitantes)*100);
		printf("%.2f\n",mediaSalario);
		printf("%.2f\n",mediaFilhos);
		printf("%.2f\n",maiorSalario);
		printf("%.2f",percentual);
	}
