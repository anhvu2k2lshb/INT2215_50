#include <iostream> 
#include <string>
using namespace std;

bool checkAnagram(string s1, string s2) {
    int n1 = s1.length(), n2 = s2.length();
    if (n1 != n2)
        return false;
    int count[26] = {0};
    for (int i = 0; i < n1; i++)
        count[s1[i] - 'a']++;
    for (int i = 0; i < n2; i++) {
        count[s2[i] - 'a']--; 
        if (count[s2[i] - 'a'] != 0)
            return false;  
    }
    return true;
}

bool checkArray(string str[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
           if (!checkAnagram(str[i], str[j])) {
               return false;
           }    
        }    
    }
    return true;  
}

int main() {
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++) 
    cin >> str[i];
    if (checkArray(str, n))
       cout << "false";   
    else 
       cout << "true";
    
    return 0;
}