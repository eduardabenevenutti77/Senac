#include<iostream>
using namespace std;
float tempoInicial,tempoFinal;
int numInicial,numFinal;

int calculo1,calculo2,calculo4,calculo5;

//void calculoInvalido();
void calculo01();
//void calculo02();
main(){
	system("chcp 65001");
	cout<<"\n";
	cout<<"\nCalcule o tempo necessário para encher um tanque de agua";
	
	cout<<"\n\nInforme o tempo inicial ->";	
	cin>>tempoInicial;
	while(tempoInicial<0){
		cout<<"O valor informado é inválido!";
		cout<<"\nDigite um novo valor -> ";
		cin>>tempoInicial;
	}
	
	cout<<"\nInforme o número de torneiras abertas inicialmente->";
	cin>>numInicial;
	while(numInicial<0){
		cout<<"O valor informado é inválido!";
		cout<<"\nDigite um novo valor -> ";
		cin>>numInicial;
	}
	
	/*cout<<"\ninforme o tempo que ficou aberto ->";
	cin>>tempoFinal;
	while(tempoFinal<0){
		cout<<"o valor informado é inválido!";
		cout<<"\ndigite um novo valor -> ";
		cin>>tempoFinal;
	}*/
	
	cout<<"\nInforme o número de torneiras abertas ->";
	cin>>numFinal;
	while(numFinal<0){
		cout<<"O valor informado é inválido!";
		cout<<"\nDigite um novo valor -> ";
		cin>>numFinal;
	}
	
	
	
	calculo01();
	

	
	cout<<"\n\n\n";
}
void calculo01(){
	cout<<"\nTempo (horas) -> "<<tempoInicial<<" - X ";
	cout<<"\nNúmero de torneiras -> "<<numInicial<<" - "<<numFinal;
	
	if(numInicial>numFinal){
	
	calculo1 = (tempoInicial*numFinal);
	calculo2 = (calculo1/numInicial);
	
	//calculo3 = (calculo1/calculo2);
	
	
	cout<<"\n\nEm "<<tempoInicial<<" h, ficaram abertas "<<numInicial<<" torneiras de água corrente \n- se fosse utilizado "<<numFinal<<" torneiras com a mesma vazão de água irá levar "<<calculo2<<" h para encher a caixa da água";  
	}
	if(numInicial<numFinal){
		
	calculo4 = (tempoInicial*numInicial);
	calculo5 = (calculo4/numFinal);
		
	//calculo6 = (calculo4/calculo5);	
	
	cout<<"\n\nEm "<<tempoInicial<<" h, ficaram abertas "<<numInicial<<" torneiras de água corrente \n- se fosse utilizado "<<numFinal<<" torneiras com a mesma vazão de água irá levar "<<calculo5<<" h para encher a caixa da água";
	}
	if(numInicial==numFinal){
		cout<<"\n\nEm "<<tempoInicial<<" h, ficaram abertas "<<numInicial<<" torneiras de água corrente \n- se fosse utilizado "<<numFinal<<" torneiras com a mesma vazão de água irá levar "<<calculo5<<" h para encher a caixa da água";
	}
}


