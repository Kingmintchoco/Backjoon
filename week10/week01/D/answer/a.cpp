#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    string tmp = s;
    reverse(tmp.begin(), tmp.end());

    if(tmp == s) cout << 1 << "\n";
    else cout << 0 << "\n";
}