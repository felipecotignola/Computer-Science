        #include<stdio.h>
        int main(){
                float r,pi=3.14159,perimetro,area;
                scanf("%f",&r);
                perimetro=2*pi*r;
                area=pi*(r*r);
                printf("%.2f %.2f",perimetro,area);
        }
