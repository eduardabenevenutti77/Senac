#include <iostream>
using namespace std;
//int numero[7]; //declara o vetor com o tamanho 7
char letras[5];
int contador;
int i;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	cout<<"FUP que leia um vetor de 15 letras, conte quantas vogais há no vetor";
	for(int i=0;i<=5;i++){
		cout<<"\n";
		cout<<"\ninforme "<<i+1<<"º letra => ";
		cin>>letras[i];
		if((letras[i] == 'a') ||(letras[i]=='e') || (letras[i]=='i') || (letras[i]=='o') || (letras[i]=='u')){
			contador ++;
			
	}
	cout<<"\n=> "<<contador;
}
}