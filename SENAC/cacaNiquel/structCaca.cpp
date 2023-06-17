#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
	/*STRUCT DO CAÇA NÍQUEL*/
	struct cacaNiquel{
		char nome[60];
		int idade;
		char email[60];
		char endereco[60];
		int creditos;
	};
cacaNiquel Usuario;
char resposta,resposta1,resposta2,resposta4;
char N,S;
int rodadas;
char escolha;

main(){
	system("chcp 65001");
	srand(time(NULL)); // semente aleatória
	cout<<"\n";
	cout<<"==================================================";
	cout<<"\n\t Projeto de caça níquel!";
	cout<<"\n Desenvolvido por: Maria Eduarda Benevenutti ";
	cout<<"\n Data: 14/06/2023 ";
	cout<<"\n Disciplina: Introdução a programação ";
	cout<<"\n=================================================\n";
	cout<<"\n\t \e[35;1mCrie uma conta no caça níquel!\e[35;0m \n";

	cout<<"\n A seguir informe seus dados para efetuar o cadastro\n";
	
	cout<<"\n Insira o seu nome completo ";
	cout<<"\n => ";
	fflush(stdin);
	gets(Usuario.nome);
	//Usuario.nome = toupper(Usuario.nome);
	
	for(int i=0;i<1;i++){
	cout<<"\n Insira a sua idade ";
	cout<<"\n => ";
	fflush(stdin);
	cin>>Usuario.idade;
	do{
		if(Usuario.idade<18){
			//system("color 4");
			cout<<"\n \e[31;3mVocê não tem idade suficiente. Tente novamente quando for maior de idade!\e[31;0m";
			exit(0);
		}
	}while(Usuario.idade<18);
}
	cout<<"\n Informe o seu e-mail de contato ";
	cout<<"\n => ";
	fflush(stdin);
	gets(Usuario.email);
	cout<<"\n Informe o seu endereço ";
	cout<<"\n => ";
	fflush(stdin);
	gets(Usuario.endereco);
	
	for(int i=0;i<1;i++){
	cout<<"\n=========================================================\n";
	cout<<"\n\t \e[35;1mVerificando informações \e[35;0m\n";
	cout<<"\n O seu nome está correto? Responda usando S(sim) ou N(não) - "<<Usuario.nome<<"\n";
	cout<<" => ";
	cin>>resposta;
	if(resposta=='N'){
		cout<<"\n \e[33;5mInforme novamente o seu nome \e[33;5m";
		cout<<"\n => ";
		fflush(stdin);
		gets(Usuario.nome);
	}
	cout<<"\n O seu e-mail está correto? Responda usando S(sim) ou N(não) - "<<Usuario.email<<"\n";
	cout<<" => ";
	cin>>resposta1;
	if(resposta1=='N'){
		cout<<"\n \e[33;5mInforme novamente o seu e-mail \e[33;0m";
		cout<<"\n => ";
		fflush(stdin);
		gets(Usuario.email);
	}
	cout<<"\n O seu endereço está correto? Responda usando S(sim) ou N(não) - "<<Usuario.endereco<<"\n";
	cout<<" => ";
	fflush(stdin);
	cin>>resposta2;
	if(resposta2=='N'){
		cout<<"\n \e[33;5mInforme novamente o seu endereço \e[33;0m";
		cout<<"\n => ";
		fflush(stdin);
		gets(Usuario.endereco);
	}
}
	
	cout<<"\n=========================================================\n";
	cout<<"\n\t \e[35;1mBem vindo(a) ao jogo "<<Usuario.nome<<"\e[35;0m\n";
	cout<<"\n Antes de proseguir temos algumas informações para te passar!";
	cout<<"\n 1º Caso o jogador não ganhe em alguma rodada, o sistema vai informar da possiblidade de desistir do jogo;";
	cout<<"\n 2º Caso o jogador ganhe todas as rodadas, será encaminhado um e-mail detalhando o modo de pagamento;";
	cout<<"\n 3º O jogador deverá efetuar a compra de créditos antes de começar a jogar;";
	cout<<"\n \e[33;5mTabela de valores de créditos: 10 créditos - 50 reais; 20 créditos - 55 reais; 40 créditos - 65 reais;\n 60 créditos - 85 reais; 80 créditos - 95; 100 créditos - 1.000 reais\e[33;0m";

	cout<<"\n\n";
	cout<<" Informe qual é a quantidade de créditos que deseja comprar ";
	cout<<"\n => ";
	cin>>Usuario.creditos;
	
	cout<<"\n Caro jogador(a) "<<Usuario.nome<<", você possui "<<Usuario.creditos<<" créditos para jogar no caça-níquel!";
	cout<<"\n Não esqueça de efetuar o pagamento dos créditos após finalizar a rodada de jogos!!\n";
	
	cout<<"\n Podemos começar? Responda com S(sim) ou N(não) ";
	cout<<"\n => ";
	cin>>resposta4;
	if(resposta4=='S'){
    int simbolos[6] = {'C', 'L', 'A', 'W', 'E', 'R'}; // bar, cereja, limão, laranja, uva, sino

    cout << " Pressione P para jogar ou S para sair.\n";
    cin >> escolha;
    if (escolha == 'S' || escolha == 's') {
            cout << " Obrigado por jogar!\n";
            return 0;
        }
    while ((escolha=='P')|| (escolha=='p')) 
	{
       if (escolha == 's' || escolha == 'S') {
            cout << " Obrigado por jogar!\n";
            break;
        }
        // girar os rolos
        char rolo1 = simbolos[rand() % 6];
        char rolo2 = simbolos[rand() % 6];
        char rolo3 = simbolos[rand() % 6];
        char rolo4 = simbolos[rand() % 6];
        char rolo5 = simbolos[rand() % 6];
        char rolo6 = simbolos[rand() % 6];
        //char rolo7 = simbolos[rand() % 6];
        cout << "\n" << rolo1 << " " << rolo2 << " " << rolo3 << " " << rolo4<< " " << rolo5 << " " << rolo6 << "\n\n";
        // verificar os resultados
        if ((rolo1 != rolo2 && rolo2 != rolo3 && rolo3 != rolo4 && rolo4 != rolo5 && rolo5 != rolo6)=='CLAWER') {
            cout << "What lucky! Você ganhou 100 créditos.\n";
            cont Usuario.creditos +=100;
        } else if ((rolo1 != rolo2 || rolo2 != rolo3 || rolo1 != rolo3) == 'CLA') {
            cout << "Que loucura! Você ganhou 50 créditos.\n";
            cont Usuario.creditos +=50;
        } else if((rolo4 != rolo5 && rolo5 != rolo5 && rolo4 != rolo6) == 'WER'){
        	cout << "Niceeee! Você acabou de 25 créditos.\n";
        	cont Usuario.creditos +=25;
		}else {
            cout << "Nada! Tente novamente.\n";
            cont Usuario.creditos -=50;
        }
        cout << "Pressione P para jogar ou S para sair.\n";
        cin >> escolha;  
        if(escolha == 'S'){
        	cout<<"\n Você possui "<<Usuario.creditos<<" créditos "
		} 
    }
    return 0;
}
	cout<<"\n \e[33;5mQue pena! Nos veremos novamente na próxima vez.\e[33;0m";
}
//fazer outro else para a 4 variavel
