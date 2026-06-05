#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	string temp;
	while (cin >> x) {
		getline(cin, temp);
		getline(cin, temp);
		stringstream ss(temp);
		long long coefficient = 0;
		vector <long long> f;
		while (ss >> coefficient) {
			f.push_back(coefficient);
		}
		int n = f.size() - 1;
		long long ans = 0;
		for (int i = 0; i < n; i++) {
			ans = ans * x + f[i] * (n - i);
		}
		cout << ans << endl;
	}
}