// Big factorial solution on toph
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

unsigned long long int factorial(long long n) {
    if (n < 1) return 1;
    else return n * factorial(n - 1);
}
int main() {
    long long x;
    cin >> x;
    string num = to_string(factorial (x));
    reverse (num.begin(), num.end());
    string num2;

    if (num.length () >= 4) {
        for (int i = 0; i < 4; i++) num2 +=num[i];
    } else for (int i = 0; i < num.length (); i++) num2 +=num[i];

	reverse (num2.begin (), num2.end ());
    cout << num2;
    return 0;
}
