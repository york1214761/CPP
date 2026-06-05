#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) {
            break;
        }
        else {
            int carry = 0, counts = 0;
            while (a != 0 || b != 0) {
                int sum = carry + a % 10 + b % 10;
                if (sum >= 10) {
                    carry = 1;
                    counts++;
                }
                else {
                    carry = 0;
                }
                a = a / 10;
                b = b / 10;
            }
            if (counts == 0) {
                cout << "No carry operation." << endl;
            }
            else if (counts == 1) {
                cout << "1 carry operation." << endl;
            }
            else {
                cout << counts << " carry operations." << endl;
            }
        }
    }
}