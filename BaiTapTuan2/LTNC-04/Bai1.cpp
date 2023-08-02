#include <iostream>
#include <algorithm>
using namespace std;

int solve(int n, int p) {
    int tudausach = p / 2; 
    int tucuoisach = n / 2 - p / 2; 
    return min(tudausach, tucuoisach); 
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n, p;
        cin >> n >> p;

        int soLanLat = solve(n, p);

        cout << soLanLat << endl;
    }
    return 0;
}
