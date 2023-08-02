#include <iostream>
#include <string>
using namespace std;

	bool nhapchuoikitu(string s) {
		string check = "hackerrank";
		int index = 0;
		for (int i = 0; i < s.length(); i++) {
    		if (s[i] == check[index]) {
        	index++;
    		}
    		if (index == check.length()) {
        	return true; 
    		}      
		}
	return false;
	}
	
	int main() {
		int T;
		cin >> T;
		while (T--) {
    		string s; 
    		cin >> s;
    		if (nhapchuoikitu(s)) {
        		cout << "YES" << endl;
    		} else {
        		cout << "NO" << endl; 
    		}
		}
	return 0;
	}