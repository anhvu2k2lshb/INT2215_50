#include <iostream>
#include <vector>
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

    int index;
    cout << "Nhap chi so cua phan tu can xoa (tinh tu 1): ";
    cin >> index;

    // Xoá phần tử có chỉ số index (tính từ 1) trong vector
    numbers.erase(numbers.begin() + index - 1);

    int a, b;
    cout << "Nhap a va b: ";
    cin >> a >> b;

    // Xoá các phần tử từ a đến b (không xoá phần tử b) trong vector
    numbers.erase(numbers.begin() + a - 1, numbers.begin() + b - 1);

    cout << "Cac so con lai sau khi xoa:" << endl;
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
