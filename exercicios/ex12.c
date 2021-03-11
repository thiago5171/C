#include<stdio.h>

int main(){

  int cont,n,i;
  i=0;
  cont=0;
  
  printf("digite um numero para saber se ele eh primo: \n");
  
  scanf("%i",&n);
  
  for(i;i<n;i+=2){
    if(i==2){
      if(n%2==0){
        printf("o numero  nao eh primo!\n");
        break;
      }
    }
    else{
      i-=1;

      if(i > 0 && n % i == 0){
        cont=cont+1;
      }
    }
  }
  if ((cont==0) && (n%2==1)){
    printf("numero eh primo\n");
  }
}