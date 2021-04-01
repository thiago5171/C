#include <stdio.h>
#include <string.h>
int i,i1;

int main() {
  char frase[100];
  char fraseSespaco[100];

  printf("digite uma frase: ");
  fgets(frase, 100, stdin);

  for (i=0, i1=0 ; i < strlen(frase); i++) {
    if(frase[i] != ' ') {
      fraseSespaco[i1] = frase[i];

      i1++;
    }
    if(i==strlen(frase)-1) {
      fraseSespaco[i1+1] = '\0';
    }
  }
  printf("frase sem espaco: %s\n", fraseSespaco);
}
