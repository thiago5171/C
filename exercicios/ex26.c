#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  char fullname[100];
  char nome1[100];
  char lastname[100];
  char imprimir[100] = "";

  int i, pnome;

  printf("nome completo-> ");
  scanf("%[^\n]s",fullname);

  for(i = 0 ; i <=strlen(fullname); i++) {
    if(fullname[i]==' ') {
      break;
    }
    nome1[i] = fullname[i];
  }
  for(i =strlen(fullname) - 1; i >= 0; i--) {
    if(fullname[i]==' ') {
      pnome =i +1;

      break;
    }
  }

  strncpy(lastname, &fullname[pnome],strlen(fullname) -pnome);
  lastname[strlen(lastname) - 1] = '\0';

  if(((int) lastname[strlen(lastname) - 1])< 0) {
    lastname[strlen(lastname)-1]='\0';
  }

  for(i = 0 ; i <=strlen(lastname); i++) {
    lastname[i]= toupper(lastname[i]);
  }

  strcat(imprimir, lastname);
  strcat(imprimir, "/");
  strcat(imprimir, nome1);
  printf("\n->%s\n", imprimir);
}