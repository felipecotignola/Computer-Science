        #include <stdio.h>
        int main(){
                int n;
                scanf("%d",&n);
                int positivos=0,negativos=0,zeros=0;
                float pPositivos,pNegativos,pZeros;
                for(int i=0;i<n;i++){
                        long num;
                        scanf("%ld",&num);
                        if(num>0){
                                positivos++;
                        }
                        else if(num<0){
                                negativos++;
                        }
                        else{
                                zeros++;
                        }
                }
                pPositivos=((float)positivos/n)*100.00;
                pNegativos=((float)negativos/n)*100.00;
                pZeros=((float)zeros/n)*100.00;
                printf("%.2f%% POSITIVOS\n",pPositivos);
                printf("%.2f%% NEGATIVOS\n",pNegativos);
                printf("%.2f%% ZEROS",pZeros);
        }
