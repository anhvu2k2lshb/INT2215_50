#include <iostream>
using namespace std;

int thongso(int x1, int v1, int x2, int v2) {
    if (x1 < x2 && v1 > v2) {
        if ((x2 - x1) % (v1 - v2) == 0) { 
            return (x2 - x1) / (v1 - v2);
        }
    }
    return -1; //
}

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    int solan = thongso(x1, v1, x2, v2);
    if (solan >= 0) {
        cout << "Hai con kangaroo se gap nhau sau " << solan << " lan nhay.\n";
    } else {
        cout << "Hai con kangaroo khong the gap nhau.\n";
    }

    return 0;
}
