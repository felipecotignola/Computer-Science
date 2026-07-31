	#include<stdio.h>
	int main(){
		int n;
		scanf("%d",&n);
		float soma=0;
		for(int i=1;i<=n;i++){
			soma+=1.0/(float)i;	
		}
		printf("%.2f",soma);
	}
