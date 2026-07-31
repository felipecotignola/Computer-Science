	#include<stdio.h>
	typedef struct{
		float largura,altura,area;
	}Retangulo;
	void calcArea(Retangulo* ret){
		ret->area=ret->largura*ret->altura;
	}
	int main(){
		int n;
		scanf("%d",&n);	
		for(int i=0;i<n;i++){
			Retangulo ret;
			scanf("%f %f",&ret.largura,&ret.altura);
			calcArea(&ret);	
			printf("%.2f\n",ret.area);	
		}
	}
