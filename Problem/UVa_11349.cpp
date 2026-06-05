#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for (int test = 1; test <= t; test++) {
		char c;
		int n;
		cin >> c >> c >> n;
		vector <vector<long long>> matrix(n, vector <long long> (n));
		bool yes = true;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> matrix[i][j];
				if (matrix[i][j] < 0) {
					yes = false;
				}
			}
		}
		if (yes) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (matrix[i][j] != matrix[n - 1 - i][n - 1 - j]) {
						yes = false;
					}
				}
			}
		}
		cout << "Test #" << test << ": ";
		if (yes) {
			cout << "Symmetric.\n";
		}
		else {
			cout << "Non-symmetric.\n";
		}
	}
}