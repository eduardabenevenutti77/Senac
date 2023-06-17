#include <iostream>
#include "serieBiblio.h";
#include <conio.h>
using namespace std;
int op,t1,t2,t3,t4,t5;
int termos,setprecision=8;
int calculaTermos1(int termos);
int calculaTermos2(int termos);
int calculaTermos3(int termos);
int calculaTermos4(int termos);
int calculaTermos5(int termos);
main(){
	system("chcp 65001");
	//cout << fixed << setprecision(8);
	cout<<"\n\n";
	
	do{
	   system("cls");
	   cout<<"\nSérie com função e biblioteca --";
	   cout<<"\n [1] Série 01";
	   cout<<"\n [2] Série 02";
	   cout<<"\n [3] Série 03";
	   cout<<"\n [4] Série 04";
	   cout<<"\n [5] Série 05";
	   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
	   cin>>op;
	   switch (op)// SWITCH PRINCIPAL
	   {
	   	case  1:{
	        system ("color B");
	        cout<<"\n Série 01: ";
	        cout<<"\n\n Informe a quantidade de termos: ";
			cin>>termos;  
			t1 = calcularTermos1(termos);
			//cout<<" o resultado é => "<<t1;	 
			getch(); // espera digitar algo
			break;
		}
		case 2:{
			system("color B");
			cout<<"\n Série 02: ";
			cout<<"\n\n Informe a quantidade de termos: ";
			cin>>termos;
			t2 = calcularTermos2(termos);
			cout<<"\n\n\n";
			getch();
			break;
		}
		case 3:{
			system("color B");
			cout<<"\n Série 03";
			cout<<"\n\n Informe a quantidade de termos: ";
			cin>>termos;
			t3 = calcularTermos3(termos);
			getch();
			break;
		}
		case 4:{
			system("color B");
			cout<<"\n Série 04";
			cout<<"\n\n Informe a quantidade de termos: ";
			cin>>termos;
			t4 = calcularTermos4(termos);
			getch();
			break;
		}
		case 5:{
			system("color B");
			cout<<"\n Série 05";
			cout<<"\n\n Informe a quantidade de termos: ";
			cin>>termos;
			t5 = calcularTermos5(termos);
			getch();
			break;
		}
	   }
	}while(op!=5);
	cout<<"\n\n\n ";
}