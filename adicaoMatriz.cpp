#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> imatrizAdicao(const vector<vector<int>>& imatriz, const vector<vector<int>>& imatriz2) {
    if (imatriz.size() != imatriz2.size() || imatriz[0].size() != imatriz2[0].size()) {
        cout << "Não é possivel somar matrizes com tamanhos diferentes." << endl;
        return {};
    }
   vector<vector<int>> result(imatriz.size(), vector<int>(imatriz[0].size()));

    for (size_t i = 0; i < imatriz.size(); ++i) {
        for (size_t j = 0; j < imatriz[0].size(); ++j) {
            result[i][j] = imatriz[i][j] + imatriz2[i][j];
        }
    }
    return result;
}
int main() {
    vector<vector<int>> imatriz = {{4, 7, 5}, {1, 8, 2}, {5, 2, 6}};
    vector<vector<int>> imatriz2 = {{6, 4, 2}, {7, 5, 9}, {1, 3, 8}};

    vector<vector<int>> result = imatrizAdicao(imatriz, imatriz2);
    if (!result.empty()) {
        cout << "Soma das matrizes: " << endl;
        for (const auto& linha : result) {
            for (int numero : linha) {
                cout << numero << " ";
            }
            cout << endl;
        }
    }
return 0;
}
