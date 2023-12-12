#include <iostream>
using namespace std;

int main(){
	int numero[8];
	
	int opcao, contador=0;
	int pesquisa;
	do{
	
	cout<<"+--------Numeros-------+\n";
	cout<<"| 1- Numero novo       |\n";
	cout<<"| 2- Pesquisar Numero  |\n";
	cout<<"| 3- Sair              |\n";
	cout<<"+----------------------+\n";
	cout<< "Digite a opçao: ";
	cin>> opcao;
	
	switch(opcao){
		case 1:
			if(contador < 8){
			
			cout<< "++ Cadastro de numeros ++\n";
			cout<< "Informe o numero ";
			cin>> numero[contador];
			
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
				if(pesquisa==numero[i]){
					cout<<numero[i]<< endl;
				}else{
					cout<<"Numero não encontrado";
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
