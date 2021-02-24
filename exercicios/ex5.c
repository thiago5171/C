/*
Desenvolva um programa para calcular a redução do tempo de vida de um fumante. Pergunte a quantidade de
cigarros fumados por dia e quantos anos ele já fumou. Considere que um fumante perde 10 minutos de vida a
cada cigarro e calcule quantos dias de vida um fumante perderá. Exiba o total em dias
*/
#include<stdio.h>

int main(){
int cigarro_dia, anos;
float d_anos, tempo, dias;
printf("digite  quantos cigarros são consumidos por dia: ");
scanf("%i",&cigarro_dia);

printf("digite a quantos anos voce ja fuma: ");
scanf("%i",&anos);

d_anos = anos *365;
tempo=cigarro_dia *10;
dias=(((tempo*d_anos)/60)/24);

printf("voce perdeu %.0f dias",dias);
}