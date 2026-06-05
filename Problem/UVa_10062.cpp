#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct asc {
	int number, times;
};

bool compare(asc a, asc b) {
	if (a.times == b.times) {
		return a.number > b.number;
	}
	return a.times < b.times;
}

int main() {
	bool first = true;
	string temp;
	while (getline(cin, temp)) {
		if (first == true) {
			first == false;
		}
		else {
			cout << endl;
		}
		vector <asc> ans(128);
		for (int i = 32; i < 128; i++) {
			ans[i].number = i;
			ans[i].times = 0;
		}
		for (char c : temp) {
			ans[c].times++;
		}
		sort(ans.begin() + 32, ans.end(), compare);
		for (int i = 32; i < 128; i++) {
			if (ans[i].times != 0) {
				cout << ans[i].number << " " << ans[i].times << endl;
			}
		}
	}
}