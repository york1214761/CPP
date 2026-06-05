#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct letter {
	char c;
	int times;
};

bool compare(letter a, letter b) {
	if (a.times != b.times) {
		return a.times > b.times;
	}
	else {
		return a.c < b.c;
	}
}

int main() {
	int n;
	while (cin >> n) {
		cin.ignore();
		string temp;
		vector <letter> ans(26);
		for (int i = 0; i < 26; i++) {
			ans[i].c = i + 'A';
			ans[i].times = 0;
		}
		while (n--) {
			getline(cin, temp);
			for (int i = 0; i < temp.size(); i++) {
				if (temp[i] >= 'a' && temp[i] <= 'z') {
					ans[temp[i] - 'a'].times++;
				}
				else if (temp[i] >= 'A' && temp[i] <= 'Z') {
					ans[temp[i] - 'A'].times++;
				}
			}
		}
		sort(ans.begin(), ans.end(), compare);
		for (int i = 0; i < 26; i++) {
			if (ans[i].times != 0) {
				cout << ans[i].c << " " << ans[i].times << endl;
			}
		}
	}
}