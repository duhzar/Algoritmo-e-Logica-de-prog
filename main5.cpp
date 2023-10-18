#include <iostream>
using namespace std;

int main() {
	string nome;
	int anoat=2023;
	int nasc;
	int estilo;
	int idade; 
	
	cout<< "Qual seu nome? \n";
	cin >> nome ;
	cout<< "Que ano voce nasceu? \n";
	cin >> nasc;
	cout<< "Qual seu estilo de natacao?\n 1 Nado livre\n 2 Nado de costa\n 3 Nado borboleta\n";
	cin >> estilo;
	
	idade = anoat - nasc;
	
	if (estilo == 1 && idade <= 16) {
		cout << nome << " de " << idade << " anos, seguir para Piscina 01";
	}else if (estilo == 1 && idade > 16 ){
		cout << nome << " de " << idade << " anos, seguir para Piscina 05";
	}else if (estilo == 2 && idade <= 21 ){
		cout << nome << " de " << idade << " anos, seguir para Piscina 02";
	}else if (estilo == 2 && idade > 21 ){
		cout << nome << " de " << idade << " anos, seguir para Piscina 03";
	}else if (estilo == 3 && idade < 12){
		cout << nome << " de " << idade << " anos, seguir para Piscina 04";
	}else if (estilo == 3 && idade >= 12 ){
		cout << nome << " de " << idade << " anos, seguir para Piscina 06";
	} else if (estilo >= 4){
		cout << "Erro estilo invalido, tente novamente!";
	}
	
	return 0;
}
