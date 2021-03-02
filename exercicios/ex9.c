/*Desenvolva em cada LP um programa para aprovar o empréstimo bancário para compra de uma casa. O programa deve 
perguntar o valor da casa a comprar, o salário e a quantidade de anos a pagar. O valor da prestação mensal não 
pode ser superior a 30% do salário. Calcule o valor da prestação como sendo o valor da casa a comprar dividido 
pelo número de meses a pagar.*/
#include<stdio.h>

int main(){
float casa, salario,prestacao ,porcent;
int anos ,ano;

printf("digite o preco da casa: \n");
scanf("%f",&casa);

printf("digite o valor do seu salario: \n");
scanf("%f",&salario);

printf("em quantos anos deseja pagar: \n");
scanf("%i",&anos);
ano=anos*12;
prestacao =casa/ano;
porcent = (salario*30)/100;

if(prestacao > porcent){
    printf("\nEMPRESTIMO NEGADO\n");
}else{
    printf("\nEMPRESTIMO APROVADO\n");
}


}