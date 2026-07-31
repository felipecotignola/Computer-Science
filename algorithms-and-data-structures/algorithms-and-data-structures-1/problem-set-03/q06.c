	#include<stdio.h>
	void procedimento(int n){
		float soma=1.0;
		int fat=1;
		for(int i=1;i<+n;i++){
			fat*=i;
			soma+=1.0/(float)fat;
		}
		printf("%.6f",soma);
	}
	int main(){
		int n;
		scanf("%d",&n);
		procedimento(n);
	}
