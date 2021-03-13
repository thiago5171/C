#include<stdio.h>

int main(){
    float n,p,b;
    p=0;
    b=2;
    printf("digite o numero que deseja saber a raiz quadrada:\n");
    scanf("%f",&n);
    while ((n-p*p)>0.0001 || (n-p*p)<-0.0001){
        p = (b+(n/b))/2;
        b=p;  
    }
    printf("a raiz quadrada eh igual a %.1f",p);
        
    
}
