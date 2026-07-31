	#include<stdio.h>
	int main(){
		char a,*pa=&a;
		int b,*pb=&b;
		float c,*pc=&c;
		double d,*pd=&d;
		scanf("%c %d %f %lf",pa,pb,pc,pd);
		printf("char: %c %p %zu bytes\n",*pa,pa,sizeof(a));
		printf("int: %d %p %zu bytes\n",*pb,pb,sizeof(b));
		printf("float: %.2f %p %zu bytes\n",*pc,pb,sizeof(c));
		printf("double: %lf %p %zu bytes\n",*pd,pd,sizeof(d));
		printf("char*: %p %p %zu bytes\n",pa,&pa,sizeof(pa));
		printf("int*: %p %p %zu bytes\n",pb,&pb,sizeof(pb));
		printf("float*: %p %p %zu bytes\n",pc,&pc,sizeof(pc));
		printf("double*: %p %p %zu bytes\n",pd,&pd,sizeof(pd));
	}
