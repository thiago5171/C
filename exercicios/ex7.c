/*Desenvolva um programa que solicite o preço de uma mercadoria e o percentual de desconto.
 Exiba o valor do desconto e o preço a pagar.
 */
#include<stdio.h>

int main(){
    float preco,percent, desconto, pagar;
    
    printf("digite o preco da mercadoria: \n");
    scanf("%f",&preco);
    
    printf("digite o valor do desconto da mercadoria: \n");
    scanf("%f",&percent);
    
    desconto= (preco*percent)/100;
    pagar= preco - desconto;
    printf("o valor do desconto foi de R$%.2f \ne o preco a pagar foi de R$%.2f",desconto,pagar);
}