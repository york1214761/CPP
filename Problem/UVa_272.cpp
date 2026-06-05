#include <iostream>
using namespace std;

int main(){
    char temp;
    bool a = 0;
    while (cin.get(temp)) {
        if (temp == '"') {
            if (a) {
                cout << "''";
                a = !a;
            }
            else {
                cout << "``";
                a = !a;
            }
        }
        else {
            cout << temp;
        }
    }
}