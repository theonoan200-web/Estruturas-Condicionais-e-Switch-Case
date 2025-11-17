#include <iostream>
using namespace std;

int main() {
    int numero;

    for (int i = 1; i <= 10; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> numero;

        if (numero % 2 == 0) {
            cout << numero << " é PAR" << endl;
        } else {
            cout << numero << " é ÍMPAR" << endl;
        }

        cout << "----------------------" << endl;
    }

    return 0;
}

