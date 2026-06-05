#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	while (cin >> n && n != 0) {
		int temp = 0;
		int top = 1;
		int front = 2;
		int left = 3;
		int right = 4;
		int back = 5;
		int bottom = 6;
		string command;
		while (n--) {
			cin >> command;
			if (command == "north") {
				temp = top;
				top = back;
				back = bottom;
				bottom = front;
				front = temp;
			}
			if (command == "west") {
				temp = top;
				top = right;
				right = bottom;
				bottom = left;
				left = temp;
			}
			if (command == "south") {
				temp = top;
				top = front;
				front = bottom;
				bottom = back;
				back = temp;
			}
			if (command == "east") {
				temp = top;
				top = left;
				left = bottom;
				bottom = right;
				right = temp;
			}
		}
		cout << top << endl;
	}
}