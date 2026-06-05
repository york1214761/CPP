#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    while (num--) {
        int n;
        cin >> n;
        int a = n;
        int counts1 = 0;
        while (a > 0) {
            if (a % 2 == 1) {
                counts1++;
            }
            a = a / 2;
        }
        int b = 1, c = 0;
        while (n != 0) {
            c += n % 10 * b;
            n = n / 10;
            b = b * 16;
        }
        int counts2 = 0;
        while (c > 0) {
            if (c % 2 == 1) {
                counts2++;
            }
            c = c / 2;
        }
        cout << counts1 << " " << counts2 << endl;
    }
}