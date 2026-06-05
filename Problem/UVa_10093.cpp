#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int get_value(char c){
    if (c >= '0' && c <= '9'){
        return c - '0';
    }
    if (c >= 'A' && c <= 'Z'){
        return c - 'A' + 10;
    }
    if (c >= 'a' && c <= 'z'){
        return c - 'a' + 36;
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while (getline(cin, s)){
        int sum = 0;
        int max_value = 1;
        for (char c : s){
            int value = get_value(c);
            if (value != -1){
                sum += value;
                if (value > max_value){
                    max_value = value;
                }
            }
        }
        bool find = false;
        for (int i = max_value + 1; i <= 62; i++){
            if (sum % (i - 1) == 0){
                cout << i << "\n";
                find = true;
                break;
            }
        }
        if (!find){
            cout << "such number is impossible!\n";
        }
    }
}