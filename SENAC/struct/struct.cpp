#include <iostream>
#include <string.h> // biblioteca usada para a comparação de string

using namespace std;

  /*Criando a struct */
  struct dados_aluno
  {
    char nome[50];
    char disciplina[50];
    float nota_prova1;
    float nota_prova2;
    float media;
    int idade;
  };
dados_aluno Aluno[2]; //criar a variavel do tipo struct
float calcularMedia(float nota1, float nota2);
int i;
char nome_pesq[50]; //nova variavel para procurar um aluno
float media_pesq;
int idade_pesq;
main()
{
	for(int i=0;i<3;i++){
   	system("chcp 65001");// para usar acentos
  /*Criando a variável aluno que será do tipo struct dados_aluno */
 
  cout<<" \n---------- Cadastro de aluno -----------\n\n\n";
  cout<<"Nome do aluno ......: ";
  fflush(stdin); //Para limpar o buffer em Windows, use o: fflush(stdin) 
 
  gets(Aluno[i].nome); //somente para vetores de caracteres -- o nome pertence ao aluno
  
  cout<<" \n Disciplina ......: ";
  fflush(stdin);
  gets(Aluno[i].disciplina); //a disci´lina pertence ao aluno
  
  cout<<" \n Informe a idade ...: ";
  cin>>Aluno[i].idade;
  cout<<"\nInforme a 1a. nota ..: ";
  cin>>Aluno[i].nota_prova1;
  
  do{
  		if((Aluno[i].nota_prova1<0)||(Aluno[i].nota_prova1>10)){
  		//gets(Aluno.disciplina);
  		cout<<"informe uma nota válida! ";
  		cin>>Aluno[i].nota_prova1;
  }
	}while((Aluno[i].nota_prova1<0)||(Aluno[i].nota_prova1>10));

  cout<<"\nInforme a 2a. nota ..: ";
  cin>>Aluno[i].nota_prova2;
  
   do{
  		if((Aluno[i].nota_prova2<0)||(Aluno[i].nota_prova2>10)){
  		//gets(Aluno.dispiplina);
  		cout<<"informe uma nota válida! ";
  		cin>>Aluno[i].nota_prova2;
  }
	}while((Aluno[i].nota_prova2<0)||(Aluno[i].nota_prova2>10));
	Aluno[i].media = calcularMedia(Aluno[i].nota_prova1,Aluno[i].nota_prova2);
  }
	//cout<<"a média é => "<<media;
	for(int i=0;i<3;i++){
  cout<<"\n\n --------- IMPRIMINDO os dados da struct ---------\n\n";
  cout<<"\n\n Nome ...........:";
  puts (Aluno[i].nome);
  cout<<"\n\n Disciplina .....: ";
  puts(Aluno[i].disciplina);
  cout<<"\n\n Nota da Prova 1 ...: " << Aluno[i].nota_prova1;
  cout<<"\n\n Nota da Prova 2 ...: " << Aluno[i].nota_prova2;
  cout<<"\n\n Média .............: "<<Aluno[i].media;
 
	}
	
	cout<<"\n\n --------------- Verifica as informações de um aluno ----------------\n\n";
	cout<<"\n\n Informe o nome do aluno: ";
	fflush(stdin);
	gets(nome_pesq);
	for(int i=0;i<3;i++){
	if(strcmpi(Aluno[i].nome,nome_pesq)==0){//compara a variavel nome com o nome inserido na pesquisa -- só para CHAR! 
	cout<<"\n\n O/A aluno(a) "<<Aluno[i].nome;
	cout<<"\n\n A disciplina "<<Aluno[i].disciplina;
	//cout<<"\n\n Tem as seguintes notas na 1ª prova "<<Aluno[i].nota_prova1<<" e na 2ª prova "<<Aluno[i].nota_prova2;
	//cout<<"\n\n Sendo assim, o aluno(a) possue a média "<<Aluno[i].media<<" na disciplina de "<<Aluno[i].disciplina;
	}
}
	cout<<"\n\n Informe a média: ";
	fflush(stdin);
	cin>>media_pesq;
	if(Aluno[i].media<=media_pesq){
	cout<<"\n\t =====================";
	cout<<"\n\n O/A aluno(a) "<<Aluno[i].nome;
	cout<<"\n\n A disciplina "<<Aluno[i].disciplina;
	cout<<"\n\n A média é "<<Aluno[i].media;
	}
	cout<<"\n\n Informe a idade: ";
	fflush(stdin);
	cin>>idade_pesq;
	if(Aluno[i].idade<=idade_pesq){
	cout<<"\n\t =====================";
	cout<<"\n\n O/A aluno(a) "<<Aluno[i].nome;
	cout<<"\n\n A disciplina "<<Aluno[i].disciplina;
	cout<<"\n\n A média é "<<Aluno[i].media;
	cout<<"\n\n A idade é "<<Aluno[i].idade;
	}
}
float calcularMedia(float nota1, float nota2){
	return((nota1+nota2)/2);
}