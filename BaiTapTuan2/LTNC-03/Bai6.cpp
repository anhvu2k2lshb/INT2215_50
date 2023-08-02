#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
	int k;
    cin >> s >> k;

    for (int i = 0; i < s.length(); i++) {
        char& c = s[i];
        if (c >= 'a' && c <= 'z') {
            c = 'a' + (c - 'a' + k) % 26;
        } else if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + k) % 26;
        }
    }

    cout << s << endl;

    return 0;
}