	#include<stdio.h>
	#include<stdlib.h>
	int main(){
		int n;
		scanf("%d",&n);
		int* vet=malloc(n*sizeof(int));
		for(int i=0;i<n;i++){
			scanf("%d",&(*(vet+i)));
		}
		for(int i=0;i<n;i++){
			int menor=i;
			for(int j=i+1;j<n;j++){
				if(*(vet+j)<*(vet+menor)){
					menor=j;
				}	
			}
			int temp;
			temp=vet[i];
			vet[i]=vet[menor];
			vet[menor]=temp;
		}
		for(int i=0;i<n;i++){
			printf("%d ",*(vet+i));
		}
		free(vet);
	}
