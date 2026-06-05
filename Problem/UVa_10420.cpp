#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	string temp;
	map <string, int> countries;
	while (n--) {
		cin >> temp;
		countries[temp]++;
		getline(cin, temp);
	}
	for (auto const& [country, counts] : countries) {
		cout << country << " " << counts << endl;
	}
}