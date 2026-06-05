#include <iostream>
#include <string>
using namespace std;

int main() {
	string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	while (cin.get(c)) {
		if (c == ' ') {
			cout << " ";
		}
		else if (c == '\n') {
			cout << endl;
		}
		else {
			for (int i = 0; i < keyboard.size(); i++) {
				if (c == keyboard[i]) {
					cout << keyboard[i - 2];
				}
			}
		}
	}
}