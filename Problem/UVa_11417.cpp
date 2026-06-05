#include <iostream>
using namespace std;

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	while (cin >> n && n != 0) {
		int g = 0;
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				g += gcd(i, j);
			}
		}
		cout << g << "\n";
	}
}