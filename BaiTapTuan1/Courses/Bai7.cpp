#include <iostream>
#include <string>
using namespace std;

struct NhanVien {
    int MSNV;
    string hoTen;
    int Songaycong;
    int bac;
};

int main() {
    int n;
    cin >> n;
    NhanVien DSnhanvien[n];
    for (int i = 0; i < n; i++) {
        cin >> DSnhanvien[i].MSNV;
        cin.ignore();

        getline(cin, DSnhanvien[i].hoTen,',');
        
        cin >> DSnhanvien[i].Songaycong;
        cin.ignore();

        cin >> DSnhanvien[i].bac;
    }

    int Luongcaonhat = 0;

    for (int i = 0; i < n; i++) {
        int luongThang = DSnhanvien[i].Songaycong * DSnhanvien[i].bac * 1.05;

        if (luongThang > Luongcaonhat) {
            Luongcaonhat = luongThang;
        }
    }

    for (int i = 0; i < n; i++) {
        int luongThang = DSnhanvien[i].Songaycong * DSnhanvien[i].bac * 1.05;

        if (luongThang == Luongcaonhat) {
            string ten = DSnhanvien[i].hoTen.substr(DSnhanvien[i].hoTen.find(",") + 2);
            cout << ten << endl;
        }
    }

    return 0;
}
