#include<iostream>
using namespace std;
int nm, result;
void tabu();
main(){
	system("chcp 65001");
	cout<<"\n\n\n";
	cout<<"questão 01 - receba um número e imprima a tabuada deste número: ";
	cout<<"\n informe o número: ";
	cin>>nm;
	tabu();
	cout<<"\n\n\n";
}
void tabu(){
	int i;
	for(i<0;i<=10;i++){
		result = nm*i;
		cout<<"\n "<<nm<<" * "<<i<<"="<<result;
	}
}