#include<iostream>
using namespace std;
int somar3(int nm1, int nm2);
int sub(int nm1,int nm2);
int mult(int nm1, int nm2);
//protótipo - declaração 

int nm1,nm2;//variaveis goblais
main(){
	system("chcp 65001");
	cout<<"nm1: \n";
	cin>>nm1;
	cout<<"nm2: \n";
	cin>>nm2;

	cout<<"\n a soma é:"<<somar3(nm1,nm2);
	cout<<"\n subtrair: "<<sub(nm1,nm2);
	cout<<"\n multiplicação:"<<mult(nm1,nm2);
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
	return(nm1+nm2);
}
int sub(int nm1,int nm2)
{
	return(nm1-nm2);
}
int mult(int nm1,int nm2)
{
	return(nm1*nm2);
}
//return é só para coisas básicas