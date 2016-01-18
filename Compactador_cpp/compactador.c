
/*******************************************************************************
Sistema Para compactacao de arquivos utilizando os metodos hufmann e Runlenght

Analista - Eduardo de Souza

Desenvolvedor - Eduardo de Souza

Data Desenvolvimento: 06/11/2008 23:00

Data última Alteração: DD/MM/AAAA HH:MM

Entregue protocolo 11

*******************************************************************************/

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;
void learquivo(char *vet,char arqorigem[20])
{
	fstream arqB;
	arqB.open(arqorigem,ios::in);
	char n[70];
	int i=0;
	while(!arqB.eof())
	{
		arqB.read(n,1);
		n[1]=0;
		if(!arqB.eof())
		{
			vet[i]=n[0];
			i++;
		}
	}
	vet[i]=0;
	cout.flush();
	arqB.close();
		 
}
void comprime(char *vet, int tam)
{
	int i;
	
	for(i=0;i<tam;i++)
	{ 

		if(vet[i]==vet[i+1]&&vet[i]==vet[i+2])
		{
		   int j,q,t;
		   j=i+2;
		   q=2;
		   t=0;
		   vet[i+1]='¬';
		   while(vet[i]==vet[j]&&t!=10)
		   {
			   vet[j]='¬';
			   j++;
			   if(q<10)
			   {
					q++;
			   }
			   if(q>=10&&t<10)
			   {   
					t++;
			   }
		   }
		   if(q<10)
		   {
			   if(q==3)
			   {
				 vet[i+1]='©';
				 vet[i+2]=q+48;
				 }
			   if(q==4)
			   {
				 vet[i+1]='©';
				 vet[i+2]=q+48;
				 }
			   if(q==5)
			   {
				 vet[i+1]='©';
				 vet[i+2]=q+48;
				 }
			   if(q==6)
			   {
				 vet[i+1]='©';
				 vet[i+2]=q+48;
				 }
			   if(q==7)
			   {
				 vet[i+1]='©';
				 vet[i+2]=q+48;
				 }
			   if(q==8)
			   {
				 vet[i+1]='©';
				 vet[i+2]=q+48;
				 }
			   if(q==9)
			   {
				 vet[i+1]='©';
				 vet[i+2]=q+48;
				 }	 
		   }
		   else if(q>=10&&q<100)
		   {
			   vet[i+1]='æ';
			   vet[i+2]=t+47; 
		   }
		   i+=t+q-1;
		}
		else if(vet[i]=='a'&&vet[i+1]=='s')//as
		   {
			  vet[i]='¦';
			  vet[i+1]='¬';
			  
		   }
		else if(vet[i]=='e'&&vet[i+1]=='s')//es
		   {
			 vet[i]='¨';
			 vet[i+1]='¬';
			 
		   }
		else if(vet[i]=='o'&&vet[i+1]=='s')//os
		   {
			  vet[i]='®';
			  vet[i+1]='¬';
			  
		   }
		else if(vet[i]=='u'&&vet[i+1]=='s')//us
		   {
			  vet[i]='«';
			  vet[i+1]='¬';
			  
		   }
		else if(vet[i]=='ã'&&vet[i+1]=='o')//ão
		   {
			  vet[i]='Ä';
			  vet[i+1]='¬';
			  
		   }
		else if(vet[i]=='e'&&vet[i+1]=='m')//em
		   {
			  vet[i]='~';
			  vet[i+1]='¬';
			  
		   }
		else if(vet[i]=='n'&&vet[i+1]=='o')//no
		   {
			  vet[i]='^';
			  vet[i+1]='¬';
			  
		   }
		else if(vet[i]=='n'&&vet[i+1]=='a')//na
		   {
			  vet[i]='¿';
			  vet[i+1]='¬';
			  
		   }
		else if(vet[i]=='a'&&vet[i+1]=='m')//am
		   {
			  vet[i]='´';
			  vet[i+1]='¬';
			  
		   }
		else if(vet[i]=='p'&&vet[i+1]=='a')//pa
		   {
			  vet[i]='_';
			  vet[i+1]='¬';
			  
		   }
		else if(vet[i]=='r'&&vet[i+1]=='a')//ra
		   {
			  vet[i]='ª';
			  vet[i+1]='¬';
			  
		   }
		else if(vet[i]=='d'&&vet[i+1]=='a')//da
		   {
			  vet[i]='ƒ';
			  vet[i+1]='¬';
			  
		   }
		else if(vet[i]=='d'&&vet[i+1]=='e')//de
		   {
			  vet[i]='`';
			  vet[i+1]='¬';
			  
		   }
		   else if(vet[i]=='d'&&vet[i+1]=='o')//do
		   {
			  vet[i]='§';
			  vet[i+1]='¬';
			  
		   }
		   else if(vet[i]=='q'&&vet[i+1]=='u'&&vet[i+2]=='e')//que
		   {
			  vet[i]='1';
			  vet[i+1]='a';
			  vet[i+2]='¬';
			  
		   }
		   else if(vet[i]=='m'&&vet[i+1]=='e'&&vet[i+2]=='n')//men
		   {
			  vet[i]='1';
			  vet[i+1]='b';
			  vet[i+2]='¬';
			  
		   }
		   else if(vet[i]=='c'&&vet[i+1]=='o'&&vet[i+2]=='m')//com
		   {
			  vet[i]='1';
			  vet[i+1]='c';
			  vet[i+2]='¬';
			  
		   }
		   else if(vet[i]=='i'&&vet[i+1]=='n'&&vet[i+2]=='f')//inf
		   {
			  vet[i]='1';
			  vet[i+1]='d';
			  vet[i+2]='¬';
			  
		   }
		   else if(vet[i]=='p'&&vet[i+1]=='o'&&vet[i+2]=='r')//por
		   {
			  vet[i]='1';
			  vet[i+1]='e';
			  vet[i+2]='¬';
			  
		   }
		   else if(vet[i]=='c'&&vet[i+1]=='a'&&vet[i+2]=='n')//can
		   {
			  vet[i]='1';
			  vet[i+1]='f';
			  vet[i+2]='¬';
			  
		   }
		   else if(vet[i]==' '&&vet[i+1]=='o'&&vet[i+2]=='u')// o 
		   {
			  vet[i]='1';
			  vet[i+1]='g';
			  vet[i+2]='¬';
			  
		   }
		   else if(vet[i]=='u'&&vet[i+1]=='m'&&vet[i+2]=='a')//uma
		   {
			  vet[i]='1';
			  vet[i+1]='h';
			  vet[i+2]='¬';
			  
		   }
		   else if(vet[i]==' '&&vet[i+1]=='e'&&vet[i+2]==' ')// e 
		   {
			  vet[i]='&';
			  vet[i+1]='¿';
			  vet[i+2]='¬';
		   }
		   else if(vet[i]==' '&&vet[i+1]=='a'&&vet[i+2]==' ')// a 
		   {
			  vet[i]='&';
			  vet[i+1]='-';
			  vet[i+2]='¬';
		   }

	}
	
	
	cout<<"\nConversão Concluida\n";
}
int calculavetB(char *vet,int tam)
{
	int i,tamanhob=0;
		
	for(i=0;i<tam;i++)
	{

		if(vet[i+1]=='©')
			   {
				 tamanhob+=vet[i+2]-48;
			   }
		else if(vet[i+1]=='æ')
		   {
			   tamanhob+=10;
			   tamanhob+=vet[i+2]-48;
		   }
		else if(vet[i]=='¦')
		   {
			  tamanhob+=2;
		   }
		else if(vet[i]=='¨')
		   {
			 tamanhob+=2;
		   }
		else if(vet[i]=='®')
		   {
			  tamanhob+=2;
		   }
		else if(vet[i]=='«')
		   {
			  tamanhob+=2;
		   }
		else if(vet[i]=='Ä')
		   {
			  tamanhob+=2;
		   }
		else if(vet[i]=='~')
		   {
			  tamanhob+=2;
		   }
		else if(vet[i]=='^')
		   {
			  tamanhob+=2;
		   }
		else if(vet[i]=='¿')
		   {
			  tamanhob+=2;
		   }
		else if(vet[i]=='´')
		   {
			  tamanhob+=2;			  
		   }
		else if(vet[i]=='_')
		   {
			  tamanhob+=2;			  
		   }
		else if(vet[i]=='ª')
		   {
			  tamanhob+=2;			  
		   }
		else if(vet[i]=='ƒ')
		   {
			  tamanhob+=2;
			  
		   }
		else if(vet[i]=='`')
		   {
			  tamanhob+=2;
			  
		   }
		else if(vet[i]=='§')
		   {
			  tamanhob+=2;
			  
		   }
		else if(vet[i]=='1'&&vet[i+1]=='a')
		   {
			  tamanhob+=3;
			  i++;
			  
		   }
		else if(vet[i]=='1'&&vet[i+1]=='b')
		   {
			  tamanhob+=3;
			  i++;
			  
		   }
		else if(vet[i]=='1'&&vet[i+1]=='c')
		   {
			  tamanhob+=3;
			  i++;
			  
		   }
		else if(vet[i]=='1'&&vet[i+1]=='d')
		   {
			  tamanhob+=3;
			  i++;
			  
		   }
		else if(vet[i]=='1'&&vet[i+1]=='e')
		   {
			  tamanhob+=3;
			  i++;
			  
		   }
		else if(vet[i]=='1'&&vet[i+1]=='f')
		   {
			  tamanhob+=3;
			  i++;
			  
		   }
		else if(vet[i]=='1'&&vet[i+1]=='g')
		   {
			  tamanhob+=3;
			  i++;
			  
		   }
		else if(vet[i]=='1'&&vet[i+1]=='h')
		   {
			  tamanhob+=3;
			  i++;
			  
		   }
		else if(vet[i]=='&'&&vet[i+1]=='¿')
		   {
			  tamanhob+=3;
			  i++;			  
		   }
		else if(vet[i]=='&'&&vet[i+1]=='-')
		   {
			  tamanhob+=3;
			  i++;			  
		   }
		else
		   tamanhob++;
	}
return tamanhob;
}
void armazena(char *vet, int tam,char arqdestino[20])
{
	int i=0,k;
	k=(tam/100)*3;
	
	ofstream arq;
	arq.open(arqdestino, ios::out);
	for(int i=0; i<tam; i++)
	{
		if(vet[i]!='¬')
		arq << vet[i];
		if(i==k||i==k*1||i==k*2||i==k*3||i==k*4||i==k*5||i==k*6||i==k*7||i==k*8||i==k*9
||i==k*10)
		   printf("%c",178);
	}
arq.close();
}
void converte(char *vet, char *vetdesc, int tam)
{
	 int i,j=0,l,k,cont;
	 for(i=0;i<tam;i++)
	{
		cont=0;
		if(vet[i+1]=='©')
		   {
			  cont=vet[i+2]-48;
			  cont+=-1;
			  vet[i+1]='¬';
			  vet[i+2]='¬';
			  while(cont>0)
			  {
				  vetdesc[j]=vet[i];
				  j++;
				  cont--;
			  }
			  
		   }
		else if(vet[i+1]=='æ')
		   {
			  cont=vet[i+2]-48;
			  vet[i+1]='¬';
			  vet[i+2]='¬';
			  cont+=9;
			  while(cont>0)
			  {
				  vetdesc[j]=vet[i];
				  j++;
				  cont--;
			  }
			  
		   }	
		if(vet[i]=='¦')
		   {
			  vetdesc[j]='a';
			  vetdesc[j+1]='s';
			  j+=2;
		   }
		else if(vet[i]=='¨')
		   {
			  vetdesc[j]='e';
			  vetdesc[j+1]='s';
			  j+=2;
		   }
		else if(vet[i]=='®')
		   {
			  vetdesc[j]='o';
			  vetdesc[j+1]='s';
			  j+=2;
		   }
		else if(vet[i]=='«')
		   {
			  vetdesc[j]='u';
			  vetdesc[j+1]='s';
			  j+=2;
		   }
		else if(vet[i]=='Ä')
		   {
			  vetdesc[j]='ã';
			  vetdesc[j+1]='o';
			  j+=2;
		   }
		else if(vet[i]=='~')
		   {
			  vetdesc[j]='e';
			  vetdesc[j+1]='m';
			  j+=2;
		   }
		else if(vet[i]=='^')
		   {
			  vetdesc[j]='n';
			  vetdesc[j+1]='o';
			  j+=2;
		   }
		else if(vet[i]=='¿')
		   {
			  vetdesc[j]='n';
			  vetdesc[j+1]='a';
			  j+=2;
		   }
		else if(vet[i]=='´')
		   {
			  vetdesc[j]='a';
			  vetdesc[j+1]='m';
			  j+=2;
		   }
		else if(vet[i]=='_')
		   {
			  vetdesc[j]='p';
			  vetdesc[j+1]='a';
			  j+=2;
		   }
		else if(vet[i]=='ª')
		   {
			  vetdesc[j]='r';
			  vetdesc[j+1]='a';
			  j+=2;
		   }
		else if(vet[i]=='ƒ')
		   {
			  vetdesc[j]='d';
			  vetdesc[j+1]='a';
			  j+=2;
		   }
		else if(vet[i]=='`')
		   {
			  vetdesc[j]='d';
			  vetdesc[j+1]='e';
			  j+=2;
		   }
		   else if(vet[i]=='§')
		   {
			  vetdesc[j]='d';
			  vetdesc[j+1]='o';
			  j+=2;
		   }
		   else if(vet[i]=='1'&&vet[i+1]=='a')
		   {
			  vetdesc[j]='q';
			  vetdesc[j+1]='u';
			  vetdesc[j+2]='e';
			  j+=3;
			  i++;
		   }
		   else if(vet[i]=='1'&&vet[i+1]=='b')
		   {
			  vetdesc[j]='m';
			  vetdesc[j+1]='e';
			  vetdesc[j+2]='n';
			  j+=3;
			  i++;
		   }
		   else if(vet[i]=='1'&&vet[i+1]=='c')
		   {
			  vetdesc[j]='c';
			  vetdesc[j+1]='o';
			  vetdesc[j+2]='m';
			  j+=3;
			  i++;
		   }
		   else if(vet[i]=='1'&&vet[i+1]=='d')
		   {
			  vetdesc[j]='i';
			  vetdesc[j+1]='n';
			  vetdesc[j+2]='f';
			  j+=3;
			  i++;
		   }
		   else if(vet[i]=='1'&&vet[i+1]=='e')
		   {
			  vetdesc[j]='p';
			  vetdesc[j+1]='o';
			  vetdesc[j+2]='r';
			  j+=3;
			  i++;
		   }
		   else if(vet[i]=='1'&&vet[i+1]=='f')
		   {
			  vetdesc[j]='c';
			  vetdesc[j+1]='a';
			  vetdesc[j+2]='n';
			  j+=3;
			  i++;
		   }
		   else if(vet[i]=='1'&&vet[i+1]=='g')
		   {
			  vetdesc[j]=' ';
			  vetdesc[j+1]='o';
			  vetdesc[j+2]='u';
			  j+=3;
			  i++;
		   }
		   else if(vet[i]=='1'&&vet[i+1]=='h')
		   {
			  vetdesc[j]='u';
			  vetdesc[j+1]='m';
			  vetdesc[j+2]='a';
			  j+=3;
			  i++;
		   }
		   else if(vet[i]=='&'&&vet[i+1]=='¿')
		   {
			  vetdesc[j]=' ';
			  vetdesc[j+1]='e';
			  vetdesc[j+2]=' ';
			  j+=3;
			  i++;
		   }
		   else if(vet[i]=='&'&&vet[i+1]=='-')
		   {
			  vetdesc[j]=' ';
			  vetdesc[j+1]='a';
			  vetdesc[j+2]=' ';
			  j+=3;
			  i++;
		   }
		   else
		   {
		   vetdesc[j]=vet[i];
		   j++;
		   }
	}
}
void mostraarquivo(char op,char arqorigem[20],char arqdestino[20])
{
	char mostrar[20];
	if(op=='O'||op=='o')
	{
	fstream arqc;
	arqc.open(arqorigem,ios::in);
	char n[70];
	while(!arqc.eof())
	{
		arqc.read(n,1);
		n[1]=0;
		if(!arqc.eof())
		{
			cout<<n[0];
		}
	}
	cout.flush();
	arqc.close();				
	}
	else
	{
	fstream arqd;
	arqd.open(arqdestino,ios::in);
	char n[70];
	while(!arqd.eof())
	{
		arqd.read(n,1);
		n[1]=0;
		if(!arqd.eof())
		{
			cout<<n[0];
		}
	}
	cout.flush();
	arqd.close();
	}
	cout<<"\nPrecione uma tecla para voltar ao menu principal"<<endl;
	getch();
	system("cls");
}

