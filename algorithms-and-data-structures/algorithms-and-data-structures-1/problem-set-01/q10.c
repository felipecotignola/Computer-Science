	#include <stdio.h>
	int main(){
		int vMax,vMotorista;
		scanf("%d %d",&vMax,&vMotorista);
		if(vMotorista<=vMax){
			printf("Motorista respeitou a lei");
		}
		else{
			int dif=vMotorista-vMax;
			if(dif<=10){
				printf("Multa de 50 reais");
			}
			else if(dif<=30){
				printf("Multa de 100 reais");
			}
			else{
				printf("Multa de 200 reais");
			}
		}	
	}
