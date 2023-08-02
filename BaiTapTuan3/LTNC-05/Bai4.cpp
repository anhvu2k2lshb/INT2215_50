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

    int q;
    cout << "So cac test phai lam: ";
    cin >> q;
    for (int i = 0; i < q; i++) {
        int y;
        cout << "Nhap so nguyen can test: ";
        cin >> y;

        vector<int>::iterator it = lower_bound(numbers.begin(), numbers.end(), y);
        int index = it - numbers.begin();

        if (*it == y) {
            cout << "Yes " << (index + 1) << endl;
        } else if (index < n) {
            cout << "No " << (index + 1) << endl;
        } else {
            cout << "No " << (n + 1) << endl;
        }
    }

    return 0;
}
