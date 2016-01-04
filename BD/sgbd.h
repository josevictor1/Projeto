#include <stdio.h>
#include <stdlib.h>
#define MAX 300

typedef struct tupla{
        int key;
        double f;
        char string[60];	
}Tupla;

typedef struct tabela{
	int flag;
	int quantidade_tupla;
	char nometabela[20];
        struct tupla Tupla[MAX];
}Tabela;

typedef struct schema{
	int quantidade_tabela;
        struct tabela Tabela[MAX];
}Schema;

int hashtable(int n);
void PreparaEsquema(Schema *esquema);
int inseretabela(Schema *esquema, Tabela tabela);
void preenche_tabela(Tabela* tabela);
void PreparaTabela(Tabela* tabela);
int inseretupla(Schema *esquema, Tupla tupla, int i);
void preenche_tupla(Tupla *tupla);
void mostratabela(Tabela tabela);
void exibe(Tabela t,int n);
