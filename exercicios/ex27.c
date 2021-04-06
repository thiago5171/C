
#include <stdio.h>
#include <string.h>
#include <locale.h> //necessário para usar setlocale


int main() {
setlocale(LC_ALL, "Portuguese");
    char frase1[100], inverso1[100], frase2[100], inverso2[100];
    int i,j;
    printf("digite a primeira frase:\n ");
    fgets(frase1,100,stdin);
    printf("digite a segunda frase:\n ");  
    fgets(frase2,100, stdin);
    
    j=strlen(frase1)-1 ;//CONTADOR PARA O O INVERSO
    
    for(i=0; i <=strlen(frase1)-1; i++){// FOR PARA PASSAR POR CADA CHAR
    
        if (frase1[i]=='A' || frase1[i] == 'a'){// IF PARA QUANDO VER UM 'A' SUBSTITUIR POR *
            inverso1[j]='*';
            j--;
            continue;
        }       
        inverso1[j]=frase1[i];
        j--;
         
    }


  //FRASE2
    j=strlen(frase2)-1 ;
  
    for(i=0;i <=strlen(frase2)-1;i++){
        
        if (frase2[i]=='A' || frase2[i] == 'a'){
            inverso2[j]='*'; 
            j--;
            continue;
        } 
        inverso2[j]=frase2[i];
        j--;
    }
     
    printf("a primeira frase invertida: %s\n",inverso1);
    printf("a segunda frase invertida: %s\n",inverso2);
}  
