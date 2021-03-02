#include<stdio.h>

int main(){

int menor, maior, a,b,c;
printf("digite um numero: \n");
scanf("%i",&a);
printf("digite um numero: \n");
scanf("%i",&b);
printf("digite um numero: \n");
scanf("%i",&c);
 menor = a;
 

if(menor > b){
    menor = b;
}else{
    if (menor > c){
    menor = c;
    }
 }
printf("\no menor numero digitado  foi %i\n",menor);
maior = a;

switch (maior){
case maior < b : maior = b; 
break;
case maior < c : maior = c;
break;
default: printf("erro");
    break;
}

 printf("\no maior numero digitado foi %i \n",maior);


}