#include <iostream>
using namespace std;

int main() {
    int n, q;
    cout << "Nhap day so (n) và so cau truy van (q): ";
    cin >> n >> q;

    int** arr = new int*[n];
    for (int i = 1; i <= n; i++) {
        int size;
        cout << "Nhap day so thu " << i << " (kich thuoc va cac phan tu): ";
        cin >> size;
        arr[i] = new int[size];
        for (int j = 1; j <= size; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= q; i++) {
        int row, col;
        cout << "Nhap cau truy van (row, col) thu: " << i << " ";
        cin >> row >> col;
        if (col < 0 || col >= (int)sizeof(arr[row])/sizeof(int)) {
            cout << "ERROR" << endl;
        } else {
            cout << arr[row][col] << endl;
        }
    }

    // free memory
    for (int i = 1; i <= n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}