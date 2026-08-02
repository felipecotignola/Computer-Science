	#include<stdio.h>
	void preencher(int m[10][10]){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				scanf("%d",&m[i][j]);
			}
		}	
		
	}
	void print(int m[10][10]){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				printf("%d ",m[i][j]);
			}
		}
	}
	void operacoes(int m[10][10]){
		for(int i=0;i<10;i++){
			int temp=m[1][i];
			m[1][i]=m[7][i];
			m[7][i]=temp;
		}
		for(int i=0;i<10;i++){
			int temp=m[i][3];
			m[i][3]=m[i][9];
			m[i][9]=temp;
		}
		for(int i=0;i<10;i++){
			int temp=m[i][i];
			m[i][i]=m[9-i][i];
			m[9-i][i]=temp;
		}
		for(int i=0;i<10;i++){
			int temp=m[4][i];
			m[4][i]=m[i][9];
			m[i][9]=temp;
		}
	}
	int main(){
		int m[10][10];
		preencher(m);
		operacoes(m);
		print(m);
	}	
