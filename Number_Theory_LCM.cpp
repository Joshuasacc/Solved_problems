//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

long long LCM(int a, int b) { // using long long data type to minimize the error when the values are bigger than datatype itself
    return ((a  * b)/ gcd(a, b));
}   
int list_of_LCM(const std::vector<int> &v) {
    int result = v[0];
    for(int i = 1; i < v.size(); i++) {
        result = LCM(result, v[i]);
    }
    return result;
}
void solve() {
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int partial_result = list_of_LCM(a);

        for(int i = 0; i < n + 1; i++) {
            if( i+1 == n) {
                cout << partial_result << " ";
            }
            if(i < n) cout << a[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
