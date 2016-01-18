#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  int num, x;
  int tent = 1;
  char s = 't';

  srand(time(NULL));
  x = rand() % 100 + 1;

  printf("\n_____________________________________________________________________________");
  printf("\n                   ESTOU PENSANDO EM UM NÚMERO DE 1 a 100");
  printf("\n                                  ADIVINHE!");

  do {
  printf("\nDigite um número: ");
  scanf("%d", &num);

    if (num > x) {
      printf("O NÚMERO QUE ESTOU PENSANDO É MENOR DO QUE %d", num);
    }
    else {
      if (num < x)
        printf("O NÚMERO QUE ESTOU PENSANDO É MAIOR DO QUE %d", num);
      else {
        printf("\n                              VOCÊ ACERTOU!!");
        printf("\n                           Número de tentativas: %d", tent);
        printf("\n                            O número era: %d", x);
      }
    }

  tent++;
  } while (num != x && tent <= 20);

  if (tent > 20) {
    printf("\n\nVOCÊ ULTRAPASSOU O LIMITE DE TENTATIVAS! TENTE OUTRA VEZ!");
    printf("\nO número era: %d", x);
  }

  while (s != 's' && s != 'n') {
    printf("\n\nVOCÊ DESEJA TENTAR OUTRA VEZ? [s/n]: ");
    scanf("%c", &s);

    if (s == 's')
      main();
  }

  return 0;

}
