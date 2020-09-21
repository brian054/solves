#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int answer = 0;
    int balance = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'R') {
            balance -= 1;
        } 
        if (s[i] == 'L') { // L
            balance += 1;
        }
        
        if (balance == 0) {
            answer++;
        }
    }
    cout << answer << endl;

}