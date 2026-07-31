	#include <stdio.h>
	int main(){
		int div39=0,div2=0,div5=0;
		for(int i=0;i<10;i++){
			int n;
			scanf("%d",&n);
			if(n%3==0 && n%9==0){
				div39++;
			}
			if(n%5==0){
				div5++;
			}
			if(n%2==0){
				div2++;
			}
			if(n%3!=0 || n%9!=0 ){
				if(n%5!=0 && n%2!=0){
					printf("Numero nao eh divisivel pelos valores\n");
				}	
			}
		}
		printf("%d Numeros sao divisiveis por 3 e por 9\n",div39);
		printf("%d Numeros sao divisiveis por 2\n",div2);
		printf("%d Numeros sao divisiveis por 5\n",div5);			

}
