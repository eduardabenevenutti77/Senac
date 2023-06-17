#include<iostream>
using namespace std;
int somar3(int nm1, int nm2), resposta;
//protótipo - declaração 

int nm1,nm2;//variaveis goblais
main(){
	system("chcp 65001");
	cout<<"nm1: \n";
	cin>>nm1;
	cout<<"nm2: \n";
	cin>>nm2;
	resposta=somar3(nm1,nm2);
	cout<<"\n a soma é:"<<resposta;
	//invocação - chama a função linha
	cout<<"\n\n\n\n\n";
	
}
//fim do main
//============================
//área da função <3
//============================
//função soma 01 - implementação
int somar3(int nm1, int nm2)
{
	int resp;
	resp=nm1+nm2;
	return(resp);
}
//return é só para coisas básicas