	#include<stdio.h>
	void preencher(int a[4][6],int b[4][6]){
		for(int i=0;i<4;i++){
			for(int j=0;j<6;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<4;i++){
			for(int j=0;j<6;j++){
				scanf("%d",&b[i][j]);
			}
		}
	}
	void soma(int a[4][6],int b[4][6],int s[4][6]){
		for(int i=0;i<4;i++){
			for(int j=0;j<6;j++){
				s[i][j]=a[i][j]+b[i][j];
			}
		}
	}
	void dif(int a[4][6],int b[4][6],int d[4][6]){
		for(int i=0;i<4;i++){
			for(int j=0;j<6;j++){
				d[i][j]=a[i][j]-b[i][j];	
			}
		}
	}
	void imprimir(int matriz[4][6]){
		for(int i=0;i<4;i++){
			for(int j=0;j<6;j++){
				printf("%d ",matriz[i][j]);
			}
		}
	}
	int main(){
		int a[4][6],b[4][6];
		preencher(a,b);
		int s[4][6];
		soma(a,b,s);
		int d[4][6];
		dif(a,b,d);
		imprimir(s);
		printf("\n");
		imprimir(d);	
	}
