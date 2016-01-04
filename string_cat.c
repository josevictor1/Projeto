#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int i;
  char vet[10] = {'a','b','c','d','e','f','g','h','i','\0'};
  char vet1[10] = {'j','k','l','m','o','p','q','r','s','\0'};
  char vetR[20];



  for(i = 0;i < 20;i++){
    if(i < 9){
      vetR[i] = vet[i];
    }else{
      vetR[i] = vet1[i-9];
    }
  }

  for(i = 0;i < 20;i++){
    printf("%c",vetR[i]);
  }
  printf("\n");
  printf("%s\n",vetR);

  return 0;
}
