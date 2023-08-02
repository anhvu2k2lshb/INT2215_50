#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string nhapthoigian;
    cout << "nhap thoi gian theo dinh dang 12h: hh:mm:ss AM/PM: ";
    getline(cin, nhapthoigian);

    int gio, phut, giay;
    char dau, kihieu;
    stringstream ss(nhapthoigian);
    ss >> gio >> dau >> phut >> dau >> giay >> kihieu;

    if (kihieu == 'P' && gio != 12) {
        gio += 12;
    } else if (kihieu == 'A' && gio == 12) {
        gio = 0;
    }

    cout << "thoi gian theo dinh dang 24h: ";
    if (gio < 10) {
        cout << "0";
    }
    cout << gio << ":";
    if (phut < 10) {
        cout << "0";
    }
    cout << phut << ":";
    if (giay < 10) {
    	cout << "0";
	}
	cout << giay << endl;

    return 0;
}