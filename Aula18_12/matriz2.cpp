#include <iostream>

using namespace std;

int main() {

    int matriz[10][4];

    double soma, media;

    for (int i = 0; i <= 2; i++) {

        cout << endl << "Informe o RA do aluno: ";
        cin >> matriz[i][0];

        cout << "Informe a nota do aluno: ";
        cin >> matriz[i][1];

        cout << "Informe a segunda nota do aluno: ";
        cin >> matriz[i][2];

        cout << "Informe a terceira nota do aluno: ";
        cin >> matriz[i][3];
    }

    for (int i = 0; i <= 2; i++) {

        soma = 0;

        for (int j = 1; j <= 3; j++) {
            soma += matriz[i][j];
        }

        media = soma / 3;

        if (media >= 5) {
            cout << "Aluno com RA " << matriz[i][0] << " aprovado com media " << media<< endl;
        } else {
            cout << "Aluno com RA " << matriz[i][0] << " reprovado com media " <<media<< endl;
        }
    }

    return 0;
}
