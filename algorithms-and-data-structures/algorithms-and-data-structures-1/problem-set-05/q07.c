	#include<stdio.h>
	void ordenar(int* pa,int* pb,int* pc){
		int temp;	
		if(*pa>*pb){
			temp=*pb;
			*pb=*pa;
			*pa=temp;
		}
		if(*pb>*pc){
			temp=*pb;
			*pb=*pc;
			*pc=temp;
		}
		if(*pa>*pb){
			temp=*pa;
			*pa=*pb;
			*pc=temp;
		}	
	}
	int main(){
		int a,b,c,*pa=&a,*pb=&b,*pc=&c;
		scanf("%d %d %d",pa,pb,pc);
		printf("%d %d %d\n",*pa,*pb,*pc);
		ordenar(pa,pb,pc);	
		printf("%d %d %d",*pa,*pb,*pc);
	}
