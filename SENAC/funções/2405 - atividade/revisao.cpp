//revisão para a prova de programação
#include <iostream>
using namespace std;
char letras [5],a,e,i,o,u;
int i;
main (){
	system("chcp 65001");
	cout<<"vetor em c++";
	for(int i=0;i<=5;i++){
		cout<<"\n\ninforme "<<i+1<<"ª letra => "; //i+1 vai mostar a quantidade de vez
		cin>>letras[i]; //o cin armazena o valor declarado 
		
		if((letras[i]==a)||(letras[i]==o)||letras[i==u]||(letras[i]==e)||(letras[i]==i)){
			cout<<"é uma vogal";
		}else{
			cout<<"não é uma vogal";
		}
	}
}
//iniciamos declarando o tamanho e o tipo do vetor -> char, int ou float 
//podemos usar também um const TAM para delimitar o tamanho int const TAM[4]
//for(int i=0;i<=TAM;i++)
//usamos o for!!
//podemos usar o vetor para descobrir a quantidade números/letras pares/vogais declaradas ao sistema
