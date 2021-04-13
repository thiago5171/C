#include <stdio.h>

int main() {
  int l3[10],l2[5],l1[5];
//lista 1  
  for(int i=0;i<5;i++){
      scanf("%i",&l1[i]);    
  }
//lista2
 for(int i=0;i<5;i++){
      scanf("%i",&l2[i]);    
  } 
//juncao
  for(int i=0;i<10;i++){
      if(i<5){
        l3[i]=l1[i];
        printf("%i, ",i);
      }else{
        l3[i]=l2[i]; 
        printf("%i, ",i);
      }
    
  }

for(int i=0;i<10;i++){   
    printf("%i, ",l3[i]);

}  
  
}
