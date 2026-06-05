#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, p;
		cin >> n >> p;
		bool hartals[4000] = {false};
		while (p--) {
			int h;
			cin >> h;
			for (int i = h; i <= n; i += h) {
				hartals[i] = true;
			}
		}
		for (int i = 7; i <= n; i += 7) {
			hartals[i] = false;
			hartals[i - 1] = false;
		}
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			if (hartals[i] == true) {
				ans++;
			}
		}
		cout << ans << endl;
	}
}