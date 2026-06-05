#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	while (cin >> n >> m) {
		if (n < 2 || m < 2 || n < m) {
			cout << "Boring!\n";
			continue;
		}
		vector <int> ans;
		ans.push_back(n);
		bool ok = true;
		while (n > 1) {
			if (n % m != 0) {
				ok = false;
				break;
			}
			n /= m;
			ans.push_back(n);
		}
		if (ok == 1 && n == 1) {
			for (int i = 0; i < ans.size(); i++) {
				cout << (i == 0 ? "" : " ") << ans[i];
			}
			cout << "\n";
		}
		else {
			cout << "Boring!\n";
		}
	}
}