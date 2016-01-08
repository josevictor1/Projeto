#include "sgbd.h"

int main(){

	int n = 1;
	Tupla tu;
	Tabela t;
	Schema s;
	PreparaEsquema(&s);
	preenche_tabela(&t);
	PreparaTabela(&t);
	inseretabela(&s,t);

    do{
        printf("1- Inserir tabela\n");
        printf("2- Pesquisar tabela\n");
        printf("3- Mostrar todas as tabelas\n");
        printf("4- Remover tabela\n");
        printf("5- Editar tabela\n");
        
        
        switch(n){
            
            case 1:
            
            case 2:
            
            case 3:
            
            case 4:
            
            case 5:
        }
    }while(n > 1 && n < 6);
	

	return 0;

}
