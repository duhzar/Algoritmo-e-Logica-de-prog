#include <iostream>

using namespace std;

int main() {
	string matriz [5][2];

	
	for(int i=0; i<5; i++){
		cout<<"\nInsira o nome: ";
		cin >> matriz[i][0];
		cout<<"\nInsira seu codigo: ";
		cin>> matriz[i][1];
		
	}
	
	for(int i=0; i<5; i++){
		cout<< endl;
		cout<< "-----------------------\n";
		cout<< " | " << matriz[i][0]<<" | "<<matriz [i][1]<<" | "<<Cendl;
		
	}
	cout<<"-----------------------";
	
	return 0;
}
