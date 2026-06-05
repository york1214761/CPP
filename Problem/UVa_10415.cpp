#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector <bool> f(11, false);

void finger(char c) {
	for (int i = 1; i <= 10; i++) {
		f[i] = false;
	}
	switch (c) {
	case 'c':
		f[2] = f[3] = f[4] = f[7] = f[8] = f[9] = f[10] = true;
		break;
	case 'd':
		f[2] = f[3] = f[4] = f[7] = f[8] = f[9] = true;
		break;
	case 'e':
		f[2] = f[3] = f[4] = f[7] = f[8] = true;
		break;
	case 'f':
		f[2] = f[3] = f[4] = f[7] = true;
		break;
	case 'g':
		f[2] = f[3] = f[4] = true;
		break;
	case 'a':
		f[2] = f[3] = true;
		break;
	case 'b':
		f[2] = true;
		break;
	case 'C':
		f[3] = true;
		break;
	case 'D':
		f[1] = f[2] = f[3] = f[4] = f[7] = f[8] = f[9] = true;
		break;
	case 'E':
		f[1] = f[2] = f[3] = f[4] = f[7] = f[8] = true;
		break;
	case 'F':
		f[1] = f[2] = f[3] = f[4] = f[7] = true;
		break;
	case 'G':
		f[1] = f[2] = f[3] = f[4] = true;
		break;
	case 'A':
		f[1] = f[2] = f[3] = true;
		break;
	case 'B':
		f[1] = f[2] = true;
		break;
	default:
		break;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string temp;
	cin >> n;
	getline(cin, temp);
	while (n--) {
		getline(cin, temp);
		vector <bool> last_f(11, false);
		vector <int> counts(11, 0);
		for (int i = 0; i < temp.length(); i++) {
			finger(temp[i]);
			for (int i = 1; i <= 10; i++) {
				if (f[i] == 1 && last_f[i] == 0) {
					counts[i]++;
				}
				last_f[i] = f[i];
			}
		}
		for (int i = 1; i <= 10; i++) {
			cout << (i == 1 ? "" : " ") << counts[i];
		}
		cout << endl;
	}
}