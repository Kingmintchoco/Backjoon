#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s, r;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();

    cin >> s;
    
    r = s;
    reverse(r.begin(), r.end());

    if(s == r) cout << 1 << "\n";
    else cout << 0 << "\n";
}