#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main () {
	string s;
	cin >> s;
	string s_reversed = s;
	
	reverse(s_reversed.begin(),s_reversed.end()); 
	if (s == s_reversed) cout << "Yes" << endl;
	else cout << "No" << endl; 
	
	return 0;
}