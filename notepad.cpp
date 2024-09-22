#include <iostream>
#include <string>
using namespace std;

typedef long long ll;
int factorial(int x, int temp = 1) { // factorial = 120
	if (x > 1) { // false
		temp *= x; // 60 * 2
		return factorial (x - 1, temp); // (0, 120)
	return temp;
	}
}
int main() {
	int factorial1 = 3;
	cout << factorial(factorial1) << endl;
	

}
