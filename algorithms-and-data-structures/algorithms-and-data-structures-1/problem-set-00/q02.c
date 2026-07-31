	#include<stdio.h>
	int main(){
		//100kilowwat Energ==1/7 salario min
		float sM,kw,valor,valorDesconto;
		int qK;
		scanf("%f %d",&sM,&qK);
		//1kilowwat=1/700 salario min
		kw=sM/700.0;
		printf("%.2f\n",kw);
		valor=qK*kw;
		printf("%.2f\n",valor);
		valorDesconto=valor*0.9;
		printf("%.2f",valorDesconto);
		
	}
