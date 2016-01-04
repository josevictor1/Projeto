#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	
	char vet[10];
	int i = 0,j;
        /*	
	scanf("%s",vet);
	
	for (j = 0;j < 10;j++){
		if (vet[j] != "\0"){
			printf("\n %d",i);
			i+= vet[j]%26;
			printf("\n %d",vet[j]%26);
		}
	}
	

	printf(" \n %d",i);
	*/
	scanf("%d",&i);
	printf("\n %d",i%300);



	return 0;

}
