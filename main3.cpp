#include <iostream>
using namespace std;

int main() {
	string nome;
	string resp;
	int acerto;
	
	acerto = 0;
	cout << "Bem vindo ao Quiz de Apex Legends! \n Primeiramente qual seu nome: ";
	cin >> nome;
	
	cout <<"Certo " << nome << ", vamos comecar!\n";
	cout << "1. Qual a unica arma do jogo que nunca saiu do 'drop box'? \n ";
	cout << "a)L-STAR \n b)HEMLOK \n c)KRABER \n d)DEVOTION \n";
	cin >> resp;
	
	if(resp == "c" || resp == "C"){
		cout << "Boa! Certa Resposta!\n";
		acerto ++;
	}else{
		cout <<"EROUUUUUUU\n";
	}
	
	cout<< "2. Qual das Lendas do apex tem sua nacionalidade brasileira?\n";
	cout<< " a)CAUSTIC \n b)LOBA \n c)OCTANE \n d)MIRAGE \n";
	cin >> resp;
	
		if(resp == "b"|| resp == "B"){
		cout << "Boa! Certa Resposta!\n";
		acerto ++;
	}else{
		cout <<"EROUUUUUUU\n";
	}
	
	cout<< "3. Agora sobre o competitivo, qual foi a equipe campea do ALGS Champions do ano de 2023?\n";
	cout<< " a)TSM \n b)SINGULARITY \n c)THE DOJO \n d)FAZE \n";
	cin >>resp;
	
		if(resp == "a"|| resp == "A"){
		cout << "Boa! Certa Resposta!\n";
		acerto ++;
	}else{
		cout <<"EROUUUUUUU\n";
	}
	
	cout<< "4. Quantas equipes de 3 integrantes participam de uma partida comum de Apex Legends?\n";
	cout<< " a)10 \n b)15 \n c)20 \n d)25 \n";
	cin >>resp;
	
		if(resp == "c"|| resp == "C"){
		cout << "Boa! Certa Resposta!\n";
		acerto ++;
	}else{
		cout <<"EROUUUUUUU\n";
	}
	
	cout<< "5.Qual lenda tem como ultimate 'SHEILA'?\n";
	cout<< " a)OCTANE \n b)HORIZON \n c)RAMPART \n d)BLOODHOUND \n";
	cin >>resp;
	
		if(resp == "c"|| resp == "C"){
		cout << "Boa! Certa Resposta!\n";
		acerto ++;
	}else{
		cout <<"EROUUUUUUU\n";
	}
	
	cout<< "Isso e tudo obrigado por jogar!\n";
	cout<< " Voce acertou " <<acerto << " pergunta(s). \n";
	cout << "Errando um total de "<< 5 - acerto<< " pergunta(s). \n";
	
	
	return 0;
}
