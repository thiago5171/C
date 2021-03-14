#include<stdio.h>

int main(){
    int n1, n2, mult=0, i;
    printf("Digite um numero: \n");
    scanf("%i",&n1);
    
    printf("\nDigite outro numero: \n");
    scanf("%i",&n2);
    for (i=1; i <= n2; i++)
    {
        mult+=n1;
    }
    printf("o resultado de %d x %d = %d\n\n", n1, n2, mult);
}