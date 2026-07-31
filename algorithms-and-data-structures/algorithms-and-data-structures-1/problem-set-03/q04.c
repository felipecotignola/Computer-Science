	#include<stdio.h>
	void procedimento(float x,float y,float z){
		if(x==y && y==z){
			printf("TRIANGULO EQUILATERO\n");
		}
		else if(x!=y && y!=z && x!=z){
			printf("TRIANGULO ESCALENO\n");
		}
		else{
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	int main(){
	float l1,l2,l3;
	scanf("%f %f %f",&l1,&l2,&l3);
		while(l1>0 && l2>0 &&l3>0){
			procedimento(l1,l2,l3);
			scanf("%f %f %f",&l1,&l2,&l3);
		}
	
	}
