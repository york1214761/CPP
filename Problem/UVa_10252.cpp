#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s1, s2;
	while (getline(cin, s1) && getline(cin, s2)) {
		vector <int> counts1(26, 0);
		vector <int> counts2(26, 0);
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] >= 'a' && s1[i] <= 'z') {
				counts1[s1[i] - 'a']++;
			}
		}
		for (int i = 0; i < s2.length(); i++) {
			if (s2[i] >= 'a' && s2[i] <= 'z') {
				counts2[s2[i] - 'a']++;
			}
		}
		for (int i = 0; i < 26; i++) {
			int times = min(counts1[i], counts2[i]);
			char c = i + 'a';
			while (times--) {
				cout << c;
			}
		}
		cout << endl;
	}
}