#include<stdio.h>

int main(){

    int cont,i,dividendo,divisor;
    cont=0;
    printf("digite o valor do dividendo: \n");
    scanf("%i",&dividendo);
    printf("digite o valor do divisor: \n");
    scanf("%i",&divisor);
    
    for(i=1;i<=dividendo;i+=divisor){
        cont+=1;

    }
    if (dividendo%2==1){
        printf("o resultado da divisao foi %i\n",cont-1);
    }else{
        printf("o resultado da divisao foi %i \n",cont);
    }

}