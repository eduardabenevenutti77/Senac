#include <iostream>
using namespace std;
int valorA,valorB,valorC;
int calcularImPar(int valorA, int valorB, int valorC);
int result;
main(){
	system("chcp 65001");
	cout<<"\n\n";
	//x=a²*c-b
	cout<<"FUP que tenha uma função que retorne 1 se o valor da";
	cout<<"\nfunção for par e retorne 0, se o valor for ímpar";
	cout<<"\nimprima se o valor da função é par ou ímpar";
	cout<<"\n\n";
	cout<<"---------------------------------------";
	
	cout<<"\ninforme o valor de A => ";
	cin>>valorA;
	while(valorA<0){
		cout<<"o valor informado é negativo!";
		cout<<"\ninforme o valor novamente => ";
		cin>>valorA;
	}
	cout<<"\ninforme o valor de B => ";
	cin>>valorB;
	while(valorB<0){
		cout<<"o valor informado é negativo!";
		cout<<"\ninforme o valor novamente => ";
		cin>>valorB;
	}
		cout<<"\ninforme o valor de C => ";
	cin>>valorC;
	while(valorC<0){
		cout<<"o valor informado é negativo!";
		cout<<"\ninforme o valor novamente => ";
		cin>>valorC;
	}
	
	result = calcularImPar(valorA, valorB, valorC);
	
	if (result==1){
		cout<<"\no número é par!";
	}else{
		cout<<"\no número é ímpar!";
	}
	
}
int calcularImPar(int valorA, int valorB, int valorC){
	int x;
	x = (valorA*valorA)*valorC-valorB;
	if(x%2==0){
		return 0;
	}else{
		return 1;
	}
}
