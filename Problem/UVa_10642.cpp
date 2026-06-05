#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		long long d1 = x1 + (x1 + y1 + 1) * (x1 + y1) / 2;
		long long d2 = x2 + (x2 + y2 + 1) * (x2 + y2) / 2;
		cout << "Case " << i << ": " << d2 - d1 << "\n";
	}
}