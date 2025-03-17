#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero;
    int f = 1;
    cout << "Digite o numero que deseja calcular o fatorial: ";
    cin >> numero;
    for (int n = 1; n <= numero; n++){
        f*= n;
    }
    cout << numero << " fatorial e igual a: " << f;

return 0;
}
