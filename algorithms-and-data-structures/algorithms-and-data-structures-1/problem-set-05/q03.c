	#include<stdio.h>
	int main(){
		int a,b,c,*pa=&a,*pb=&b,*pc=&c;
		scanf("%d %d %d",pa,pb,pc);
		printf("a %p %d\n",pa,*pa);
		printf("b %p %d\n",pb,*pb);
		printf("c %p %d",pc,*pc);
			
	}
