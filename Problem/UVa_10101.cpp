#include <iostream>
using namespace std;

void bangla(long long x) {
	if (x >= 10000000) {
		bangla(x / 10000000);
		cout << " kuti";
		x %= 10000000;
	}
	if (x >= 100000) {
		bangla(x / 100000);
		cout << " lakh";
		x %= 100000;
	}
	if (x >= 1000) {
		bangla(x / 1000);
		cout << " hajar";
		x %= 1000;
	}
	if (x >= 100) {
		bangla(x / 100);
		cout << " shata";
		x %= 100;
	}
	if (x > 0) {
		cout << " " << x;
	}
}

int main() {
	long long n;
	int number = 1;
	while (cin >> n) {
		cout << "   " << number << ".";
		if (n == 0) {
			cout << " 0" << endl;
		}
		else {
			bangla(n);
			cout << endl;
		}
		number++;
	}
}