#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	double x1, x2, x3, x4, y1, y2, y3, y4, ansx, ansy;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
		if (x1 == x3 && y1 == y3) {
			ansx = x2 + x4 - x1;
			ansy = y2 + y4 - y1;
		}
		else if (x1 == x4 && y1 == y4) {
			ansx = x2 + x3 - x1;
			ansy = y2 + y3 - y1;
		}
		else if (x2 == x3 && y2 == y3) {
			ansx = x1 + x4 - x2;
			ansy = y1 + y4 - y2;
		}
		else if (x2 == x4 && y2 == y4) {
			ansx = x1 + x3 - x2;
			ansy = y1 + y3 - y2;
		}
		cout << fixed << setprecision(3) << ansx << " " << ansy << endl;
	}
}