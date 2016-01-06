#include "sgbd.h"

int main(){

	int i = 0;
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
	inseretupla(&s,tu,i);
	
	
	printf("\n %s",t.nometabela);
	printf("\n %d",s.quantidade_tabela);
	printf("\n %d",s.Tabela[0].quantidade_tupla);
	printf("\n %d",s.Tabela[0].Tupla[123].key);	
	//exibe(s.Tabela[0],123);	
	

	return 0;

}