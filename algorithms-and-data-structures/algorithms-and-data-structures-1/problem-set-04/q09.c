	#include<stdio.h>
	int resto(int numerador,int denominador){
		if(numerador<denominador){
			return numerador;
		}
		int r=resto(numerador-denominador,denominador);
		return r;
	}
	int main(){
		int n,d;
		scanf("%d %d",&n,&d);
		printf("%d",resto(n,d));
	}
