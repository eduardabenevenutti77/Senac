//imprama o valor bruto e com desconto do inss
#include<iostream>
using namespace std;
int salario,desc,desc1,valor_desc;
main (){
 	system("chcp 65001");
 	cout<<"qual é o seu salário?";
 	cin>>salario;
 	desc = salario * 13;
 	desc1 = desc / 100;
 	valor_desc = salario - desc1;
 	cout<<"o seu salário é de "<<salario<<", portanto o seu desconto é de "<<desc1<<" reais. Sendo assim, o valor final é de"<<valor_desc<<"";
}
