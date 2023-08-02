#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Nhap " << n << " so nguyen:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());

    cout << "Cac so sau khi sap xep tang dan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
