#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> imultMatriz(const vector<vector<int>>& imatriz, const vector<vector<int>>& imatriz2) {
    if (imatriz[0].size() != imatriz2.size()) {
        cout << "Não é possivel multiplicar matrizes com tamanhos diferentes." << endl;
        return {}; //
    }
    vector<vector<int>> result(imatriz.size(), vector<int>(imatriz2[0].size(), 0));
    for (size_t i = 0; i < imatriz.size(); ++i) {
        for (size_t j = 0; j < imatriz2[0].size(); ++j) {
            for (size_t x = 0; x < imatriz[0].size(); ++x) {
                result[i][j] += imatriz[i][x] * imatriz2[x][j];
            }
        }
    }
    return result;
}
int main() {
    vector<vector<int>> imatriz = {{1, 2, 3}, {3, 4, 1}, {6, 7, 8}};
    vector<vector<int>> imatriz2 = {{5, 6, 1}, {7, 8, 2}, {2, 1, 5}};

    vector<vector<int>> result = imultMatriz(imatriz, imatriz2);

    if (!result.empty()) {
        cout << "Multiplicacao das matrizes: " << endl;
        for (const auto& linha : result) {
            for (int numero : linha) {
                cout << numero << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
