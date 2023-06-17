#include<iostream>
using namespace std;
//protótipo - declaração 
void linha();
//função que não retorna e não recebe nada
//não é igual variavel & != main(não precisa do void)
main(){
	system("chcp 65001");
	linha();
	cout<<"\t linha da função \n";
	linha();
	//invocação - chama a função linha
	cout<<"\n\n\n\n\n";
	
}
//fim do main
//============================
//área da função <3
//============================
//função linha - implementação
void linha(){
	int i;
	for(i=1;i<25;i++)
		cout<<" <3 ";
		cout<<"\n";
}
//a variavel só vai funcionar aqui, pois é uma variavel local!!