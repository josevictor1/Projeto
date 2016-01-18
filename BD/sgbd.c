#include "sgbd.h"


int hash0(char *tabela){
    int soma = 0,i = 0;
    while(tabela[i] != '\0'){
        soma = (soma + tabela[i])%MAX;
        i++;
    }
    return soma;
}

int hashtable(int n){
	return n % MAX;
}

void PreparaEsquema(Schema *esquema){

	int i;
	for (i = 0; i < MAX; i++){
		esquema->Tabela[i].flag = -1;
	}
	esquema->quantidade_tabela = 0;
}

void PreparaTabela(Tabela *tabela){

	int i;
	for (i = 0; i< MAX; i++){
		tabela->Tupla[i].key = -1;
	}
	tabela->quantidade_tupla = 0;


}

int inseretabela(Schema *esquema, Tabela tabela){
	int i = 0, key = hash0(tabela.nometabela);

	if(esquema->quantidade_tabela < MAX){
                          
        if(esquema->Tabela[key].flag == -1){ 
            esquema->Tabela[key] = tabela;
            esquema->Tabela[key].flag = key;
		    esquema->quantidade_tabela++;
		    return 1;
        }
        else{
            while (i < MAX && esquema->Tabela[i].flag != -1){
			    i = (i + 1)%MAX;
		    }
		    esquema->Tabela[i] = tabela;
		    esquema->quantidade_tabela++;
		    return 1;
        }
    }
	return 0;

}

int inseretupla(Schema *esquema, Tupla tupla, int i){
	int j = 0;

	if (i < MAX && i >= 0){
	    if(esquema->Tabela[i].flag != -1 && esquema->quantidade_tabela != 0 && esquema->Tabela[i].quantidade_tupla < MAX){
            if(esquema->Tabela[i].Tupla[hashtable(tupla.key)].key == -1 ){
		        esquema->Tabela[i].Tupla[hashtable(tupla.key)] = tupla;
                esquema->Tabela[i].quantidade_tupla++;
			 	return 1;
		    }
		    else{
		     	j = hashtable(tupla.key);

				while(esquema->Tabela[i].Tupla[j].key != -1){
			 	    j = (j + 1) % MAX;
		        }
				esquema->Tabela[i].Tupla[j] = tupla;
                esquema->Tabela[i].quantidade_tupla++;
				return 1;
		    }
		}
		return 0;
	}
	return -1;
}

void preenche_tabela(Tabela *tabela){
	tabela->flag = 1;
	printf("\n Digite o nome da Tabela: ");
	scanf("%s",tabela->nometabela);
}

int remove_tabela(Schema *esquema, char *tabela){

    
    if(esquema->quantidade_tabela != 0){
        int i = 0, h = hash0(tabela);

        if(strcmp(esquema->Tabela[h].nometabela,tabela) == 0 && esquema->Tabela[h].flag != -1){
            esquema->Tabela[h].flag = -1;
            return 1;
        }
        else if(strcmp(esquema->Tabela[h].nometabela,tabela) == 0 && esquema->Tabela[h].flag == -1){
            return -1;
        }
        else{
            while (strcmp(esquema->Tabela[i].nometabela,tabela) != 0 && i < MAX){
                i++;
            }
            if (i == MAX){
                return 0;
            }
            else{
                esquema->Tabela[i].flag = -1;
                return 1;
            }
        }
    }
    return -1;
}

int remove_tupla(Schema *esquema, char *tabela, int key){

    if(key >= 0 && key < MAX){
        int i = 0;

        while(strcmp(esquema->Tabela[i].nometabela,tabela) != 0){
            i++;
        }
        if(i == MAX){
            return 0;
        }
        else if(esquema->Tabela[i].flag == -1){
            return 0;
        }
        else{
            esquema->Tabela[i].flag = -1;
            return 1;
        }
    }
    return -1;
}


int buscatabela(Schema esquema, char *tabela, Tabela *t){

    if(esquema.quantidade_tabela > 0){
        int i,hash = hash0(tabela);
        
        if(strcmp(esquema.Tabela[hash].nometabela,tabela) == 0){
            *t = esquema.Tabela[hash];        
            return 1;
        }
       
        else{
            i = hash + 1;  
            
            while(i != hash && strcmp(esquema.Tabela[i].nometabela,tabela) != 0){
                i++;
            }

            if(strcmp(esquema.Tabela[i].nometabela,tabela) == 0){
	            *t = esquema.Tabela[i];
	            return 1;
            }
            return 0;
        }     
    }

    return -1;
}

