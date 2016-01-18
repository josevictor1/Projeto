#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(int argc, char const *argv[]) {
  int i,j,n,**mat,bomba = 0,cont,pontos,x=0,y=0;

  printf("Digite o tamanho n da matriz\n");
  printf("Lembre-se que a matriz é dada por: M(n,n)\n");
  scanf("%d",&n);

  mat = (int**)malloc(n*sizeof(int*));
  for(i = 0; i<n; i++){
    mat[i] =(int*) calloc (n,sizeof(int));
  }

  printf("\e[H\e[2J");
/*
  for (i = 0; i<n;i++){
    for (j = 0; j < n; j++) {
      printf("%d\n",mat[i][j] );
    }
  }
  */

  srand(time(NULL));

  for(i = 0 ; i < n; i++){
    mat[(rand()-i)%n][(rand()+i)%n]= -1;
  }

  while (bomba == 0 && (x < n+1 && y < n+1)) {

    printf("\e[H\e[2J");

    printf("                                      Pontos: %d\n",cont);
    for(i = 0; i < n; i++){
      printf(" [ ");
        for (j = 0; j < n; j++) {
          if (mat[i][j] == 0 || mat[i][j] == -1) {
            printf(" _ ");
          } else {
            printf(" X ");
          }
        }
      printf(" ] ");
      printf("\n");
    }

    printf("Dado digite a posicao da bomba no campo:\n");
    printf("Linha: ");
    scanf("%d",&x);
    printf("\nColuna: ");
    scanf("%d",&y);

    if(x < n && y < n ){
        if (mat[x][y] == -1) {
          bomba++;
        } else{
          mat[x][y] = 1;
          cont++;
        }

    }
  }

  printf("\e[H\e[2J");
  printf(" PONTUAÇÃO FINAL: %d\n",cont);
  printf("     GAME OVER     \n");

  for(i= 0; i<n; i++){
    free(mat[i]);
  }
  free(mat);

  /*
  for(i=0; i < 5; i++){
    free(mat + i);
  }*/

  return 0;
}
