	#include<stdio.h>
	int main(){
		int vet[31];
		for(int i=0;i<31;i++){
			scanf("%d",&vet[i]);
		}
		int menor=40,maior=15,soma=0,dias=0;
		for(int i=0;i<31;i++){
			if(vet[i]>maior){
				maior=vet[i];
			}
			if(vet[i]<menor){
				menor=vet[i];
			}
			soma+=vet[i];	
		}
		float media=(float)soma/31.0;
		for(int i=0;i<31;i++){
			if(vet[i]<media){
				dias++;
			}
		}
		printf("%d %d\n",menor,maior);
		printf("%.2f\n",media);
		printf("%d",dias);
	}
