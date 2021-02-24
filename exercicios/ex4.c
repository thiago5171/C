/*
Desenvolva um programa que pergunte a quantidade de km percorridos por um carro alugado pelo usuário,
assim como a quantidade de dias pelos quais.o carro foi alugado. Calcule o preço a pagar, sabendo que
o carro custa R$ 60 por dia e R$ 0,15 por km rodado.
*/
#include<stdio.h>

int main(){

float dia,km,pagar;
printf("digite a quantidade de km percorrido pelo carro:\n ");
scanf("%f",&km);

printf("informe a quantidade de dias pelo qual o carro foi alugado:\n ");
scanf("%f",&dia);

pagar = (km*0.15)+(dia*60);
printf("\no total a pgar pelo carro alugado saiu no valor de R$%.2f",pagar);

}
