/*Desenvolva em cada LP um programa que calcule o preço a pagar pelo fornecimento de energia elétrica. 
Pergunte a quantidade de kWh consumida e o tipo de instalação: R para residências, I para indústrias e C para 
comércios. Calcule o preço a pagar de acordo com a tabela a seguir:*/
#include<stdio.h>
#include<ctype.h>
int main(){
    float kwh,pagar;
    char instalacao;

    printf("digite a quantidade de kWh consumida: \n");
    scanf("%f",&kwh);

    printf("digite o tipo de instalacao: \nR para residEncias \nI para industrias  \nC para comercios\n");
    scanf("%s",&instalacao);
    
    switch (toupper(instalacao)){
    case 'R':{
        if(kwh>500){
            pagar=kwh*0.65;
        }else{
            pagar=kwh*0.40;
        }
        printf("o preco total a pagar foi de R$%.2f ",pagar);

    }
        break;
    case 'I':{
        if(kwh>5000){
            pagar=kwh*0.55;
        }else{
            pagar=kwh*0.60;
        }
        printf("o preco total a pagar foi de R$%.2f ",pagar);

    }
        break;
    case 'C':{
        if(kwh>1000){
            pagar = kwh*0.60;
        }else{
            pagar=kwh*0.55;
        }
        printf("o preco total a pagar foi de R$%.2f ",pagar);

    }
    default:printf("erro\n");
        break;
    }



    return 0;
}