#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	while (cin >> a >> b && (a != 0 && b != 0)) {
		int ans = (floor(sqrt(b))) - (ceil(sqrt(a))) + 1;
		if (ans < 0) {
			cout << "0";
		}
		else {
			cout << ans;
		}
		cout << "\n";
	}
}