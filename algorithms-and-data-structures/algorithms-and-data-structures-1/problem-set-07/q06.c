	#include<stdio.h>	
	int main(){
		int m[4][4];
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				scanf("%d",&m[i][j]);
			}
		}
		int soma=0;
		for(int i=1;i<4;i++){
			for(int j=0;j<i;j++){
				soma+=m[i][j];	
			}
		}
		printf("%d\n",soma);
		for(int i=0;i<4;i++){
			printf("%d ",m[i][i]);
		}
	}
