#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int s;
	cin >> s;
	while (s--) {
		int n, i;
		double p;
		cin >> n >> p >> i;
		if (p == 0) {
			cout << "0.0000" << endl;
			continue;
		}
		else {
			double f = 1.0 - p;
			double ans = pow(f, i - 1) * p / (1.0 - pow(f, n));
			cout << fixed << setprecision(4) << ans << endl;
		}
	}
}