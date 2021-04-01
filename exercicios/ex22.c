#include <stdio.h>
#include <string.h>

int main() {
  char s[50], c;
  int p, find_c;
  find_c = -1;
  printf("sstring-> ");
  fgets(s, 100, stdin);

  printf("digite um caractere: ");
  scanf("%c", &c);

  printf("Digite a posicao: ");
  scanf("%d", &p);

  for(int i = p ; i <= strlen(s); i++) {
    if (s[i] == c) {
      find_c = i;
      break;
    }
  }

  if(find_c == -1) {
    printf("NAO ENCONTRADO");
  } else {
    printf("CARACTERE ENCONTRADO NA POSCISAO DO INDICE-> %d.\n", find_c);
  }
}