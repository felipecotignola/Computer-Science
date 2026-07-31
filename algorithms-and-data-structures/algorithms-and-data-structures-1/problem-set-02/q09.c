	#include<stdio.h>
	int main(){
		int lucro1=0,lucro2=0,lucro3=0;
		float percentual,precoCompra,precoVenda,compraTotal=0,vendaTotal=0,lucro,lucroTotal=0;
		scanf("%f",&precoCompra);
		compraTotal+=precoCompra;
		while(precoCompra>0){
			scanf("%f",&precoVenda);
			vendaTotal+=precoVenda;
			lucro=precoVenda-precoCompra;
			lucroTotal+=lucro;
			percentual=lucro/precoCompra;
			if(percentual<0.10){
				lucro1++;
			}
			else if(percentual<=0.20){
				lucro2++;
			}
			else{
				lucro3++;
			}
			scanf("%f",&precoCompra);
			compraTotal+=precoCompra; 
		}
		printf("%d\n",lucro1);
		printf("%d\n",lucro2);
		printf("%d\n",lucro3);
		printf("%.2f %.2f %.2f",compraTotal,vendaTotal,lucroTotal);
}
