#include <iostream>
#include <string>
using namespace std;

void generateParentheses(int open, int close, string current, int n) {
    if ((int)current.length() == 2 * n) {
        cout << current << endl;
        return;
    }
    if (open < n) {
        generateParentheses(open + 1, close, current + "(", n);
    }
    if (close < open) {
        generateParentheses(open, close + 1, current + ")", n);
    }
}

int main() {
    int n;
    cin >> n;
    generateParentheses(0, 0, "", n);
    return 0;
}
