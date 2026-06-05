#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n && n != 0){
        string s = "";
        int counts = 0;
        while (n > 0){
            int remainder = n % 2;
            if (remainder == 1){
                counts += 1;
                s = "1" + s;
            }
            else{
                s = "0" + s;
            }
            n /= 2;
        }
        cout << "The parity of " << s << " is " << counts << " (mod 2).\n";
    }
}