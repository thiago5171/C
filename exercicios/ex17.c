#include<stdio.h>
 int main(){
   
    float a2,valor;
    int a ,n;
    a = 0;
    
    while (a==0)
        {
        a2 = 1;
        printf("MENU \n[1]-adicao \n[2]-subtracao \n[3]-divisao \n[4]-multiplicacao \n[5]-sair\n \n");
        printf("selecione a opcao do operador logico desejado:\n ");
        scanf("%i",&n);
        if(n==5){
            break; 
            }
        printf("\ndigite o valor  para obter a sua respectiva tabuada: \n");
        scanf("%f",&valor);
        
        printf("\n=-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-=\n");
        while (a2<=10){
            
           
            switch (n){
            case 1:                
                printf(" %.2f + %.0f = %.2f\n ",valor,a2,valor+a2);break;
            case 2:
                printf("%.2f - %.0f = %.2f\n ",valor,a2,valor-a2);break;
            case 3:
                printf("%.2f / %.0f = %.2f\n ",valor,a2,valor/a2);break;
            case 4:
                printf("%.2f * %.0f = %.2f\n ",valor,a2,valor*a2);break;
            default:printf("erro!!");break;
            
            }
 
        a2=a2+1;
        } 
        printf("\n=-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-=\n");  
        }
printf("saida concluida!!!\n\n");
}