int main()
{
	int opcao=0,quantcomp;
	char arqorigem[20],arqdestino[20];
	arqorigem[0]='*';
	arqdestino[0]='*';

	while(opcao!=5){
	cout<<"\t\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»"<<endl;
	cout<<"\t\tº"<<"\tBem vindo ao Gerds Compressor	   º"<<endl;
	cout<<"\t\tº"<<"\tEscolha uma das Opções:			 º"<<endl;
	cout<<"\t\tº"<<"\t1 - Compactar Arquivo			   º"<<endl;
	cout<<"\t\tº"<<"\t2 - Descompactar Arquivo			º"<<endl;
	cout<<"\t\tº"<<"\t3 - Cadastrar Apelidos			  º"<<endl;
	cout<<"\t\tº"<<"\t4 - Ver Arquivo					 º"<<endl;
	cout<<"\t\tº"<<"\t5 - Sair							º"<<endl;
	cout<<"\t\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼"<<endl;//172
	cin>>opcao;
	
	if(opcao==1)
	{
	   cout<<"Digite o nome do arquivo a ser compactado: \n(O arquivo deve estar na mesma pasta que o descompactador)"<<endl;
	   cin>>arqorigem;
	   cout<<"Digite o nome do arquivo a ser gerado"<<endl;
	   cin>>arqdestino;
	   fstream arqA;
	   arqA.open(arqorigem, ios::in);
	
	   char n[70];
	   int i=0;
	   while(!arqA.eof()) 
	   {
		
		  arqA.read(n,1);
		  n[1]=0;
		  if(!arqA.eof())
		  {
			 i++;
		  }
	   }
	   cout.flush();
	   arqA.close();
		 cout<<"Caracteres encontrados no arquivo "<<arqorigem<<" :"<<i<<endl;
		 char *vet;
	   vet=(char *)malloc(i*sizeof(int));
	   learquivo(vet,arqorigem);
	   comprime(vet,i);
	   cout<<"\nIniciando Compactação\n";
	   armazena(vet,i,arqdestino);
	   cout<<"\nDocumento Compactado\n";
	   
	   fstream arq2;
	   arq2.open(arqdestino, ios::in);
	   int q=0;
	   char b[70];
	   while(!arq2.eof())
		{
		
			 arq2.read(b,1);
			 b[1]=0;
			 if(!arq2.eof())
			 {
				 q++;
			 }
		}
		cout.flush();
		arq2.close();
	
		cout<<"Caracteres no "<< arqdestino<<" compactado: "<<q<<endl;
		cout<<"Pressione uma tecla para voltar ao menu principal"<<endl;
		getch();
		opcao=0;
		system("cls");
	}
	else if(opcao==2)
	{
		cout<<"Digite o nome do arqorigem a ser descompactado"<<endl;
		cin>>arqorigem;
		cout<<"Digite o nome do arqorigem a ser gerado"<<endl;
		cin>>arqdestino;
	
		fstream arqdes;
		arqdes.open(arqorigem, ios::in);
		char n[70];
		int i=0;
		while(!arqdes.eof())
		{
		
			arqdes.read(n,1);
			n[1]=0;
			if(!arqdes.eof())
			{
				 i++;
			}
		}
		cout.flush();
		arqdes.close();
		cout<<"O arquivo: " <<arqorigem<<" a ser descompactado possui "<<i<<" caracteres"<<endl;
		char *vet;
		vet=(char *)malloc(i*sizeof(int));
		learquivo(vet,arqorigem);
		int j;
		j=calculavetB(vet,i);
		cout<<"\nO arquivo: "<<arqdestino<<" terá "<<j<<" caracteres\n";
		char *vetdesc;
		vetdesc=(char *)malloc(j*sizeof(int));
		converte(vet,vetdesc,j);
		armazena(vetdesc,j,arqdestino);
		cout<<"\nDocumento Descompactado\n";
		cout<<"Pressione uma tecla para voltar ao menu principal"<<endl;
		getch();
		opcao=0;
		system("cls");
	}
	else if(opcao==3)
	{
	 }
	else if(opcao==4)
	{
		 char op;
		 op='A';
		 while(op!='o'&&op!='d'&&op!='O'&&op!='D')
		 {
			cout<<"Digite O para origem e D para destino"<<endl;
			op=getch();
			if(arqorigem[0]=='*'&&(op=='o'||op=='O'))
			{
			 cout<<"Arquivo origem nao digitado anteriormente"<<endl;
			 cout<<"Digite o Nome do arquivo"<<endl;
			 cin>>arqorigem;
			}
			if(arqdestino[0]=='*'&&(op=='d'||op=='D'))
			{
			 cout<<"Arquivo Destino nao digitado anteriormente"<<endl;
			 cout<<"Digite o Nome do arquivo"<<endl;
			 cin>>arqdestino;
			}
		 }
		 mostraarquivo(op,arqorigem,arqdestino);
	}

  }
}


}
