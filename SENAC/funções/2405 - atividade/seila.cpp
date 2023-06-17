#include<iostream>
using namespace std;
int notasPar[15];
int notasImpar[15];
int notas[15],cont;
main(){
	system("chcp 65001");
	cout<<"\t vetores ";
	cout<<"\n------------------------------";
	
	for(int i=0;i<=4;i++){
		cout<<"\n\ninforme a "<<i+1<<"º nota => ";
		cin>>notas[i]; 
		if(notas[i]%2==0){
			cout<<"essa nota é do vetor de notas pares!";
			cont++;
		}else{
			cout<<"essa nota é do vetor de notas ímpares!";
			cont++;
		}
	}
}
