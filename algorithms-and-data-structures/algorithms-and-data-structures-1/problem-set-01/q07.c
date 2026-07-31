	#include <stdio.h>
	int main(){
		int y,x;
		scanf("%d",&x);
		if(x<=1){
			y=1;	
		}
		else if(x>1 && x<=2){
			y=2;
		}	
		else if(x>2 && x<=3){
			y=x*x;
		}
		else{
			y=x*x*x;
		}
		printf("%d",y);	
	}
