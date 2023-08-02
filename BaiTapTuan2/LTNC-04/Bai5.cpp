#include <iostream> 
#include <algorithm>
using namespace std;

int sapxep(int a[], int n, int b[], int m) {
    sort(a, a+n);    
    sort(b, b+m);
      
    int i = 0, j = 0;  
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            i++; 
            j++;         
        }
        else {
            return b[j++];
        }        
    }
    
    return b[j];      
}

int main() {
    int n; 
    cin >> n;
    
    int a[n];    
    for (int i = 0; i < n; i++) {
        cin >> a[i];    
    }
       
    int m = n + 1;   
    int b[m];    
    for (int i = 0; i < m; i++) {
        cin >> b[i];    
    }
      
    int sokhac = sapxep(a, n, b, m);     
    cout << sokhac; 
    
    return 0;    
}