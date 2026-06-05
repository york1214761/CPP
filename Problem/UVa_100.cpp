#include <iostream>
using namespace std;

int main() {
	int i = 0, j = 0;
	while (cin >> i >> j) {
		int initial_i = i, initial_j = j, max = 0;
		if (i > j) {
			swap(i, j);
		}
		for (int a = i; a <= j; a++) {
			int n = a, count = 0;
			while (n != 1) {
				if (n % 2) {
					n = 3 * n + 1;
				}
				else {
					n = n / 2;
				}
				count++;
			}
			count++;
			if (count > max) {
				max = count;
			}
		}
		cout << initial_i << " " << initial_j << " " << max << endl;
	}
}