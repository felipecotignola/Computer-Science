	#include<stdio.h>
	void preencher(int* x,int y[]){
		for(int i=0;i<10;i++){
			scanf("%d",&x[i]);
		}
		for(int i=0;i<10;i++){
			scanf("%d",&(*(y+i)));
		}
	}
	void print(int z[]){
		for(int i=0;i<20;i++){
			printf("%d ",*(z+i));
		}
	}
	void gerar(int* x,int* y){
		int z[20];
		int j=0;
		for(int i=0;i<20;i++){
			if(i%2!=0){
				z[i]=*(j+x);
				j++;
			}
			else{
				z[i]=j[y];
			}
       		}	
		print(z);
	}
	int main(){
		int x[10],y[10];
		preencher(x,y);
		gerar(x,y);
	}
	
