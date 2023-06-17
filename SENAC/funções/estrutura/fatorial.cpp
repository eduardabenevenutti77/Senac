#include<iostream>
#include "fatBiblio.h";
#include <conio.h>
using namespace std;
int op,n,s,f,h,pt,b,p,n1,n2,m;

main (){
	system("chcp 65001");
	cout<<"\n\n";
	
	do{
	   system("cls");
	   cout<<"\nFatorial com recursividade --";
	   cout<<"\n [1] Exemplo 01 - Fatorial ";
	   cout<<"\n [2] Exemplo 02 - Sequência de fibonacci ";
	   cout<<"\n [3] Exemplo 03 - Potência ";
	   cout<<"\n [4] Exemplo 04 - Média de valores ";
	   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
	   cin>>op;
	   switch (op)// SWITCH PRINCIPAL
	   {
	   	case  1:{
	        system ("color B");
	        cout<<"\n Exemplo 01: ";
	        cout<<"\n\n Informe um número => ";
			cin>>n;  
			s = soma(n);
			cout<<" => "<<s;	 
			//cout<<"\n\e[33;1m Explicação => Esse programa calcula o fatorial do número informado ao sistema!"; 
			getch(); // espera digitar algo
			break;
		}
		case 2:{
			system("color B");
			cout<<"\n Exemplo 02: ";
			cout<<"\n\n Sequência de Fibonacci => ";
			cin>>n;
			f = fibonacci(n);
			cout<<" => "<<f;
			//cout<<"\n\e[33;1m Explicação => Esse programa calcula a sequência de fibonacci do número informado ao sistema!";
			cout<<"\n\n\n";
			getch();
			break;
		}
		case 3:{
			system("color B");
			cout<<"\n Exemplo 03";
			cout<<"\n\n Potência => ";
			cin>>p;
			cout<<"\n Base da potência => ";
			cin>>b;
			pt = pot(b,p);
			cout<<" => "<<pt;
			//cout<<"\n\e[33;1m Explicação => Esse programa calcula a potência do número informado ao sistema!";
			getch();
			break;
		}
		case 4:{
			system("color B");
			cout<<"\n Exemplo 04";
			cout<<"\n\n Número 01 => ";
			cin>>n1;
			cout<<"\n\n Número 02 => ";
			cin>>n2;
			m = media(n1,n2);
			cout<<" A média entre "<<n1<<" e "<<n2<<" => "<<m;
			//cout<<"\n\e[33;1m Explicação => Esse programa pede ao usuário dois valores e calcula média dos números informado ao sistema!";
			getch();
			break;
		}
	   }
	}while(op!=4);
	cout<<"\n\n\n ";
}