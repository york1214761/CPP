#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		a %= b;
		swap(a, b);
	}
	return a;
}

int todecimal(string s) {
	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		sum = sum * 2 + (s[i] - '0');
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		string s1, s2;
		cin >> s1 >> s2;
		int n1 = todecimal(s1);
		int n2 = todecimal(s2);
		cout << "Pair #" << i << ": ";
		if (gcd(n1, n2) > 1) {
			cout << "All you need is love!" << endl;
		}
		else {
			cout << "Love is not all you need!" << endl;
		}
	}
}