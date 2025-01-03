#include <iostream>
#include <string>
using namespace std;

int main() {
    string num, n_num;
    while (true) {
        cin >> num;
        if (num == "0") break;
        int len = num.length();
        n_num = string(num.length(), ' ');
        // for 문 대신 string n_num = string(num.rbegin(), num.rend());로도 구현 가능
        for (int i = 0; i < len; i++) {
            n_num[i] = num[len - i - 1];
        }
        
        if (n_num == num) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}