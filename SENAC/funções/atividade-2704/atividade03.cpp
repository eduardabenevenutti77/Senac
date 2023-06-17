#include<iostream>
using namespace std;
float calculo(float nm1, float nm2, char opera);
int nm1,nm2;
int resultado;
char opera;
main(){
	system("chcp 65001");
	cout<<"\n\n\n";
	cout<<"questão 03 - receba dois números e um caracter, e a função deverá resultado: ";
	cout<<"\n informe o primeiro número: ";
	cin>>nm1;
	cout<<"\n informe o segundo número: ";
	cin>>nm2;
	cout<<"\n informe o tipo de operação [-] [+] [*]: ";
	cin>>opera;
	resultado = calculo(nm1,nm2,opera);
	cout<<"\nresultado de "<<nm1<<" "<<opera<<" "<<nm2<<" = "<<resultado;
	
}
float calculo(float nm1, float nm2, char opera){
	int result1, result2, result3;
	if(opera == '-'){
		result1 = nm1 - nm2;
	}
	if(opera == '+'){
		result2 = nm1 + nm2;
	}
	if(opera == '*'){
		result3 = nm1 * nm2;	
	}
}