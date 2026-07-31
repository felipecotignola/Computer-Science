	#include<stdio.h>
	int main(){
		int a,b,*pa=&a,*pb=&b;
		scanf("%d %d",pa,pb);
		if(pa>pb){
			printf("%p",pa);
		}
		else{
			printf("%p",pb);
		}
	}
