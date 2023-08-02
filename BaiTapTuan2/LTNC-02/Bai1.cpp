#include <iostream>
using namespace std;

int main() {
    int T;
	cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int count = 0;
        int temp = n;

        while (temp != 0) {
            int chuSo = temp % 10;
            if (chuSo != 0 && n % chuSo == 0) {
                count++;
            }
            temp /= 10;
        }
        cout << count << endl;
    }
    return 0;
}