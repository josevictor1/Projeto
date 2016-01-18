#include "sgbd.h"

int main(){

	int n,flag;
	char tabela[20];
	Tupla tu;
	Tabela t;
	Schema s;
    PreparaEsquema(&s);
    do{
        
        printf("1- Inserir tabela\n");
        printf("2- Pesquisar tabela\n");
        printf("3- Mostrar todas as tabelas\n");
        printf("4- Remover tabela\n");
        printf("5- Editar tabela\n");
        printf("0- Sair\n");
        scanf("%d",&n);
              
        switch(n){
            
            case 1:

                preenche_tabela(&t);
                flag = inseretabela(&s,t);
                if (flag){
                    mostrattabelas(s);
                }
                else {
                    printf("Não é possível realizar mais impressões o esquema atingiu seu limite.\n");
                }
                break;

            case 2:
		        
                printf("Digite  o nome da tabela: ");
		        scanf("%s",tabela);
		        printf("\n");
		        buscatabela(s,tabela,&t);
                mostratabela(t);
                break;
 
            case 3:

	            mostrattabelas(s);
                break;

            case 4:

                printf("\nDigite o nome da tabela: ");
                scanf("%s",tabela);
                flag = remove_tabela(&s,tabela);
                
                if(flag == 1){
                    printf("\nTabela removida com sucesso.");
                }
                else if(flag == -1){
                    printf("\nOcorreu algum problema na remoção.");
                }
                else{
                    printf("\n A tabela já foi removida ou não existe.");
                }
                break;
                    
            case 5:
                
                do{

                    printf("1- Insere tupla \n");
                    printf("2- Pesquisa tupla \n");
                    printf("3- Remover\n");
                    printf("0- Sair \n");
                    scanf("%d",&n);

                    switch(n){

                        case 1:
                            preenche_tupla(&tu);
                            break;
                        case 2:
                            
                            break;
                        case 3:
                            break;
                        case 4:
                            break;
                    }


                }while(n > 1 && n > 2 );
                break;
        }
    }while(n > 0 && n < 6);


	return 0;

}
