	#include<stdio.h>
	int calcula(int matriz[5][5]){
		int a=0,b=0,c=0,d=0,e=0;
		for(int i=0;i<5;i++){
			a+=matriz[4][i];
		}
		for(int i=0;i<5;i++){
			b=matriz[i][1];
		}
		for(int i=0;i<5;i++){
			c+=matriz[i][i];
		}
		for(int i=0;i<5;i++){
			d+=matriz[i][4-i];	
		}
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				e+=matriz[i][j];
			}
		}
		return(a,b,c,d,e);
		
	}	
	int main(){
		int mat[5][5];
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				scanf("%d",&mat[i][j];
			}
		}
		printf("%d %d %d %d %d",calcular(matriz);
		
	}
