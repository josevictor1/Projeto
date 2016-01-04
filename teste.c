#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[]) {

	int i,j,*d;
	scanf("%d",&i);
	d = (int*)calloc(i,sizeof(int));
	for (j = 0; j < i; j++) {
		printf("%d\n",d[j] );
	}
	free(d);
	
	if(d != NULL){
		for (j = 0; j < i; j++) {
		printf("%d\n",d[j] );
		
		printf("%d\n",*d);
		}
	}else{
		printf("%d\n",*d);
	}
		

	getchar();
	return 0;
}
