/*
Desenvolva um programa que solicite o preço de uma mercadoria e o percentual de desconto. Exiba o valor
do desconto e o preço a pagar.
*/
#include<stdio.h>

int main(){

float preco, desconto,descontado,pagar;
printf("digite o preço da mercadoria:\n ");
scanf("%f",&preco);

printf("digite o valor da porcentagem do desconto:\n ");
scanf("%f",&desconto);

descontado= (preco * desconto)/100;

pagar = preco - descontado;

printf("o valor do desconto foi de R$%.2f e o valor a pagar é de R$%.2f",descontado,pagar);
}
