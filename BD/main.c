#include "sgbd.h"

int main(){

	int i;
	Tupla tu;
	Tabela t;
	Schema s;
	PreparaEsquema(&s);
	preenche_tabela(&t);
	PreparaTabela(&t);
	inseretabela(&s,t);

	/*
	for(i = 0; i < 300; i++){
		if(t.Tupla[i] == NULL)
			printf("\n 1");
	}*/
      

	preenche_tupla(&tu);
        /*
      	printf("%d",tu.key);*/
	inseretupla(&(s.Tabela[0]),tu);
	
	/*
	printf("\n %s",t.nometabela);
	printf("\n %s",s.Tabela[0].nometabela);
	
	printf("\n");*/	
	exibe(s.Tabela[0],123);	
	

	return 0;

}
