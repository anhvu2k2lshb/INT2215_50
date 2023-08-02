#include <iostream>
#include <cmath>
using namespace std;

int n, count = 0;

void powsum(int a, int i) {
    if (a == 0) count++;
	if (a < 0) return;
	
    int b = 0;
    for (int j = i; b >= 0; j++) {
        b = a - (int)pow(j, n);
        powsum(b, j + 1);
    }
    
    return;
}

int main() {
	int x;
    cin >> x >> n;
    powsum(x, 1);
    cout << count;
}