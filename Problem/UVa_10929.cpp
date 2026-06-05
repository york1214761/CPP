#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	while (cin >> s && s != "0") {
		int odd_sum = 0;
		int even_sum = 0;
		for (int i = 0; i < s.length(); i++) {
			int a = s[i] - '0';
			if (i % 2 == 1) {
				even_sum += a;
			}
			if (i % 2 == 0) {
				odd_sum += a;
			}
		}
		int d = abs(odd_sum - even_sum);
		if (d % 11 == 0) {
			cout << s << " is a multiple of 11.\n";
		}
		else {
			cout << s << " is not a multiple of 11.\n";
		}
	}
}