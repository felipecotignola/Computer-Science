	#include<stdio.h>
	int recursao(int x,int y){
		if(x%y==0){
			return y;
		}
		int resto=x%y;
		x=y;
		y=resto;
		int mdc=recursao(x,y);
		return mdc;
			
	}
	int main(){
		int x,y;
		scanf("%d %d",&x,&y);
		if(x<y){
			int temp=x;
			x=y;
			y=temp;
		}
		printf("%d",recursao(x,y));
	}
