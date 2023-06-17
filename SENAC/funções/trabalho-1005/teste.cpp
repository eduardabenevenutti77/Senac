#include<iostream>
#include<cstdlib>
using namespace std;

int totalHecInicial, totalHecFinal, oleo;
float calculo1, calculo2, calculo3, calculo4;

void calculoHect();

int main() {
	system("chcp 1252");
	cout << "\n";
	cout << "\nEm uma fazenda é necessário descobrir qual é o rendimento de um trator, para isso peça ao usuário a quantidade \nde hectares cultivadas e a quantidade inicial de óleo utilizado";

	cout << "\n\nInforme ao sistema a quantidade inicial de hectares cultivados -> ";
	cin >> totalHecInicial;
	while (totalHecInicial < 0) {
		cout << "O valor informado é negativo!";
		cout << "\nDigite novamente -> ";
		cin >> totalHecInicial;
	}
	cout << "\n\nInforme qual a quantidade de óleo utilizada inicialmente ->";
	cin >> oleo;
	while (oleo < 0) {
		cout << "O valor informado é negativo!";
		cout << "\nDigite novamente ->";
		cin >> oleo;
	}
	cout << "\n\nInforme ao sistema a quantidade final de hectares cultivados ->";
	cin >> totalHecFinal;
	while (totalHecFinal < 0) {
		cout << "O valor informado é negativo!";
		cout << "\nDigite novamente";
		cin >> totalHecFinal;
	}

	calculoHect();

	cout << "\n\n\n";
	return 0;
}

void calculoHect() {
	if (totalHecInicial > totalHecFinal) {
		calculo1 = (totalHecInicial * oleo);
		calculo2 = (calculo1 / totalHecFinal);
		cout << "\nCaso seja plantado inicialmente " << totalHecInicial << " hectares e com " << oleo << " litros de óleo, ao final será cultivado " << totalHecFinal << " usando " << calculo1 << " litros de óleo!";
	}
	if (totalHecInicial < totalHecFinal) {
		calculo3 = (totalHecFinal * oleo);
		calculo4 = (calculo3 / totalHecInicial);
		cout << "\nCaso seja plantado inicialmente " << totalHecInicial << " hectares e com " << oleo << " litros de óleo, ao final será cultivado " << totalHecFinal << " usando " << calculo4 << " litros de óleo!";
	}
}
