	#include<stdio.h>
	int divisao(int numerador,int denominador){
		if(numerador<denominador){
			return 0;
		}
		int div=1+divisao(numerador-denominador,denominador);
		return div;
	}
	int main(){
		int n,d;
		scanf("%d %d",&n,&d);
		printf("%d",divisao(n,d));
	}
