#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
bool is_odd(int x) {
	return x % 2 != 0;
}

bool compare(int x, int y) {
	int remainder_x = x % m;
	int remainder_y = y % m;
	bool x_is_odd = is_odd(x);
	bool y_is_odd = is_odd(y);
	if (remainder_x != remainder_y) {
		return remainder_x < remainder_y;
	}
	else if (x_is_odd != y_is_odd) {
		return x_is_odd > y_is_odd;
	}
	else if (x_is_odd && y_is_odd) {
		return x > y;
	}
	else {
		return x < y;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (cin >> n >> m && (n != 0 || m != 0)) {
		vector <int> numbers(n);
		for (int i = 0; i < n; i++) {
			cin >> numbers[i];
		}
		sort(numbers.begin(), numbers.end(), compare);
		cout << n << " " << m << "\n";
		for (int i = 0; i < n; i++) {
			cout << numbers[i] << "\n";
		}
	}
	cout << "0 0" << "\n";
}