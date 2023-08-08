#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& P, int first, int last, int year, int& maxProfitSoFar) {
    if (first > last) {
        return 0;
    }
    
    int profitFirst = year * P[first] + maxProfit(P, first + 1, last, year + 1, maxProfitSoFar);
    int profitLast = year * P[last] + maxProfit(P, first, last - 1, year + 1, maxProfitSoFar);
    
    int maxProfitCurrent = max(profitFirst, profitLast);
    maxProfitSoFar = max(maxProfitSoFar, maxProfitCurrent);
    
    return maxProfitCurrent;
}

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    int maxProfitSoFar = 0;
    int result = maxProfit(P, 0, N - 1, 1, maxProfitSoFar);
    cout << result << endl;
    return 0;
}
