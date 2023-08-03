#include <iostream>
#include <vector>
using namespace std;

vector<string> generateGrayCode(int n) {
    if (n == 1) {
        return {"0", "1"};
    }

    vector<string> prevGrayCode = generateGrayCode(n - 1);
    vector<string> grayCode;

    for (int i = 0; i < (int)prevGrayCode.size(); i++) {
        grayCode.push_back("0" + prevGrayCode[i]);
    }

    for (int i = prevGrayCode.size() - 1; i >= 0; i--) {
        grayCode.push_back("1" + prevGrayCode[i]);
    }

    return grayCode;
}

int main() {
    int n;
    cin >> n;

    vector<string> grayCode = generateGrayCode(n);

    for (int i = 0; i < (int)grayCode.size(); i++) {
        cout << grayCode[i] << endl;
    }

    return 0;
}
