#include <iostream>
using namespace std;

int main(){
	string nome[20];
	string telefone[20];
	int opcao, contador=0;
	string pesquisa;
	do{
	
	cout<<"+---------Agenda-------+\n";
	cout<<"| 1- Cadastrar contato |\n";
	cout<<"| 2- Pesquisar contato |\n";
	cout<<"| 3- Sair              |\n";
	cout<<"+----------------------+\n";
	cout<< "Digite a opçao: ";
	cin>> opcao;
	
	switch(opcao){
		case 1:
			if(contador < 20){
			
			cout<< "++ Cadastro de Contatos ++\n";
			cout<< "Contatos: "<< contador+1;
			cout<< "Informe o nome do contato ";
			cin>> nome[contador];
			cout<< "Informe o telefone do contato ";
			cin>> telefone[contador];
			
			
			contador ++;
			break;
		}else{
			cout<<"Lista Lotada\n";
		}
		case 2:
			cout<<"Pesquisa de Contatos \n";
			cout<<"Informe o nome para pesquisa: ";
			cin>> pesquisa;
			for(int i=0; i<20; i++){
				if(pesquisa==nome[i]){
					cout<<"Nome: "<<nome[i]<< endl;
					cout<<"Telefone "<<telefone[i]<<endl;
				}
			}
			break;
		case 3:
			cout<<"Valeu FALOU!!";
			break;
	}
}while(opcao != 3);
	return 0;
	}
