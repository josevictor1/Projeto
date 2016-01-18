#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main (void)
{
    char mensagem [10000];
    char cifrada [10000];
    int opc, i, tam_max;
    int chave;

   


        switch (opc)
        {
            case 1:
            system ("cls");
            chave = 0;
            printf ("========== OPCAO 1 - CRIPTOGRAFANDO ==========\n");
            printf ("\n");

            printf ("Digite a mensagem que deseja criptografar: ");
            gets (mensagem);

            tam_max = strlen(mensagem);

            printf("Digite a chave a ser utilizada (1 - 25): ");
            scanf("%d",&chave); fflush(stdin);

            while(chave<1 || chave>25)
            {
                printf("Por favor digite uma chave valida: ");
                scanf("%d",&chave); fflush(stdin);
            }

            for (i=0; i<tam_max; i++)
            {
                cifrada[i] = mensagem[i] + chave;
            }
            cifrada[tam_max] = '\0';

            printf ("\n");
            printf ("Mensagem cifrada: %s", cifrada);
            printf ("\n");
            printf ("\n");
            printf ("\n");
            printf ("\n");

            getchar ();

            break;

        case 2:
            system ("cls");
            chave = 0;
            printf ("========== OPCAO 2 - DECRIPTOGRAFANDO ==========\n");
            printf ("\n");

            printf ("Digite a mensagem que deseja decriptografar: ");
            gets (cifrada);

            tam_max = strlen(cifrada);

            printf("Digite a chave a ser utilizada (1 - 25): ");
            scanf("%d",&chave); fflush(stdin);

            while(chave<1 || chave>25)
            {
                printf("Por favor digite uma chave valida: ");
                scanf("%d",&chave); fflush(stdin);
            }

            for (i=0; i<tam_max; i++)
            {
                mensagem[i] = cifrada[i] - chave;
            }

            mensagem[tam_max] = '\0';

            printf ("\n");
            printf ("Mensagem decifrada: %s", mensagem);

            getchar ();
            break;

            case 3: exit (0);
        }
    
}
