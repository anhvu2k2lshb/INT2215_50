#include <iostream>
#include <unordered_map>
using namespace std;

int equalizeArray(int arr[], int n) {
    unordered_map<int, int> countMap;
    
    for (int i = 0; i < n; i++) {
        countMap[arr[i]]++;
    }
    
    int maxCount = 0;
    for (auto it : countMap) {
        maxCount = max(maxCount, it.second);
    }
    
    int minDeletions = n - maxCount;   
    return minDeletions;
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int minDeletions = equalizeArray(arr, n);
    cout << minDeletions << endl;
    
    return 0;
}