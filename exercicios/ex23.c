#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  char data[12] = "" ,d[] = "0123456789";
  char sdia[3] = "", smes[3] = "", sano[5] = "";
  int dia, mes, ano;

  printf("digite uma data usando /:\n");
  fgets(data, 100, stdin);

  if (data[2] != '/' || data[5] != '/') {
    printf("a barra nao foi inserida!!\n");

  }

  strncpy(sdia, &data[0], 2);
  sdia[2] = '\0';
  strncpy(smes, &data[3], 2);
  smes[2] = '\0';
  strncpy(sano, &data[6], 4);
  sano[4] = '\0';

  if (strspn(sdia,d) == strlen(sdia)) {
    if (strspn(smes,d) == strlen(smes)) {
      if (strspn(sano,d) == strlen(sano)) {
        dia = atoi(sdia);
        mes = atoi(smes);
        ano = atoi(sano);

        printf("Dia->%d\nmes->%d\nano->%d\n", dia, mes, ano);
      } else {
        printf("ano invalido\n");
      }
    } else {
      printf("mes invalido.\n");
    }
  } else {
    printf("dia invalido\n");
  }
}