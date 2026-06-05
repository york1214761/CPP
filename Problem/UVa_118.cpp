#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
char direction[4] = { 'N', 'E', 'S', 'W' };

int direction_number(char c){
    if (c == 'N'){
        return 0;
    }
    if (c == 'E'){
        return 1;
    }
    if (c == 'S'){
        return 2;
    }
    return 3;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int max_x, max_y;
    cin >> max_x >> max_y;
    vector <vector <bool>> scent(max_x + 1, vector <bool> (max_y + 1, false));
    int x, y;
    char d;
    while (cin >> x >> y >> d){
        string s;
        cin >> s;
        int direct = direction_number(d);
        bool lost = false;
        for (char command : s){
            if (command == 'R'){
                direct = (direct + 1) % 4;
            }
            else if (command == 'L'){
                direct = (direct + 3) % 4;
            }
            else if (command == 'F'){
                int next_x = x + dx[direct];
                int next_y = y + dy[direct];
                if (next_x < 0 || next_x > max_x || next_y < 0 || next_y > max_y){
                    if (scent[x][y]){
                        continue;
                    }
                    else{
                        scent[x][y] = true;
                        lost = true;
                        break;
                    }
                }
                else{
                    x = next_x;
                    y = next_y;
                }
            }
        }
        cout << x << " " << y << " " << direction[direct] << (lost == 1 ? " LOST" : "") << "\n";
    }
}