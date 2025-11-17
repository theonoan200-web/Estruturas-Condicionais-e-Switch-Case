#include <iostream>
using namespace std;

int main() {
    int idade;
    
    cout << "Qual e a sua idade? " << endl;
    cin >> idade;
    
    if (idade < 18) {
        cout << "Menor de idade! " << endl;
    } else if (idade >=18 && idade <=65 ) {
        cout << " Maior de idade! " << endl;
    } else {
        cout << "Idade avancada !" << endl;
    }

    return 0;
}

