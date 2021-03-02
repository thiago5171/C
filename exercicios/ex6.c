#include<stdio.h>

int main(){

int menor,maior, a,b,c;
printf("digite tres  numeros: \n");
scanf("%i %i %i",&a,&b,&c);
//eu atribui diretamente o menor e o maio valor ao primeiro para diminuir o numero de comparações que seriam necessarias
 menor = a;
 
 
 if(a > b && c > b){
     menor = b;
 }
 if(b>c && a>c){
     menor = c;
 }
     
maior = a;
if(a<b && c<b){
    maior = b;
}
if (a<c && b<c){
    maior = c;
}


printf("\no menor numero digitado  foi %i\n",menor);


printf("\no maior numero digitado foi %i \n ",maior);
}