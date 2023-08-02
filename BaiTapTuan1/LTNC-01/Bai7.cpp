#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int Soduong = 0, Soam = 0, So0 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            Soduong++;
        } else if (arr[i] < 0) {
            Soam++;
        } else {
            So0++;
        }
    }

    cout << setprecision(2) << (double) Soduong / n << endl;
    cout << setprecision(2) << (double) Soam / n << endl;
    cout << setprecision(2) << (double) So0 / n << endl;

    return 0;
}
