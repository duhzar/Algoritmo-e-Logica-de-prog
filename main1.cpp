#include <iostream>
using namespace std;

int main() {
	string nome;
	int idade;
	cout<< "Informe seu nome ";
	cin>> nome;
	cout<< "Informe sua idade ";
	cin >> idade;
	
	if(idade >= 18){
		cout<< "Ola " <<nome << ", seu voto e obrigatorio";
	}
	if (idade < 18){
		cout << "Ola " <<nome<< ", seu voto nao e obrigatorio";
	}
	
	return 0;
}
