	#include<stdio.h>
	void swap(int* pa,float* pb,char* pc){
		int a,*p_a=&a;
		float b,*p_b=&b;
		char c,*p_c=&c;
		scanf("%d %f %c",p_a,p_b,p_c);
		*pa=*p_a;
		*pb=*p_b;
		*pc=*p_c;
	}
	int main(){
		int a,*pa=&a;
		float b,*pb=&b;
		char c,*pc=&c;
		scanf("%d %f %c",pa,pb,pc);
		printf("a:%d b:%.2f c:%c\n",*pa,*pb,*pc);
		swap(pa,pb,pc);
		printf("a:%d b:%.2f c:%c",*pa,*pb,*pc);	
	}
		
