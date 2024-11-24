#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string word;cin >> word;
		if(size(word) > 10) {
			int result = size(word) - 2;
			cout << word[0] << result << word[size(word) -1] << endl;
		}else cout << word << endl;
	}
	return 0;
}