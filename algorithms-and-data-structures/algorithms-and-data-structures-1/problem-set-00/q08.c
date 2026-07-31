     #include<stdio.h>
        int main(){
                float a,b;
                scanf("%f %f",&a,&b);
                float temp=a;
                a=b;
                b=temp;
                printf("%.6f %.6f",a,b);
        }
