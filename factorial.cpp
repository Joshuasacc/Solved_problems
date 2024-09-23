// factorial algorithm using recursion
#include <iostream>
#include <string>
using namespace std;

typedef long long ll;
int factorial(int x, int temp = 1) { 
	if (x > 1) { 
		temp *= x; 
		return factorial (x - 1, temp); 
	return temp;
	}
}
int main() {
	int factorial1;
	cin >> factorial1;
	cout << factorial(factorial1) << endl;
	return 0;
}
