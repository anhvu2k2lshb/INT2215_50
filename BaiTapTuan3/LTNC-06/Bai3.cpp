#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int diem[5];
public:
    void input() {
        cout << "Nhap diem 5 mon hoc: ";
        for (int i = 0; i < 5; i++) {
            cin >> diem[i];
        }
    }

    int Tongdiem() {
        int tong = 0;
        for (int i = 0; i < 5; i++) {
            tong += diem[i];
        }
        return tong;
    }
};

int main() {
    int n;
    cout << "Nhap so luong hoc sinh: ";
    cin >> n;

    int kristen;
    cout << "Tong diem cua Kristen's: ";
    cin >> kristen;

    int count = 0;

    for (int i = 0; i < n; i++) {
        Student student;
        student.input(); 
        int tong = student.Tongdiem();

        if (tong > kristen) {
            count++;
        }
    }
    cout << "So ban hoc sinh co diem cao hon diem Kristen's: " << count << endl;
    return 0;
}
