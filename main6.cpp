#include <iostream>
using namespace std;


int main() {
	int n1, n2, n3;
	
	cout << "insira a primeira medida: \n";
	cin >> n1;
	cout << "insira a segunda medida: \n";
	cin >> n2;
	cout << "insira a terceira medida: \n";
	cin >> n3;
	
	if(n1 == n2 && n1 == n3){
		cout << "Triangulo equilatero";
	}else if (n1 == n2 || n1 == n3 || n2 == n3 ){
		cout << "Triangulo isoceles";
	}else if (n1 != n2 && n1 != n3 && n2 != n3){
		cout << "Triangulo escaleno";
	}
	return 0;
}
