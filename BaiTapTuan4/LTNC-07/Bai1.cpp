#include <iostream>
#include <vector>
using namespace std;

string binary_Search(const vector<int>& arr, int x) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = (right + left) / 2;
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            return "YES";
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return "NO";
}
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << binary_Search(arr, x) << endl;
    return 0;
}
