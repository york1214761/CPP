#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int m, n, q;
		string temp;
		cin >> m >> n >> q;
		getline(cin, temp);
		vector <string> board;
		for (int i = 0; i < m; i++) {
			getline(cin, temp);
			board.push_back(temp);
		}
		cout << m << " " << n << " " << q << "\n";
		int r, c;
		while (q--) {
			cin >> r >> c;
			int ans = 1;
			int l = 1;
			bool ok = true;
			char target = board[r][c];
			while (ok == true) {
				if (r - l < 0 || r + l >= m || c - l < 0 || c + l >= n) {
					break;
				}
				ok = true;
				for (int i = r - l; i <= r + l; i++) {
					for (int j = c - l; j <= c + l; j++) {
						if (board[i][j] != target) {
							ok = false;
						}
					}
				}
				if (ok) {
					ans += 2;
					l += 1;
				}
				else {
					break;
				}
			}
			cout << ans << "\n";
		}
	}
}