#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	while (getline(cin, s) && s != "0") {
		int sum = 0;
		for (char c : s) {
			sum += c - '0';
		}
		while (sum >= 10) {
			int innersum = 0;
			while (sum != 0) {
				innersum += sum % 10;
				sum /= 10;
			}
			sum = innersum;
		}
		cout << sum << "\n";
	}
}