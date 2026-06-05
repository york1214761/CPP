#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dx[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int dy[] = { 1, 1, 1, 0, 0, -1, -1, -1 };

int main() {
	int n, m;
	int number = 1;
	bool first = true;
	while (cin >> n >> m && (n != 0 && m != 0)) {
		vector <string> board(n);
		for (int i = 0; i < n; i++) {
			cin >> board[i];
		}
		if (first == true) {
			first = !first;
		}
		else {
			cout << endl;
		}
		cout << "Field #" << number << ":" << endl;
		number++;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] == '*') {
					cout << "*";
				}
				else {
					int counts = 0;
					for (int k = 0; k < 8; k++) {
						int p = i + dy[k];
						int q = j + dx[k];
						if (p >= 0 && p < n && q >= 0 && q < m) {
							if (board[p][q] == '*') {
								counts++;
							}
						}
					}
					cout << counts;
				}
			}
			cout << endl;
		}
		cout << endl;
	}
}