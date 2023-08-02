#include <iostream>
using namespace std ;

int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[n + 1];
    for (int i = 0; i < n + 1; i++) {
        cin >> b[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; i < n + 1; j++) {
            if (a[i] == b[j]) {
                b[j] = 0;
                break;
            }
        }
    }
    for (int i = 0; i < n + 1; i++) {
        if (b[i] != 0) {
            cout << b[i] << endl;
            break;
        }
    }
    return 0;
}