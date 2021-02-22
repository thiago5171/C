#include<stdio.h>
/*
Desenvolva  um programa que calcule o aumento de um salário. Ele deve solicitar o valor do salário e 
a porcentagem do aumento. Exiba o valor do aumento e do novo salário.
*/
int main(){

float salario,aumento,porcent;
printf("digite o valor do seu salario:\n ");
scanf("%f",&salario);

printf("digite em quantos porcento sera o aumento:\n ");
scanf("%f",&aumento);

porcent = (salario*(100+aumento))/100 ;

printf("\no aumento foi de R$%.2f  e o novo salario foi de R$%.2f \n",porcent-salario,porcent);
}
