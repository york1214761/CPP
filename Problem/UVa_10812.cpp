#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n--) {
		int s, d;
		cin >> s >> d;
		if ((s + d) % 2) {
			cout << "impossible\n";
		}
		else {
			int w = (s + d) / 2;
			int l = w - d;
			if (l >= 0) {
				cout << w << " " << l << "\n";
			}
			else {
				cout << "impossible\n";
			}
		}
	}
}