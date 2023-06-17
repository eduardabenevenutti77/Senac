#include<iostream>
using namespace std;
int const TAM=10;
float temp[TAM];
int i,cont=0;

int media_temp(float temp[], int TAM);
float temperatura,media,menorTemp;
int tempInvalida(float temperatura);
int menor_temperatura(float temp[],int TAM);
main(){
	system("chcp 65001");
	cout<<"\n\n\n";
	cout<<"questão 01 - leia 20 temperaturas referentes a 20 dias: ";
	//cout<<"\ninforme a temperatura do "<<i+1<<" dia: ";
	for(i=0;i<TAM;i++){
		cout<<"\na "<<i+1<<"º temperatura: ";
		cin>>temp[i];
		temp[i] = tempInvalida(temperatura);
	}
	menorTemp = menor_temperatura(temp, TAM);
	//temperatura = tempInvalida(temperatura);
	media = media_temp(temp, TAM);
	//cout<<"teste ->"<<temperatura;
	cout<<"\n a media da temperatura é: "<<media;
	cout<<"\n temperaturas menores que a média: "<<menorTemp;
	cout<<"\n\n\n";
}
int tempInvalida(float temperatura){
	do{
			if((temperatura<-0)|| (temperatura>40)){
			cout<<"\n erro - informe uma temperatura válida";
			cin>>temperatura;
		}                                                                                                                                                                                                 
		}
		while((temperatura<-0)||(temperatura>40));
		return (temperatura);
}
int media_temp(float temp[], int TAM){
	float media, acum=0;
	int i;
	for(i=0;i<TAM;i++){
		acum += temp[i];
	}
	media = acum/TAM;
	return (media);
}
int menor_temperatura(float temp[], int TAM){
	int cont_menor_media=0;
	for(i=0;i<TAM;i++){
		if(temp[i]<media){
			cont_menor_media ++;
		}
	}
	return (cont_menor_media);
}