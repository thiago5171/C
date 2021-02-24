/*
Desenvolva um programa que calcule o tempo de uma viagem de carro. Pergunte a distância a
percorrer e a velocidade média esperada para a viagem.
*/
#include<stdio.h>

int main(){

float distancia, vm,tm;
printf("digite a distancia percorrida:\n ");
scanf("%f",&distancia);

printf("digite a velocidade media:\n ");
scanf("%f",&vm);

tm= distancia/ vm;
printf("\n o tempo medio foi de %.2f sec \n",tm);
}
