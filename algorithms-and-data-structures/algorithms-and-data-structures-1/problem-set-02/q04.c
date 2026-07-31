	#include<stdio.h>
	int main(){
		int n;
		scanf("%d",&n);
		if(n>0){
			float e=1.0;
			int fat=1;
			for(int i=0;i<n;i++){
				fat*=i+1;
				e+=1.0/fat;
			}
			printf("%.2f",e);
		}
	}
