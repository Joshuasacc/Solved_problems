//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
void solve() { 
    int a = 15;
    int b = 12;
    int m = 5;
    // 10 % 5 = 2
    int modular_subtraction = ((a % m) - (b % m) + m) % m;
    int modular_addition = ((a % m) + (b % m)) % m;
    cout << modular_addition << "\n";
}
void test() {
    int m = 0;
    long long x = 1;
    int n = 5;
    for (int i = 2; i <= n; i++) {
        x = (x*i)%m;
    }
    cout << x%m << "\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
