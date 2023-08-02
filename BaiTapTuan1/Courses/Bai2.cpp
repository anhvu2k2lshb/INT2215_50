#include <iostream>
using namespace std;
    int main() {
        int n;
        cin >> n;
        int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int tich = 1;
    for (int i = 0; i < n; i++) {
        tich = (tich * arr[i]) % 1307;
    }
    cout << tich;
    return 0;
}
