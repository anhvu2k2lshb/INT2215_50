#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a;
    int b;
    int c;
    
    cin >> a >> b >> c;
    
    double tip;
    tip = b * (a / 100);
    double tax;
    tax = a * (c / 100);
    int total = a + tip + tax;
    cout << total << endl<< tip<< endl << tax;
return 0;
}