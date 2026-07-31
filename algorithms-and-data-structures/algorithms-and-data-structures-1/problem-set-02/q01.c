        #include <stdio.h>
        int main(){
                int n;
                scanf("%d",&n);
                int positivos=0,negativos=0,zeros=0;
                for(int i=0;i<n;i++){
                        long  num;
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
                printf("%d POSITIVOS\n",positivos);
                printf("%d NEGATIVOS\n",negativos);
                printf("%d ZEROS\n",zeros);
        }
