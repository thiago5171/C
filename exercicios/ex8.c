#include<stdio.h>

int main(){
float n1,n2,oper;
printf("digite  dois numeros\n");
scanf("%f \n%f",&n1,&n2);

printf("\nDIGITE UM NUMERO PARA ESCOLHER UMA DAS SEGUINTES OPERACOES\n[1] soma (+) \n[2] subtracao (-) \n[3] multiplicacao (*) \n[4] divisao  (/)\n");
scanf("%f",&oper);

if(oper>4 && oper < 1){
    printf("erro");
}
if(oper==1){
    printf("%.0f + %.0f = %.0f\n",n1,n2,n1+n2);
}else{
    if(oper==2){
        printf("%.0f - %.0f = %.0f\n",n1,n2,n1-n2);
    }else{
        if(oper==3){
            printf("%.0f x %.0f = %.0f\n",n1,n2,n1*n2);
        }else{
            if(oper==4){
                printf("%.2f / %.2f = %.2f\n",n1,n2,n1/n2);
            }

        }
    }
}



}