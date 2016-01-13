#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	
	char vet[10];
	int i = 0,j;
        	
	scanf("%s",vet);
	
	while(vet[j] != '\0' && j < 10){
		printf("\n %d",i);
		i+= vet[j]%26;
		printf("\n %d",vet[j]%26);
        j++;
    }
		
	
	

	printf(" \n %d",i);

	return 0;

}
