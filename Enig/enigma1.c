#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void limpar()
{
    system ("clear || cls");
}

char cifrar(char *texto, int chave)
{
    int tam=strlen(texto); /*Pega o tamanho do texto passado*/
    int i=0,x=0,cont=0; /*Variaveis auxiliares*/
    char letra;

    /*Zerando variaveis para reutilizar....*/
    cont=0;
    x=0;
    i=0;

    /*Loop para verificar se uma letra do alfabeto existe no texto. A cada ocorrencia, substitui essa letra
    de acordo com o deslocamento passado por parametro.*/
    for (letra='a'; letra<='z'; letra++)
    {
        while(i<=tam)
        {
            if(texto[i] == letra)
            {
                texto[i]=letra+chave;
                i++;
                cont ++;
                letra='a';
            }
            else if(texto[i] == ' ')
            {
                i++;
                cont ++;
                letra='a';
            }
            else if(texto[i] == toupper(letra))
            {
                texto[i]=toupper(letra+chave);
                i++;
                cont ++;
                letra='a';
            }
            else
            {
                letra++;
            }
            if(cont == tam)
                break;
        }
    }
    limpar();
    return printf("\n\n\t\tCodigo Gerado: %s\n",texto);
}

char decifrar(char *codigo,int chave)
{
    int tam=strlen(codigo); /*Pega o tamanho do texto passado*/
    int i=0,x=0,cont=0; /*Variaveis auxiliares*/
    char alfa[52],letra; /*vetor com alfabeto*/
    limpar();
    printf("\n\t\t Decifrando o codigo %s.......\n",codigo);
    for (letra='a'; letra<='z'; letra++)
    {
        while(i<=tam)
        {
            if(codigo[i] == letra)
            {
                codigo[i]=letra-chave;
                i++;
                cont ++;
                letra='a';
            }
            else if(codigo[i] == ' ')
            {
                i++;
                cont ++;
                letra='a';
            }
            else if(codigo[i] == toupper(letra))
            {
                codigo[i]=toupper(letra-chave);
                i++;
                cont ++;
                letra='a';
            }
            else
            {
                letra++;
            }
            if(cont == tam)
                break;
        }
    }
    return printf("\n\n\t\t Mensagem Decifrada: %s \n",codigo);
}

int main()
{
    int op=3,chave=2,i,confirma=0;
    char *mensagem,*cifrado;
    mensagem = (char *)malloc(100);
    cifrado = (char *)malloc(100);
    /*Exibe o menu para escolher criptografar ou nao...*/
    while (op!=0)
    {
        printf ("---- Sistema de Criptografia - CifraCesar ----\n");
        printf ("\t\t Escolha uma Opcao: \n");
        printf ("1-)Criptografar Texto |\n 2-)Decifrar Codigo |\n 0-)Sair \n");
        scanf ("%d",&op);
        if(op == 1)
        {
            printf("Chave de Deslocamento: ");
            scanf ("%d",&chave);

            printf ("Mensagem: \n");
            fflush(stdin);
            gets(mensagem);
            printf("A mensagem tem o tamanho de %d caracteres: \n %s",strlen(mensagem),mensagem);
            getch();

            cifrar(mensagem,chave);
            cifrado=mensagem;
            confirma=1;
            getch();
            limpar();
        }
        else if(op == 2)
        {
            if(confirma != 1)
            {
                printf("Chave de Deslocamento: ");
                scanf ("%d",&chave);

                printf ("Codigo: \n");
                fflush(stdin);
                gets(cifrado);
                decifrar(cifrado,chave);
                getch();
                limpar();
            }
            else
            {
                printf("Valor do codigo: %s",cifrado);
                getch();
                decifrar(cifrado,chave);
                getch();
                limpar();
                op=0;
            }
        }
        else if (op == 0)
        {
            break;
            free (mensagem);
            free (cifrado);
        }


    }
}
