#include <iostream>
#include <vector>
using namespace std;

int main() {
	int cases = 0;
	cin >> cases;
	while (cases--) {
		int number = 0;
		cin >> number;
		vector <int> fib;
		fib.push_back(1);
		fib.push_back(2);
		int a = 0, b = 0;
		while (b < number) {
			b = fib[a] + fib[a + 1];
			fib.push_back(b);
			a++;
		}
		cout << number << " = ";
		bool start = 0;
		for (int j = fib.size() - 1; j >= 0; j--) {
			if (number >= fib[j]) {
				cout << "1";
				number = number - fib[j];
				start = 1;
			}
			else if (number < fib[j] && start == 1) {
				cout << "0";
			}
		}
		cout << " (fib)" << endl;
	}
}