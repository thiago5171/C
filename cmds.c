#include<stdio.h>

int main(){
// quando  for declara uma variavel que nao ira ser inserida pelo usuario, é necessario que seja atribuido o o valor 0 
// por exemplo
  int a,b;
 // nesse caso nao se necessita atribuir 0 na variavel a
  scanf('%i',&a);
// no entanto  nesse caso se faz necessario atribuir o valor 0 pois o usuario nao esta inserindo nada
  b=0;
  b= a+8;

}
