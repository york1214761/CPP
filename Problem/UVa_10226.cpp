#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string useless, temp;
	bool first = true;
	cin >> n;
	getline(cin, useless);
	getline(cin, useless);
	while (n--) {
		double total = 0.0;
		map <string, int> tree;
		while (getline(cin, temp) && !temp.empty()) {
			tree[temp]++;
			total++;
		}
		if (first == false) {
			cout << endl;
		}
		else {
			first = !first;
		}
		for (auto const& [species, counts] : tree) {
			double percentage = counts / total * 100;
			cout << species << " " << fixed << setprecision(4) << percentage << endl;
		}
	}
}