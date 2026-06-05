#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> sentences;
	string a;
	int max = 0;
	while (getline(cin, a)) {
		if (a.size() > max) {
			max = a.size();
		}
		sentences.push_back(a);
	}
	reverse(sentences.begin(), sentences.end());
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < sentences.size(); j++) {
			if (i < sentences[j].size()) {
				cout << sentences[j][i];
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}