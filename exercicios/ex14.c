#include<stdio.h>

int main(){

    int cont,i,dividendo,divisor;
    cont=0;
    printf("digite o valor do dividendo: \n");
    scanf("%i",&dividendo);
    printf("digite o valor do divisor: \n");
    scanf("%i",&divisor);
    
    while(dividendo>=divisor)
    {
        dividendo=dividendo-divisor;
    }
    printf("o resto eh -> %i\n",dividendo);
}