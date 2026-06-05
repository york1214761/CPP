#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	while (cin >> n) {
		vector <int> x(n);
		for (int i = 0; i < n; i++) {
			cin >> x[i];
		}
		sort(x.begin(), x.end());
		int mid_l = x[(n - 1) / 2];
		int mid_r = x[n / 2];
		int ans2 = 0;
		for (int i = 0; i < n; i++) {
			if (x[i] >= mid_l && x[i] <= mid_r) {
				ans2++;
			}
		}
		int ans3 = mid_r - mid_l + 1;
		cout << mid_l << " " << ans2 << " " << ans3 << endl;
	}
}