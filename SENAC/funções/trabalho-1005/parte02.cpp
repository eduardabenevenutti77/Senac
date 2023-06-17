#include<iostream>

using namespace std;

int totalHecInicial,totalHecFinal,oleo;
float rendimento;
float calculo1,calculo2,calculo3,calculo4,calculo5,calculo6;
void calculoHect();

main(){
	system("chcp 65001");
	cout<<"\n";
	cout<<"\nEm uma fazenda é necessário descobrir qual é o rendimento de um trator, para isso peça ao usuário a quantidade \nde hectares cultivadas e a quantidade inicial de óleo utilizado";
	
	cout<<"\n\nInforme ao sistema a quantidade inicial de hectares cultivados -> ";	
	cin>>totalHecInicial;
	while(totalHecInicial<0){
		cout<<"O valor informado é negativo!";
		cout<<"\nDigite novamente -> ";
		cin>>totalHecInicial;
	}
	cout<<"\n\nInforme qual a quantidade de óleo utilizado inicialmente -> ";
	cin>>oleo;
	while(oleo<0){
		cout<<"O valor informado é negativo!";
		cout<<"\nDigite novamente -> ";
		cin>>oleo;
	}
	cout<<"\n\nInforme ao sistema a quantidade final de hectares cultivados -> ";
	cin>>totalHecFinal;
	while(totalHecFinal<0){
		cout<<"O valor informado é negativo!";
		cout<<"\nDigite novamente ->";
		cin>>totalHecFinal;
	}
	
	calculoHect();
	
	cout<<"\n\n\n";
}
void calculoHect(){
	
	
	if(totalHecInicial>totalHecFinal){
		
		calculo1 = (totalHecInicial*oleo);
		calculo2 = (calculo1/totalHecFinal);
		
		rendimento = (totalHecInicial+totalHecFinal)/calculo2;
		
		cout<<"\nCaso seja plantado inicialmente "<<totalHecInicial<<" hectares com "<<oleo<<" litros de óleo no trator, ao final será cultivado "<<totalHecFinal<<" usando "<<calculo1<<" litros de óleo!";
		cout<<"\nO rendimento será de "<<rendimento<<" litros por hectares";
	}
	if(totalHecInicial<totalHecFinal){
		
		calculo3 = (totalHecFinal*oleo);
		calculo4 = (calculo3/totalHecInicial);
		
		rendimento = (totalHecInicial+totalHecFinal)/calculo4;
		
		cout<<"\nCaso seja plantado inicialmente "<<totalHecInicial<<" hectares e com "<<oleo<<" litros de óleo, ao final será cultivado "<<totalHecFinal<<" usando "<<calculo3<<" litros de óleo!";
		cout<<"\nO rendimento será de "<<rendimento<<" litros por hectares!";
	}
	if(totalHecInicial==totalHecFinal){
		/*calculo5 = (totalHecInicial*oleo);
		calculo6 = (calculo5/totalHecFinal);*/
		
		rendimento = (totalHecInicial+totalHecFinal)/oleo;
		
		cout<<"\nCaso seja plantado inicialmente "<<totalHecInicial<<" hectares e com "<<oleo<<" litros de óleo, ao final será cultivado "<<totalHecFinal<<" hectares usando "<<oleo<<" litros de óleo!";
		cout<<"\nO rendimento será de "<<rendimento<<" litros por hectares!";
	}
}

