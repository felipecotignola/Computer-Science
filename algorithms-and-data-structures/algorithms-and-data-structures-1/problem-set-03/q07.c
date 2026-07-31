	#include<stdio.h>
	#include<stdbool.h>
	bool procedimento(int n){
		if(n>0){
			return true;
		}
		else{
			return false;
		}
	}
	int main(){
		int n,numero;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&numero);
			if(procedimento(numero)){
				printf("SIM\n");
			}
			else{
				printf("NAO\n");
			}
		}	
	}
