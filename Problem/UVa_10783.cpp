#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a, b;
		cin >> a >> b;
		if (a % 2 == 0) {
			a += 1;
		}
		if (b % 2 == 0) {
			b -= 1;
		}
		int sum = 0;
		for (int j = a; j <= b; j = j + 2) {
			sum += j;
		}
		cout << "Case " << i << ": " << sum << "\n";
	}
}