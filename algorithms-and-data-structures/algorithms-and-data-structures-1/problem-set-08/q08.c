	#include<stdio.h>
	#include<stdlib.h>
	int main(){
		srand(6);
		int distancia=rand()%101;
		int consumo,tanque;
		scanf("%d %d",&consumo,&tanque);
		int autonomia=consumo*tanque;
		if(distancia<=autonomia){
			printf("A moto nao precisa parar para abastecer.");
		}
		else{
			int distanciaRestante=distancia-autonomia;
			int paradas=1;
			while(distanciaRestante>autonomia){
				distanciaRestante-=autonomia;
				paradas++;
			}
				
			
			if(paradas>1){
				printf("A moto precisa parar %d vezes para abastecer",paradas);
			}
			else{
				printf("A moto precisa parar 1 vez para abastecer.");
			}
		
		}
	}
