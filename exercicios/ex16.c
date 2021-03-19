

#include<stdio.h>

int main(){

int e=1,d=1, i=1;
float soma=0;

for(i = 1; i <= 50; i+=1){
    
  
    soma += (float)e/d ;
    printf("%f \n",soma);
    d+=1;
    e += 2;
}
printf("%f",soma);


}