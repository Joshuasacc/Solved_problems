// Hackerrank | Strings
#include <iostream>
#include <string>
using namespace std;
int main () {
	string n, n2;
	cin >> n;
	cin >> n2;
	cout << size (n) << " " << size (n2) << endl;
	cout << n + n2 << endl;
	
	// strings are just array of characters
	char temp = n[0];
	n[0] = n2[0];
	n2[0] = temp;
	cout << n << " " << n2 << endl;	
    return 0;
}