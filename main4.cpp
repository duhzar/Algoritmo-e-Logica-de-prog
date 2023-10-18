#include <iostream>
using namespace std;

int main() {
	float n1=0, n2=0, n3=0, media=0, freq=0;
	
	cout << "Insira a nota da primeira prova\n ";
	cin >> n1;
	cout << "Insira a nota da segunda prova\n";
	cin >> n2;
	cout << "Insira a nota da terceira prova\n ";
	cin >> n3;
	cout << "Insira a frequencia do aluno\n ";
	cin>> freq;
	
	media = (n1+n2+n3)/3;
	
	if (media>=6 && freq>=75){
		cout << "Aluno aprovado!";
	}else if(media >=4 && freq >= 75){
		cout << "Aluno de EXAME!";
	}else {
		cout << "Aluno reprovado!";
	}
	
	return 0;
}
