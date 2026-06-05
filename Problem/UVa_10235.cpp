#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		bool is_prime = true;
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				is_prime = false;
				break;
			}
		}
		if (is_prime) {
			int reverse_n = 0;
			int a = n;
			while (a != 0) {
				reverse_n = reverse_n * 10 + (a % 10);
				a = a / 10;
			}
			bool is_emirp = true;
			for (int j = 2; j * j <= reverse_n; j++) {
				if (reverse_n % j == 0) {
					is_emirp = false;
					break;
				}
			}
			if (is_emirp == 1 && n != reverse_n) {
				cout << n << " is emirp." << endl;
			}
			else {
				cout << n << " is prime." << endl;
			}
		}
		else {
			cout << n << " is not prime." << endl;
		}
	}
}