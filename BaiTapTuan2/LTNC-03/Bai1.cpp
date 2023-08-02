#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    cout << "do dai chuoi s1: " << s1.length() << endl;
    cout << "do dai chuoi s2: " << s2.length() << endl;

    string s3 = s1 + s2;
    cout << "chuoi ket noi: " << s3 << endl;

    string s4 = s2[0] + s1.substr(1);
    string s5 = s1[0] + s2.substr(1);
    cout << "2 chuoi moi " << s4 << " " << s5 << endl;

    return 0;
}
