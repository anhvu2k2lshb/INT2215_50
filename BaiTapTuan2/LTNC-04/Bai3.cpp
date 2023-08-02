#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int palindromeIndex(const string& s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            string temp = s;
            temp.erase(left, 1);
            if (isPalindrome(temp)) {
                return left;
            } else {
                temp = s;
                temp.erase(right, 1);
                if (isPalindrome(temp)) {
                    return right;
                } else {
                    return -1;
                }
            }
        }
        left++;
        right--;
    }
    return -1;
}

int main() {
    string s;
    cout << "Nhap chuoi: ";
    cin >> s;
    int index = palindromeIndex(s);
    cout << "Chi so can loai bo de tao thanh chuoi palindrome: " << index << endl;
    return 0;
}
