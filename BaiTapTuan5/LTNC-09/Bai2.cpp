#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a = 4;
    double b = 4.0;
    string s = "HackerRank ";
    
    int x;
    double y;
    string s1;
    string temp;
    
    getline(cin, temp);
    x = stoi(temp);
    getline(cin, temp);
    y= stoi(temp);
    getline(cin, s1);
    
    a = a + x;
    b = b + y;
    cout << a << endl;
    cout << fixed << setprecision(1) << b << endl;
    cout << s << s1;
    
return 0;
}