#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

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
void exibe(Tabela t, int n);
int remove_tabela(Schema *esquema, char *tabela);
int buscatabela(Schema esquema, char *tabela, Tabela *t);
int remove_tupla(Schema *esquema, char *tabela, int key);
void mostrattabelas(Schema esquema);



