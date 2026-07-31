        #include <stdio.h>
        int main(){
                int a,b;
                scanf("%d %d",&a,&b);
                int soma=a+b;
                if(soma>=10){
                soma+=5;
                }
                else{
                soma+=7;
                }
                printf("%d",soma);
        }
