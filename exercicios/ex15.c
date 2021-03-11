#include <stdio.h>
#include <stdlib.h>

int main () {

int normal, invertido, aux;
printf("Digite o valor : ");
scanf("%d", &normal);

invertido = 0; 
aux = normal; 

while (aux > 0) {
    invertido = (invertido*10) + (aux % 10);
    aux = aux / 10;
    }

    printf("\nNumero normal: %d\nNumero invertido: %d\n", normal, invertido);

    if (normal == invertido) {
        printf("Sao palindromos.\n\n");
        
    }else {
        printf("Nao sao palindromos.\n\n");
        
    }


    


    }