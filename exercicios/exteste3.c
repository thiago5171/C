#include<stdio.h>

int main(){
    float  deposito, taxa, i, soma=0,juros=0;
    printf("digite o valor do deposito: \n");
    scanf("%f",&deposito);
    printf("digite a porcentagem da taxa: \n");
    scanf("%f",&taxa);
    taxa= taxa/100;
    for (i = 1; i <= 24; i++)
    {
        juros= deposito*taxa*i;
        printf("%.1f\n",juros);
        soma+=juros;
    }
    
       
    printf("\no ganho total foi de R$%.2f reais.\n\n",soma);

}