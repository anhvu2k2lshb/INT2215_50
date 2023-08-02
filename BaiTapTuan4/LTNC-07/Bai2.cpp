#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> characters = {'a', 'b', 'c', 'd'};
    int n = characters.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cout << characters[i] << characters[j] << characters[k] << endl;
            }
        }
    }
    return 0;
}
