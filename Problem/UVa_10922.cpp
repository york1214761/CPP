#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string temp;
	while (cin >> temp && temp != "0") {
		int sum = 0;
		for (int i = 0; i < temp.length(); i++) {
			sum += temp[i] - '0';
		}
		if (sum % 9 != 0) {
			cout << temp << " is not a multiple of 9." << "\n";
		}
		else {
			int degree = 1;
			while (sum >= 10) {
				degree += 1;
				int innersum = 0;
				while (sum != 0) {
					innersum += sum % 10;
					sum /= 10;
				}
				sum = innersum;
			}
			cout << temp << " is a multiple of 9 and has 9-degree " << degree << ".\n";
		}
	}
}