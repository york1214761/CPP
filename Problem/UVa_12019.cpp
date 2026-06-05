#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string day[7] = { "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday" };

	int t;
	cin >> t;
	while (t--) {
		int m, d;
		cin >> m >> d;
		int total = 0;
		for (int i = 0; i < m; i++) {
			total += month[i];
		}
		total += d;
		cout << day[total % 7] << "\n";
	}
}