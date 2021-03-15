#include<stdio.h>

int main(){
    int n, soma=0, cont=0;
    float media=0;
    while (n!=0){
        printf("digite um numero, caso queira parar digite 0:\n ");
        scanf("%i",&n);
        if (n!=0){
            cont+=1;
            soma+=n;  
        }
    

    }
    media= soma/cont;
    printf("\n\nquantidades de numeros digitado: %i\n",cont);
    printf("soma total dos numero: %i\n",soma);
    printf("a media foi igual a: %.2f\n",media);



}