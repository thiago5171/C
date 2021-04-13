#include <stdio.h>

int main() {
  int t[] = {-10, -8, 0, 1, 2, 5, -2, -4};
  int maior=0,  menor=0, soma=0, cont=0;
  float media=0;
  for(int i=0;i<=8;i++){
     if(i==0){
        maior=t[i];
        menor=t[i];
      }
    
     if(t[i]<menor){
        menor=t[i];
      }
    
      if(t[i]>maior){
         maior=t[i];
      }
      soma= soma+t[i];
      cont+=1;
    
    }
    
media= soma/cont-1;
printf("maior->%i \n",maior);
printf("menor->%i \n",menor);
printf("media->%f\n ",media);
}