int buscatupla(Schema esquema,char *tabela,int key,Tupla *tupla){
    
    int htabela = hash0(tabela), htupla = 0;
    
    if(esquema.Tabela[htabela].flag != -1 && key >= 0){
        htupla = hashtable(key);
        if(esquema.Tabela[htabela].Tupla[htupla].key == key){
            *tupla = esquema.Tabela[htabela].Tupla[htupla];
            return 1;
        }
        else{
           // while( )
        }
    }
}

/*
void PreparaTabela(Tabela* tabela){

	int i;
        tabela.
	for (i = 0; i < 300; i++){
		tabela->Tupla[i] = NULL;
	}


	for(i = 0; i < 300; i++){
		if(tabela->Tupla[i] == NULL)
			printf("\n 1");
	}
}

*/

/*
int inseretupla(Tabela *tabela, Tupla tupla){

	int i = 0;
	Tupla *aux, *aux1 = NULL;

	aux = (Tupla*) malloc(sizeof(Tupla));

	if(aux == NULL){
		return -1;
	}
	*aux = tupla;
	aux->prox = NULL;
	printf("\n j %d",aux->key);
	printf("\n j1 %d", tabela->flag);
	if(tabela->flag != -1){
		if (tabela->Tupla[hashtable(tupla.key)] == NULL){
			tabela->Tupla[hashtable(tupla.key)] = aux;
            tabela->quatidade_tupla++;
		//	printf("\n l %d",hashtable(tupla.key));
		//	printf("\n m %s",tabela->nometabela);
		}
		else{
			aux1 = tabela->Tupla[hashtable(tupla.key)];

			while(aux1->prox != NULL){
				aux1 = aux1->prox;
			}

			aux1->prox = aux;


		}

		return 1;
	}

	return 0;

}
*/
void preenche_tupla(Tupla *tupla){

	printf("\n Digite a chave do elemento: ");
	scanf("%d",&(tupla->key));
	printf("\n Digite um valor real: ");
	scanf("%lf",&(tupla->f));
	printf("\n Digite um texto: ");
	scanf("%s",tupla->string);

}


void mostrattabelas(Schema esquema){
    int i;
    for(i = 0; i < MAX; i++){
        if(esquema.Tabela[i].flag != -1){
            printf("Tabela: %s\n",esquema.Tabela[i].nometabela);
            printf("Quantidade de elementos: %d\n", esquema.Tabela[i].quantidade_tupla);
        }
    }

}

void mostratabela(Tabela tabela){
    int i;

    printf("Tabela: %s \n",tabela.nometabela);
    printf("| ");
    printf("   Chave    |");
    printf("   Valor    |");
    printf("   String    ");
    printf(" |\n");
    for (i = 0; i < MAX; i++){
        if(tabela.Tupla[i].key == -1){
            printf("    %d ", tabela.Tupla[i].key);
            printf("    ");
            printf("    %lf ",tabela.Tupla[i].f);
            printf("   ");
            printf("    %s ",tabela.Tupla[i].string);
            printf("\n");
        }
    }
}

    /*
void mostratabela(Tabela tabela){

	Tupla *aux;
        int i;

	printf("Tabela: %s \n",tabela.nometabela);
	printf("| ");
	printf("   Chave    |");
	printf("   Valor    |");
	printf("   String    ");
	printf(" |");

        for (i = 0, aux = tabela.Tupla[i]; i < 300; aux = tabela.Tupla[i], i++){

		if(tabela.Tupla[i] != NULL){
			printf("\n| ");
			printf(" %d       	 ",tabela.Tupla[i]->key);
			printf(" %lf             ",tabela.Tupla[i]->f);
		    printf(" %s 		 ",tabela.Tupla[i]->string);
			printf(" |");

		}

	}

}
*/


void exibe(Tabela t,int n){
	int i = hashtable(n);

	printf("\n%d", t.Tupla[i].key);
	printf("\n%lf",t.Tupla[i].f);
	printf("\n%s",t.Tupla[i].string);

}
